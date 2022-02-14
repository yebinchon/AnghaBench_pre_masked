
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_mcounters {int * hw_cntrs_hndl; scalar_t__ cntrs_max_index; } ;
struct mlx5_ib_flow_counters_desc {int dummy; } ;
struct mlx5_ib_flow_counters_data {int ncounters; int counters_data; } ;
struct mlx5_ib_create_flow {scalar_t__ ncounters_data; struct mlx5_ib_flow_counters_data* data; } ;
struct ib_counters {int device; } ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlx5_ib_flow_counters_desc*,int ,int) ;
 int FUNC_3 (struct ib_counters*,int ,struct mlx5_ib_flow_counters_desc*,int) ;
 struct mlx5_ib_flow_counters_desc* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mlx5_ib_flow_counters_desc*) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *) ;
 struct mlx5_ib_mcounters* FUNC_8 (struct ib_counters*) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ib_counters *VAR_6,
      struct mlx5_ib_create_flow *VAR_7)
{
 struct mlx5_ib_mcounters *VAR_8 = FUNC_8(VAR_6);
 struct mlx5_ib_flow_counters_data *VAR_9 = ((void*)0);
 struct mlx5_ib_flow_counters_desc *VAR_10 = ((void*)0);
 bool VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_7 && VAR_7->ncounters_data != 0) {
  VAR_9 = VAR_7->data;
  if (VAR_9->ncounters > VAR_4)
   return -VAR_1;

  VAR_10 = FUNC_4(VAR_9->ncounters,
        sizeof(*VAR_10),
        VAR_3);
  if (!VAR_10)
   return -VAR_2;

  if (FUNC_2(VAR_10,
       FUNC_10(VAR_9->counters_data),
       sizeof(*VAR_10) * VAR_9->ncounters)) {
   VAR_12 = -VAR_0;
   goto free;
  }
 }

 if (!VAR_8->hw_cntrs_hndl) {
  VAR_8->hw_cntrs_hndl = FUNC_6(
   FUNC_9(VAR_6->device)->mdev, 0);
  if (FUNC_0(VAR_8->hw_cntrs_hndl)) {
   VAR_12 = FUNC_1(VAR_8->hw_cntrs_hndl);
   goto free;
  }
  VAR_11 = 1;
 }

 if (VAR_10) {

  if (VAR_8->cntrs_max_index) {
   VAR_12 = -VAR_1;
   goto free_hndl;
  }

  VAR_12 = FUNC_3(VAR_6,
            VAR_5,
            VAR_10,
            VAR_9->ncounters);
  if (VAR_12)
   goto free_hndl;

 } else if (!VAR_8->cntrs_max_index) {

  VAR_12 = -VAR_1;
  goto free_hndl;
 }

 return 0;

free_hndl:
 if (VAR_11) {
  FUNC_7(FUNC_9(VAR_6->device)->mdev,
    VAR_8->hw_cntrs_hndl);
  VAR_8->hw_cntrs_hndl = ((void*)0);
 }
free:
 FUNC_5(VAR_10);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uverbs_attr_bundle {int dummy; } ;
struct mlx5_read_counters_attr {scalar_t__* out; int flags; int hw_cntrs_hndl; } ;
struct mlx5_ib_mcounters {scalar_t__ cntrs_max_index; int (* read_counters ) (int ,struct mlx5_read_counters_attr*) ;int ncounters; int mcntrs_mutex; struct mlx5_ib_flow_counters_desc* counters_data; int hw_cntrs_hndl; int counters_num; } ;
struct mlx5_ib_flow_counters_desc {size_t index; size_t description; } ;
struct ib_counters_read_attr {scalar_t__ ncounters; int * counters_buff; int flags; } ;
struct ib_counters {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct mlx5_read_counters_attr*) ;
 struct mlx5_ib_mcounters* FUNC_5 (struct ib_counters*) ;

__attribute__((used)) static int FUNC_6(struct ib_counters *VAR_3,
     struct ib_counters_read_attr *VAR_4,
     struct uverbs_attr_bundle *VAR_5)
{
 struct mlx5_ib_mcounters *VAR_6 = FUNC_5(VAR_3);
 struct mlx5_read_counters_attr VAR_7 = {};
 struct mlx5_ib_flow_counters_desc *VAR_8;
 int VAR_9, VAR_10;

 FUNC_2(&VAR_6->mcntrs_mutex);
 if (VAR_6->cntrs_max_index > VAR_4->ncounters) {
  VAR_9 = -VAR_0;
  goto err_bound;
 }

 VAR_7.out = FUNC_0(VAR_6->counters_num, sizeof(u64),
     VAR_2);
 if (!VAR_7.out) {
  VAR_9 = -VAR_1;
  goto err_bound;
 }

 VAR_7.hw_cntrs_hndl = VAR_6->hw_cntrs_hndl;
 VAR_7.flags = VAR_4->flags;
 VAR_9 = VAR_6->read_counters(VAR_3->device, &VAR_7);
 if (VAR_9)
  goto err_read;




 VAR_8 = VAR_6->counters_data;
 for (VAR_10 = 0; VAR_10 < VAR_6->ncounters; VAR_10++)
  VAR_4->counters_buff[VAR_8[VAR_10].index] += VAR_7.out[VAR_8[VAR_10].description];

err_read:
 FUNC_1(VAR_7.out);
err_bound:
 FUNC_3(&VAR_6->mcntrs_mutex);
 return VAR_9;
}

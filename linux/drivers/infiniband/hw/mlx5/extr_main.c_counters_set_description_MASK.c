
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_mcounters {int type; int ncounters; int cntrs_max_index; int mcntrs_mutex; struct mlx5_ib_flow_counters_desc* counters_data; int counters_num; int read_counters; } ;
struct mlx5_ib_flow_counters_desc {scalar_t__ description; int index; } ;
struct ib_counters {int dummy; } ;
typedef enum mlx5_ib_counters_type { ____Placeholder_mlx5_ib_counters_type } mlx5_ib_counters_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct mlx5_ib_mcounters* FUNC_2 (struct ib_counters*) ;

__attribute__((used)) static int FUNC_3(struct ib_counters *VAR_5,
        enum mlx5_ib_counters_type VAR_6,
        struct mlx5_ib_flow_counters_desc *VAR_7,
        u32 VAR_8)
{
 struct mlx5_ib_mcounters *VAR_9 = FUNC_2(VAR_5);
 u32 VAR_10 = 0;
 int VAR_11;

 if (VAR_6 != VAR_3)
  return -VAR_0;


 VAR_9->type = VAR_6;
 VAR_9->read_counters = VAR_4;
 VAR_9->counters_num = VAR_1;
 VAR_9->ncounters = VAR_8;

 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_7[VAR_11].description > VAR_2)
   return -VAR_0;

  if (VAR_10 <= VAR_7[VAR_11].index)
   VAR_10 = VAR_7[VAR_11].index + 1;
 }

 FUNC_0(&VAR_9->mcntrs_mutex);
 VAR_9->counters_data = VAR_7;
 VAR_9->cntrs_max_index = VAR_10;
 FUNC_1(&VAR_9->mcntrs_mutex);

 return 0;
}

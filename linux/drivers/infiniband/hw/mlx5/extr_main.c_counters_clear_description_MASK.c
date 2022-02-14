
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_mcounters {int mcntrs_mutex; scalar_t__ cntrs_max_index; int * counters_data; } ;
struct ib_counters {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5_ib_mcounters* FUNC_3 (struct ib_counters*) ;

__attribute__((used)) static void FUNC_4(struct ib_counters *VAR_0)
{
 struct mlx5_ib_mcounters *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->mcntrs_mutex);
 FUNC_0(VAR_1->counters_data);
 VAR_1->counters_data = ((void*)0);
 VAR_1->cntrs_max_index = 0;
 FUNC_2(&VAR_1->mcntrs_mutex);
}

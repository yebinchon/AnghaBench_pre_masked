
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct i40iw_vsi_pestat {int lock; } ;
struct i40iw_dev_hw_stats {int * stats_value_64; int * stats_value_32; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct i40iw_vsi_pestat*,size_t,int *) ;
 int FUNC_1 (struct i40iw_vsi_pestat*,size_t,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct i40iw_vsi_pestat *VAR_2,
        struct i40iw_dev_hw_stats *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock, VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_0;
      VAR_4++)
  FUNC_0(VAR_2, VAR_4,
           &VAR_3->stats_value_32[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_1;
      VAR_4++)
  FUNC_1(VAR_2, VAR_4,
           &VAR_3->stats_value_64[VAR_4]);
 FUNC_3(&VAR_2->lock, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct i40iw_vsi_pestat {int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i40iw_vsi_pestat*,scalar_t__,int *) ;
 int FUNC_1 (struct i40iw_vsi_pestat*,scalar_t__,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct i40iw_vsi_pestat *VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_2->lock, VAR_5);

 for (VAR_4 = 0; VAR_4 < VAR_0;
      VAR_4++)
  FUNC_0(VAR_2, VAR_4, &VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_1;
      VAR_4++)
  FUNC_1(VAR_2, VAR_4, &VAR_3);
 FUNC_3(&VAR_2->lock, VAR_5);
}

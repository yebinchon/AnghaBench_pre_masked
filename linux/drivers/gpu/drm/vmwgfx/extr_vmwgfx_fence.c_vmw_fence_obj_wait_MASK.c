
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fence_obj {int base; } ;


 int VAR_0 ;
 long FUNC_0 (int *,int,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct vmw_fence_obj *VAR_1, bool VAR_2,
         bool VAR_3, unsigned long VAR_4)
{
 long VAR_5 = FUNC_0(&VAR_1->base, VAR_3, VAR_4);

 if (FUNC_1(VAR_5 > 0))
  return 0;
 else if (VAR_5 == 0)
  return -VAR_0;
 else
  return VAR_5;
}

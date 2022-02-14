
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ cman; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,int) ;

int FUNC_2(struct vmw_private *VAR_0, bool VAR_1)
{
 FUNC_0();

 if (VAR_0->cman)
  return FUNC_1(VAR_0->cman, VAR_1);
 else
  return 0;
}

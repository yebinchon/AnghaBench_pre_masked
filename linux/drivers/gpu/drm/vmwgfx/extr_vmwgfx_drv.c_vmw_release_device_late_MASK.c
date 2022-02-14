
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int fifo; scalar_t__ cman; int fman; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vmw_private*,int *) ;

__attribute__((used)) static void FUNC_3(struct vmw_private *VAR_0)
{
 FUNC_1(VAR_0->fman);
 if (VAR_0->cman)
  FUNC_0(VAR_0->cman);

 FUNC_2(VAR_0, &VAR_0->fifo);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _args {int argv; int srcpath; scalar_t__ rfp; } ;
typedef int mrb_state ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_0, struct _args *VAR_1)
{
  if (VAR_1->rfp)
    FUNC_0(VAR_1->rfp);
  if (VAR_1->srcpath)
    FUNC_2(VAR_0, VAR_1->srcpath);
  if (VAR_1->argv)
    FUNC_2(VAR_0, VAR_1->argv);
  FUNC_3(VAR_0);
  FUNC_1(VAR_0);
}

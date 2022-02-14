
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int FUNC_0 (int *,struct RProc*) ;
 struct RProc* FUNC_1 (int *,int *) ;

struct RProc*
FUNC_2(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  struct RProc *VAR_2 = FUNC_1(VAR_0, VAR_1);

  FUNC_0(VAR_0, VAR_2);
  return VAR_2;
}

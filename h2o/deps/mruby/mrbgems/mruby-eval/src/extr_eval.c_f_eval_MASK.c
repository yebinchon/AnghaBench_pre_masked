
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (struct RProc*) ;
 struct RProc* FUNC_1 (int *,char*,int,int ,char*,int) ;
 int FUNC_2 (int *,int ,struct RProc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,char**,int*,int *,char**,int*) ;
 int FUNC_5 () ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  char *VAR_2;
  mrb_int VAR_3;
  mrb_value VAR_4 = FUNC_5();
  char *VAR_5 = ((void*)0);
  mrb_int VAR_6 = 1;
  struct RProc *VAR_7;

  FUNC_4(VAR_0, "s|ozi", &VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6);

  VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  FUNC_3(!FUNC_0(VAR_7));
  return FUNC_2(VAR_0, VAR_1, VAR_7);
}

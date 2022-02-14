
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_3 (int *,char*) ;

void
FUNC_4(mrb_state *VAR_10)
{
  struct RClass *VAR_11;

  VAR_11 = FUNC_3(VAR_10, "GC");

  FUNC_2(VAR_10, VAR_11, "start", VAR_6, FUNC_0());
  FUNC_2(VAR_10, VAR_11, "enable", VAR_1, FUNC_0());
  FUNC_2(VAR_10, VAR_11, "disable", VAR_0, FUNC_0());
  FUNC_2(VAR_10, VAR_11, "interval_ratio", VAR_4, FUNC_0());
  FUNC_2(VAR_10, VAR_11, "interval_ratio=", VAR_5, FUNC_1(1));
  FUNC_2(VAR_10, VAR_11, "step_ratio", VAR_7, FUNC_0());
  FUNC_2(VAR_10, VAR_11, "step_ratio=", VAR_8, FUNC_1(1));
  FUNC_2(VAR_10, VAR_11, "generational_mode=", VAR_3, FUNC_1(1));
  FUNC_2(VAR_10, VAR_11, "generational_mode", VAR_2, FUNC_0());





}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct RClass* FUNC_3 (int *,char*) ;

void
FUNC_4(mrb_state* VAR_4)
{
  struct RClass *VAR_5 = FUNC_3(VAR_4, "Integral");

  FUNC_2(VAR_4, VAR_5, "chr", VAR_2, FUNC_0());
  FUNC_2(VAR_4, VAR_5, "allbits?", VAR_0, FUNC_1(1));
  FUNC_2(VAR_4, VAR_5, "anybits?", VAR_1, FUNC_1(1));
  FUNC_2(VAR_4, VAR_5, "nobits?", VAR_3, FUNC_1(1));
}

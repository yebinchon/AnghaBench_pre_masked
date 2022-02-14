
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int wcnt; int print_no; int dbg; int * words; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,unsigned long,int ) ;
 int FUNC_9 (char*) ;

dbgcmd_state
FUNC_10(mrb_state *VAR_1, mrdb_state *VAR_2)
{
  mrb_value VAR_3;
  mrb_value VAR_4;
  mrb_value VAR_5;
  uint8_t VAR_6;
  int VAR_7;

  if (VAR_2->wcnt <= 1) {
    FUNC_9("Parameter not specified.");
    return VAR_0;
  }

  VAR_7 = FUNC_4(VAR_1);


  VAR_3 = FUNC_7(VAR_1, ((void*)0));
  for (VAR_6=1; VAR_6<VAR_2->wcnt; VAR_6++) {
    VAR_3 = FUNC_6(VAR_1, VAR_3, " ");
    VAR_3 = FUNC_5(VAR_1, VAR_3, VAR_2->words[VAR_6]);
  }

  VAR_4 = FUNC_2(VAR_1, VAR_2->dbg, FUNC_1(VAR_3), FUNC_0(VAR_3), ((void*)0));


  VAR_5 = FUNC_6(VAR_1, VAR_4, "\0");
  FUNC_8("$%lu = %s\n", (unsigned long)VAR_2->print_no++, FUNC_1(VAR_5));

  if (VAR_2->print_no == 0) {
    VAR_2->print_no = 1;
  }

  FUNC_3(VAR_1, VAR_7);

  return VAR_0;
}

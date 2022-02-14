
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct mrb_insn_data {scalar_t__ insn; scalar_t__ a; scalar_t__ b; } ;
typedef int mrb_code ;
struct TYPE_7__ {scalar_t__ pc; scalar_t__ lastpc; } ;
typedef TYPE_1__ codegen_scope ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 struct mrb_insn_data FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static uint16_t
FUNC_4(codegen_scope *VAR_2, mrb_code VAR_3, uint16_t VAR_4, int VAR_5, int VAR_6)
{
  uint16_t VAR_7;

  if (!FUNC_3(VAR_2) && !VAR_6) {
    struct mrb_insn_data VAR_8 = FUNC_2(VAR_2);

    if (VAR_8.insn == VAR_1 && VAR_8.a == VAR_4) {
      VAR_2->pc = VAR_2->lastpc;
      VAR_4 = VAR_8.b;
    }
  }

  VAR_2->lastpc = VAR_2->pc;
  if (VAR_4 > 0xff) {
    FUNC_0(VAR_2, VAR_0);
    FUNC_0(VAR_2, VAR_3);
    FUNC_1(VAR_2, VAR_4);
    VAR_7 = VAR_2->pc;
    FUNC_1(VAR_2, VAR_5);
  }
  else {
    FUNC_0(VAR_2, VAR_3);
    FUNC_0(VAR_2, (uint8_t)VAR_4);
    VAR_7 = VAR_2->pc;
    FUNC_1(VAR_2, VAR_5);
  }
  return VAR_7;
}

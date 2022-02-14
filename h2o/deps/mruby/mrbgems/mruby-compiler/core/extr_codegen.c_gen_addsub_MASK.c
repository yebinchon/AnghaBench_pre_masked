
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct mrb_insn_data {int insn; int b; } ;
struct TYPE_7__ {int lastpc; int pc; } ;
typedef TYPE_1__ codegen_scope ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 struct mrb_insn_data FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(codegen_scope *VAR_4, uint8_t VAR_5, uint16_t VAR_6)
{
  if (FUNC_3(VAR_4)) {
  normal:
    FUNC_0(VAR_4, VAR_5, VAR_6);
    return;
  }
  else {
    struct mrb_insn_data VAR_7 = FUNC_2(VAR_4);

    switch (VAR_7.insn) {
    case 128:
      if (VAR_5 == VAR_0) VAR_5 = VAR_2;
      else VAR_5 = VAR_0;
      VAR_7.b = 1;
      goto replace;
    case 136: case 135: case 134: case 133:
    case 132: case 131: case 130: case 129:
      VAR_7.b = VAR_7.insn - 136;

    case 137:
    replace:
      if (VAR_7.b >= 128) goto normal;
      VAR_4->pc = VAR_4->lastpc;
      if (VAR_5 == VAR_0) {
        FUNC_1(VAR_4, VAR_1, VAR_6, (uint8_t)VAR_7.b);
      }
      else {
        FUNC_1(VAR_4, VAR_3, VAR_6, (uint8_t)VAR_7.b);
      }
      break;
    default:
      goto normal;
    }
  }
}

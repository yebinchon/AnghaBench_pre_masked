
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int mrb_code ;
struct TYPE_4__ {int pc; int lastpc; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(codegen_scope *VAR_0, mrb_code VAR_1, uint32_t VAR_2)
{
  uint8_t VAR_3 = (VAR_2>>16) & 0xff;
  uint8_t VAR_4 = (VAR_2>>8) & 0xff;
  uint8_t VAR_5 = VAR_2 & 0xff;

  VAR_0->lastpc = VAR_0->pc;
  FUNC_0(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_3);
  FUNC_0(VAR_0, VAR_4);
  FUNC_0(VAR_0, VAR_5);
}

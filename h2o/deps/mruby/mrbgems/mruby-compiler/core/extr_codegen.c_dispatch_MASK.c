
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int iseq; int pc; int lastlabel; } ;
typedef TYPE_1__ codegen_scope ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int
FUNC_2(codegen_scope *VAR_0, uint16_t VAR_1)
{
  uint16_t VAR_2;

  VAR_0->lastlabel = VAR_0->pc;
  VAR_2 = FUNC_0(VAR_0->iseq+VAR_1);
  FUNC_1(VAR_0, VAR_1, VAR_0->pc);
  return VAR_2;
}

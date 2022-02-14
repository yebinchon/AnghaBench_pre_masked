
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_bool ;
struct TYPE_4__ {scalar_t__ lastlabel; scalar_t__ pc; scalar_t__ lastpc; } ;
typedef TYPE_1__ codegen_scope ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static mrb_bool
FUNC_1(codegen_scope *VAR_0)
{
  return FUNC_0(VAR_0) || VAR_0->lastlabel == VAR_0->pc || VAR_0->pc == 0 || VAR_0->pc == VAR_0->lastpc;
}

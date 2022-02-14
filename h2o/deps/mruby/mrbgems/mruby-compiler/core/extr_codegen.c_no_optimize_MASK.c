
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_bool ;
struct TYPE_5__ {TYPE_1__* parser; } ;
typedef TYPE_2__ codegen_scope ;
struct TYPE_4__ {scalar_t__ no_optimize; } ;


 int VAR_0 ;
 int VAR_1 ;

mrb_bool
FUNC_0(codegen_scope *VAR_2)
{
  if (VAR_2 && VAR_2->parser && VAR_2->parser->no_optimize)
    return VAR_1;
  return VAR_0;
}

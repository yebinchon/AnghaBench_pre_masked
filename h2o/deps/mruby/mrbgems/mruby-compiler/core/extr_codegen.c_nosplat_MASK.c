
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cdr; TYPE_1__* car; } ;
typedef TYPE_2__ node ;
typedef int mrb_bool ;
struct TYPE_4__ {int car; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static mrb_bool
FUNC_1(node *VAR_3)
{
  while (VAR_3) {
    if (FUNC_0(VAR_3->car->car) == VAR_1) return VAR_0;
    VAR_3 = VAR_3->cdr;
  }
  return VAR_2;
}

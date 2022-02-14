
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int * iseq; } ;
typedef TYPE_1__ mrb_irep ;
typedef int mrb_code ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_irep *VAR_2, mrb_code *VAR_3, uint16_t VAR_4)
{
  if (VAR_3 > VAR_2->iseq) {
    if (VAR_4 == FUNC_0(VAR_2, VAR_3 - VAR_2->iseq - 1)) {
      return VAR_0;
    }
  }
  return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_4__ {scalar_t__ pos; } ;
typedef TYPE_1__ mrb_input_stream_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_input_stream_t *VAR_2 = FUNC_0(VAR_1);
  FUNC_1(VAR_0, VAR_2);
  VAR_2->pos = 0;
  return VAR_1;
}

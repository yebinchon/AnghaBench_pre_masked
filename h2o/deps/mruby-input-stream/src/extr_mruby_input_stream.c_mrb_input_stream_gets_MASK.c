
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_5__ {scalar_t__ pos; scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_1__ mrb_input_stream_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_input_stream_t *VAR_2 = FUNC_0(VAR_1);
  mrb_int VAR_3, VAR_4;

  FUNC_1(VAR_0, VAR_2);

  VAR_3 = VAR_2->pos;
  VAR_4 = FUNC_4(VAR_2, '\n');
  if (VAR_4 < 0) {
    return FUNC_2();
  }
  if (VAR_2->pos + VAR_4 < VAR_2->len) {
    VAR_4++;
  }
  VAR_2->pos += VAR_4;
  return FUNC_3(VAR_0, (VAR_2->base + VAR_3), VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_4__ {int pos; char* base; int len; } ;
typedef TYPE_1__ mrb_input_stream_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,char const*,int) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;
  mrb_value VAR_3;
  mrb_int VAR_4 = FUNC_2(VAR_0, "|iS", &VAR_2, &VAR_3), VAR_5;
  mrb_input_stream_t *VAR_6 = FUNC_0(VAR_1);
  const char *VAR_7;

  FUNC_1(VAR_0, VAR_6);

  VAR_5 = VAR_6->pos;
  VAR_7 = VAR_6->base + VAR_5;

  if (VAR_5 >= VAR_6->len) {
    return VAR_4 == 0 ? FUNC_6(VAR_0, "") : FUNC_3();
  }
  if (VAR_4 == 0) {
    VAR_6->pos = VAR_6->len;
    return FUNC_5(VAR_0, VAR_7, VAR_6->len - VAR_5);
  } else {
    mrb_int VAR_8 = VAR_5 + VAR_2;
    if (VAR_8 > VAR_6->len) {
      VAR_8 = VAR_6->len;
    }
    VAR_6->pos = VAR_8;
    if (VAR_4 == 1) {
      return FUNC_5(VAR_0, VAR_7, VAR_8 - VAR_5);
    } else {
      return FUNC_4(VAR_0, VAR_3, VAR_7, VAR_8 - VAR_5);
    }
  }
}

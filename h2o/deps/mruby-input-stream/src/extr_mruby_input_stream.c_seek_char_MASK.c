
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t mrb_int ;
struct TYPE_3__ {char* base; size_t len; size_t pos; } ;
typedef TYPE_1__ mrb_input_stream_t ;



__attribute__((used)) static mrb_int
FUNC_0(mrb_input_stream_t *VAR_0, char VAR_1){
  const char *VAR_2 = VAR_0->base;
  size_t VAR_3 = VAR_0->len;
  mrb_int VAR_4 = VAR_0->pos;
  const char *VAR_5 = VAR_2 + VAR_3;
  const char *VAR_6 = VAR_2 + VAR_4;
  const char *VAR_7 = VAR_6;

  if (VAR_4 >= VAR_3) {
    return -1;
  }

  while (VAR_7 < VAR_5) {
    if (*VAR_7 == VAR_1) {
      break;
    }
    VAR_7++;
  }
  return (VAR_7 - VAR_6);
}

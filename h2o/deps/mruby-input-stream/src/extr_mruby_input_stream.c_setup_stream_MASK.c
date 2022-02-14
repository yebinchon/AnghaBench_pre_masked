
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_3__ {char* base; int len; int pos; int * free_cb_data; int * free_cb; } ;
typedef TYPE_1__ mrb_input_stream_t ;
typedef int * mrb_input_stream_free_callback ;


 int * VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(mrb_state *VAR_1, mrb_input_stream_t *VAR_2, const char *VAR_3, mrb_int VAR_4, mrb_int VAR_5, mrb_input_stream_free_callback VAR_6, void *VAR_7)
{
  if (VAR_6 == ((void*)0)) {
    if (VAR_4 > 0) {
      char *VAR_8 = (char *)FUNC_1(VAR_1, sizeof(char)*VAR_4);
      FUNC_0(VAR_8, VAR_3, VAR_4);
      VAR_2->base = VAR_8;
      VAR_2->len = VAR_4;
    } else {
      VAR_2->base = ((void*)0);
      VAR_2->len = VAR_4;
    }
    VAR_2->free_cb = VAR_0;
    VAR_2->free_cb_data = ((void*)0);
  } else {
    VAR_2->base = VAR_3;
    VAR_2->len = VAR_4;
    VAR_2->free_cb = VAR_6;
    VAR_2->free_cb_data = VAR_7;
  }

  VAR_2->pos = VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_3__ {char* base; void* free_cb_data; int free_cb; int pos; int len; } ;
typedef TYPE_1__ mrb_input_stream_t ;
typedef int mrb_input_stream_free_callback ;


 TYPE_1__* FUNC_0 (int ) ;

void
FUNC_1(mrb_state *VAR_0, mrb_value VAR_1, const char **VAR_2, mrb_int *VAR_3, mrb_int *VAR_4, mrb_input_stream_free_callback *VAR_5, void **VAR_6)
{
  mrb_input_stream_t *VAR_7 = FUNC_0(VAR_1);

  if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_7->base;
  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_7->len;
  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_7->pos;
  if (VAR_5 != ((void*)0))
    *VAR_5 = VAR_7->free_cb;
  if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_7->free_cb_data;
}

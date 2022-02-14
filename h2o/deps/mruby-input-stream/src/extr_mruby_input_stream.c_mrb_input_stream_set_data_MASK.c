
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
struct TYPE_4__ {int free_cb_data; int len; int base; int (* free_cb ) (int *,int ,int ,int ) ;} ;
typedef TYPE_1__ mrb_input_stream_t ;
typedef int mrb_input_stream_free_callback ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,char const*,int ,int ,int ,void*) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1, const char *VAR_2, mrb_int VAR_3, mrb_int VAR_4, mrb_input_stream_free_callback VAR_5, void *VAR_6)
{
  mrb_input_stream_t *VAR_7 = FUNC_0(VAR_1);

  if (VAR_7->free_cb != ((void*)0))
    VAR_7->free_cb(VAR_0, VAR_7->base, VAR_7->len, VAR_7->free_cb_data);
  FUNC_1(VAR_0, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {int free_cb_data; int len; int base; int (* free_cb ) (int *,int ,int ,int ) ;} ;
typedef TYPE_1__ mrb_input_stream_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, void *VAR_1)
{
  mrb_input_stream_t *VAR_2 = (mrb_input_stream_t *)VAR_1;
  if (VAR_2->free_cb != ((void*)0))
    VAR_2->free_cb(VAR_0, VAR_2->base, VAR_2->len, VAR_2->free_cb_data);
  FUNC_0(VAR_0, VAR_2);
}

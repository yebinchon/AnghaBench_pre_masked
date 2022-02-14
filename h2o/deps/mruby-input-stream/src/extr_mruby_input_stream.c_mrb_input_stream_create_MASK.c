
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_input_stream_t ;
typedef int mrb_input_stream_free_callback ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,char const*,int ,int ,int ,void*) ;

mrb_input_stream_t*
FUNC_2(mrb_state *VAR_0, const char *VAR_1, mrb_int VAR_2, mrb_input_stream_free_callback VAR_3, void *VAR_4)
{
  mrb_input_stream_t *VAR_5 = (mrb_input_stream_t *)FUNC_0(VAR_0, sizeof(mrb_input_stream_t));

  FUNC_1(VAR_0, VAR_5, VAR_1, VAR_2, 0, VAR_3, VAR_4);
  return VAR_5;
}

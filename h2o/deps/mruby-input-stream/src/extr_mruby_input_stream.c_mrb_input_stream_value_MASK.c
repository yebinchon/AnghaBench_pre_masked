
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RData {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_input_stream_t ;


 struct RClass* FUNC_0 (int *,char*) ;
 struct RData* FUNC_1 (int *,struct RClass*,int *,int *) ;
 int * FUNC_2 (int *,char const*,int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct RData*) ;

mrb_value
FUNC_4(mrb_state *VAR_1, const char *VAR_2, mrb_int VAR_3)
{
  mrb_input_stream_t *VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0), ((void*)0));
  struct RClass *VAR_5 = FUNC_0(VAR_1, "InputStream");
  struct RData *VAR_6 = FUNC_1(VAR_1, VAR_5, VAR_4, &VAR_0);

  return FUNC_3(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_input_stream_t ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_input_stream_t *VAR_3 = FUNC_0(VAR_2);
  mrb_int VAR_4, VAR_5, VAR_6;

  FUNC_1(VAR_1, VAR_3);

  VAR_5 = FUNC_3(VAR_1, "i", &VAR_4);
  if (VAR_5 != 1) {
    FUNC_6(VAR_1, VAR_0, "wrong number of arguments (%S for 1)", FUNC_2(VAR_5));
  }
  if (VAR_4 < 0 || VAR_4 > 255) {
    FUNC_5(VAR_1, VAR_0, "index should be a byte (0 - 255)");
  }

  VAR_6 = FUNC_7(VAR_3, VAR_4);
  if (VAR_6 < 0) {
    return FUNC_4();
  }

  return FUNC_2(VAR_6);
}

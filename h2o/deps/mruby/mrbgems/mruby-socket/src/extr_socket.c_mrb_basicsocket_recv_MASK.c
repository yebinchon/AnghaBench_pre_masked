
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fsize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_0, mrb_value VAR_1)
{
  ssize_t VAR_2;
  mrb_int VAR_3, VAR_4 = 0;
  mrb_value VAR_5;

  FUNC_1(VAR_0, "i|i", &VAR_3, &VAR_4);
  VAR_5 = FUNC_2(VAR_0, VAR_3);
  VAR_2 = FUNC_5(FUNC_6(VAR_0, VAR_1), FUNC_0(VAR_5), (fsize_t)VAR_3, (int)VAR_4);
  if (VAR_2 == -1)
    FUNC_4(VAR_0, "recv");
  FUNC_3(VAR_0, VAR_5, (mrb_int)VAR_2);
  return VAR_5;
}

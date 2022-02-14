
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int fsize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  size_t VAR_4;




  VAR_4 = 256;

  VAR_3 = FUNC_2(VAR_1, (mrb_int)VAR_4);
  if (FUNC_1(FUNC_0(VAR_3), (fsize_t)VAR_4) != 0)
    FUNC_4(VAR_1, "gethostname");
  FUNC_3(VAR_1, VAR_3, (mrb_int)FUNC_5(FUNC_0(VAR_3)));
  return VAR_3;
}

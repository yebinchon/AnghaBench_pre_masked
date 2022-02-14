
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int ) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int *,char*,size_t*) ;
 int FUNC_4 () ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2;
  FUNC_3(VAR_0, "i", &VAR_2);

  if (VAR_2 < 0)
    VAR_2 += FUNC_0(VAR_1);
  if (VAR_2 < 0 || FUNC_0(VAR_1) <= VAR_2)
    return FUNC_4();

  return FUNC_2((unsigned char)FUNC_1(VAR_1)[VAR_2]);
}

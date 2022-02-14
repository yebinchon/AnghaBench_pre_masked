
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned char* FUNC_1 (int ) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (int *,char*,int*,int*) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3, VAR_4;
  mrb_int VAR_5;

  FUNC_3(VAR_1, "ii", &VAR_3, &VAR_4);

  VAR_5 = FUNC_0(VAR_2);
  if (VAR_3 < -VAR_5 || VAR_5 <= VAR_3)
    FUNC_4(VAR_1, VAR_0, "index %S is out of array", FUNC_2(VAR_3));
  if (VAR_3 < 0)
    VAR_3 += VAR_5;

  FUNC_5(VAR_1, FUNC_6(VAR_2));
  VAR_4 &= 0xff;
  FUNC_1(VAR_2)[VAR_3] = (unsigned char)VAR_4;
  return FUNC_2((unsigned char)VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2, mrb_int VAR_3)
{
  if (VAR_3 < 0) VAR_3 = FUNC_0(VAR_2) + VAR_3;
  if (VAR_3 < 0)
      FUNC_3(VAR_1, VAR_0,
                 "offset %S too small for struct(size:%S)",
                 FUNC_2(VAR_3), FUNC_2(FUNC_0(VAR_2)));
  if (FUNC_0(VAR_2) <= VAR_3)
    FUNC_3(VAR_1, VAR_0,
               "offset %S too large for struct(size:%S)",
               FUNC_2(VAR_3), FUNC_2(FUNC_0(VAR_2)));
  return FUNC_1(VAR_2)[VAR_3];
}

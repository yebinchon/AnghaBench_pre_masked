
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_2, int VAR_3, mrb_bool *VAR_4)
{
  int VAR_5;

  *VAR_4 = VAR_1;
  if (VAR_3 < 0)
    return VAR_3;

  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 > 0) *VAR_4 = VAR_0;
  return VAR_5;
}

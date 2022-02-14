
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_3, int VAR_4[2])
{
  int VAR_5;
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5 == -1) {
    if (VAR_2 == VAR_0 || VAR_2 == VAR_1) {
      FUNC_1(VAR_3);
      VAR_5 = FUNC_0(VAR_3, VAR_4);
    }
  }
  return VAR_5;
}

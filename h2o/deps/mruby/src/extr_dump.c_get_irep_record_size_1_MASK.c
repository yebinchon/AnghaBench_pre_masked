
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_irep ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static size_t
FUNC_4(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  size_t VAR_2 = 0;

  VAR_2 += FUNC_0(VAR_0);
  VAR_2 += FUNC_1(VAR_0, VAR_1);
  VAR_2 += FUNC_2(VAR_0, VAR_1);
  VAR_2 += FUNC_3(VAR_0, VAR_1);
  return VAR_2;
}

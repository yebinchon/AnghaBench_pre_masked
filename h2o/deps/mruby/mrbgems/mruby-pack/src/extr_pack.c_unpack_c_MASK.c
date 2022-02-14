
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_1, const void *VAR_2, int VAR_3, mrb_value VAR_4, unsigned int VAR_5)
{
  if (VAR_5 & VAR_0)
    FUNC_0(VAR_1, VAR_4, FUNC_1(*(signed char *)VAR_2));
  else
    FUNC_0(VAR_1, VAR_4, FUNC_1(*(unsigned char *)VAR_2));
  return 1;
}

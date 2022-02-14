
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxk_state {int m_operation_mode; } ;
typedef scalar_t__ s32 ;





 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*,scalar_t__*) ;
 int FUNC_2 (struct drxk_state*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct drxk_state *VAR_0, s32 *VAR_1)
{
 FUNC_0(1, "\n");

 *VAR_1 = 0;
 switch (VAR_0->m_operation_mode) {
 case 130:
  return FUNC_1(VAR_0, VAR_1);
 case 129:
 case 128:
  return FUNC_2(VAR_0, VAR_1);
 default:
  break;
 }
 return 0;
}

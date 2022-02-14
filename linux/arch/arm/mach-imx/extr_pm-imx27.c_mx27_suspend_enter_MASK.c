
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(suspend_state_t VAR_2)
{
 u32 VAR_3;
 switch (VAR_2) {
 case 128:

  VAR_3 = FUNC_2(FUNC_0(VAR_1));
  VAR_3 &= 0xFFFFFFFC;
  FUNC_3(VAR_3, FUNC_0(VAR_1));

  FUNC_1();
  break;

 default:
  return -VAR_0;
 }
 return 0;
}

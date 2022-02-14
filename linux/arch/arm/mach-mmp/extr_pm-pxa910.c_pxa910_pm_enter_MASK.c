
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(suspend_state_t VAR_5)
{
 unsigned int VAR_6, VAR_7 = 0;


 VAR_7 = FUNC_2(FUNC_1(VAR_4));
 if ((VAR_7 & 0x3) == 0)
  return -VAR_3;

 VAR_6 = FUNC_2(VAR_0);
 VAR_6 |= VAR_1
  | VAR_2;
 FUNC_3(VAR_6, VAR_0);


 FUNC_5();

 while (!(FUNC_7(FUNC_0(0x8)) & (1 << 16)))
  FUNC_8(1);

 FUNC_4();


 FUNC_6();

 while (!(FUNC_7(FUNC_0(0x8)) & (1 << 16)))
  FUNC_8(1);

 VAR_6 = FUNC_2(VAR_0);
 VAR_6 &= ~(VAR_1
  | VAR_2);
 FUNC_3(VAR_6, VAR_0);

 return 0;
}

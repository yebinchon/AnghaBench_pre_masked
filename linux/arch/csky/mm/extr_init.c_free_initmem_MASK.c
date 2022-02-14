
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;

void FUNC_6(void)
{
 unsigned long VAR_3;

 VAR_3 = (unsigned long) &VAR_1;

 while (VAR_3 < (unsigned long) &VAR_2) {
  FUNC_0(FUNC_5(VAR_3));
  FUNC_2(FUNC_5(VAR_3));
  FUNC_1(VAR_3);
  FUNC_4();
  VAR_3 += VAR_0;
 }

 FUNC_3("Freeing unused kernel memory: %dk freed\n",
 ((unsigned int)&VAR_2 - (unsigned int)&VAR_1) >> 10);
}

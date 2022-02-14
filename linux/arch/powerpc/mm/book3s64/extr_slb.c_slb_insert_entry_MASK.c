
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum slb_index { ____Placeholder_slb_index } slb_index ;


 long VAR_0 ;
 unsigned long FUNC_0 (unsigned long,int,unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_5 (unsigned long,int,int) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static long FUNC_7(unsigned long VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, int VAR_4, bool VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7, VAR_8;
 enum slb_index VAR_9;

 VAR_6 = FUNC_4(VAR_2, VAR_1, VAR_4);
 if (!VAR_6)
  return -VAR_0;
 FUNC_3();

 VAR_9 = FUNC_1(VAR_5);

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_3);
 VAR_8 = FUNC_5(VAR_1, VAR_4, VAR_9);







 FUNC_2(0, VAR_1);
 asm volatile("slbmte %0, %1" : : "r" (VAR_7), "r" (VAR_8));

 FUNC_3();

 if (!VAR_5)
  FUNC_6(VAR_8);

 return 0;
}

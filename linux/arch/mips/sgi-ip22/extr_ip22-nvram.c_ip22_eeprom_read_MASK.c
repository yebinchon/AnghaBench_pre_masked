
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int,unsigned int*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int*,int ,int) ;
 int FUNC_4 (unsigned int*) ;
 int FUNC_5 (unsigned int*) ;

unsigned short FUNC_6(unsigned int *VAR_4, int VAR_5)
{
 unsigned short VAR_6 = 0;
 int VAR_7;

 FUNC_1(FUNC_0(VAR_4) & ~VAR_2, VAR_4);
 FUNC_5(VAR_4);
 FUNC_3(VAR_4, VAR_3, VAR_5);


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  FUNC_1(FUNC_0(VAR_4) & ~VAR_1, VAR_4);
  FUNC_2();
  FUNC_1(FUNC_0(VAR_4) | VAR_1, VAR_4);
  FUNC_2();
  VAR_6 <<= 1;
  if (FUNC_0(VAR_4) & VAR_0)
   VAR_6 |= 1;
 }

 FUNC_4(VAR_4);

 return VAR_6;
}

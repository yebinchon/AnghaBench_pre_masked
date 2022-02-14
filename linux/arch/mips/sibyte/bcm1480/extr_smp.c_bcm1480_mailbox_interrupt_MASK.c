
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 int VAR_5 = FUNC_7();
 int VAR_6 = VAR_0;
 unsigned int VAR_7;

 FUNC_5(VAR_6);

 VAR_7 = (FUNC_0(VAR_4[VAR_5]) >> 48) & 0xffff;


 FUNC_1(((u64)VAR_7)<<48, VAR_3[VAR_5]);

 if (VAR_7 & VAR_2)
  FUNC_6();

 if (VAR_7 & VAR_1) {
  FUNC_3();
  FUNC_2();
  FUNC_4();
 }
}

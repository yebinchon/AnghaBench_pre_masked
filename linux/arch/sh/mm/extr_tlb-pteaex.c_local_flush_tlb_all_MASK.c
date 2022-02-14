
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

void FUNC_7(void)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8;




 FUNC_6(VAR_6);
 FUNC_4();

 VAR_7 = FUNC_0(VAR_0);
 VAR_7 = ((VAR_7 & VAR_1) >> VAR_3);

 if (VAR_7 == 0)
  VAR_7 = VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_1(0x0, VAR_5 | (VAR_8 << 8));

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  FUNC_1(0x0, VAR_4 | (VAR_8 << 8));

 FUNC_2();
 FUNC_3();
 FUNC_5(VAR_6);
}

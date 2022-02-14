
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned VAR_5;
 phys_addr_t VAR_6;


 VAR_5 = (FUNC_4() & VAR_2) >>
  FUNC_1(VAR_2);
 if (VAR_5 < 6)
  return;


 VAR_6 = FUNC_3();
 FUNC_0((VAR_6 & VAR_0) != VAR_6);
 if (!VAR_6)
  return;


 FUNC_5(VAR_6 | VAR_1);


 VAR_4 = FUNC_2(VAR_6, VAR_3);
}

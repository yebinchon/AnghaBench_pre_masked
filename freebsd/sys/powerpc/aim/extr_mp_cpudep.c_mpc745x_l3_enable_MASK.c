
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static register_t
FUNC_4(register_t VAR_5)
{
 register_t VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 & VAR_1)
  return (VAR_6);


 VAR_6 = VAR_5 & ~(VAR_1 | VAR_2 | VAR_3 | VAR_0);
 FUNC_2(VAR_4, VAR_6);
 VAR_6 |= 0x4000000;
 FUNC_2(VAR_4, VAR_6);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_6 | VAR_2);
 while (FUNC_1(VAR_4) & VAR_2)
  ;
 FUNC_2(VAR_4, VAR_6 & ~VAR_0);
 FUNC_3();
 FUNC_0(100);
 FUNC_2(VAR_4, VAR_6);
 FUNC_3();
 FUNC_0(100);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_4, VAR_6);
 FUNC_3();

 return(VAR_6);
}

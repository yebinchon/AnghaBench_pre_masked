
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static register_t
FUNC_4(register_t VAR_4)
{
 register_t VAR_5, VAR_6;
 uint16_t VAR_7;

 VAR_7 = FUNC_0() >> 16;
 switch (VAR_7) {
 case 129:
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 & VAR_0)
  return (VAR_5);


 VAR_5 = VAR_4 & ~VAR_0;
 FUNC_2(VAR_3, VAR_5 | VAR_1);
 do {
  VAR_5 = FUNC_1(VAR_3);
 } while (VAR_5 & VAR_6);
 FUNC_3();
 FUNC_2(VAR_3, VAR_4);
 FUNC_3();

 return (VAR_4);
}

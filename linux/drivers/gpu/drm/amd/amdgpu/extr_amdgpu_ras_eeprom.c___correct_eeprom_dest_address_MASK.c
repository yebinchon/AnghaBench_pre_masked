
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_2(uint32_t VAR_4)
{
 uint32_t VAR_5 = VAR_4 + VAR_3;


 if (VAR_5 > VAR_2) {
  FUNC_1("Reached end of EEPROM memory, jumping to 0 "
    "and overriding old record");
  return VAR_1;
 }
 if ((VAR_4 & VAR_0) != (VAR_5 & VAR_0)) {
  FUNC_0("Reached end of EEPROM memory page, jumping to next: %lx",
    (VAR_5 & VAR_0));

  return (VAR_5 & VAR_0);
 }

 return VAR_4;
}

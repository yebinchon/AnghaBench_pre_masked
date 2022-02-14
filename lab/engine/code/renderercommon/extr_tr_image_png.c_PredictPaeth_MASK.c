
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint8_t FUNC_1(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{






 uint8_t VAR_3;
 int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = ((int) VAR_0) + ((int) VAR_1) - ((int) VAR_2);
 VAR_5 = FUNC_0(VAR_4 - ((int) VAR_0));
 VAR_6 = FUNC_0(VAR_4 - ((int) VAR_1));
 VAR_7 = FUNC_0(VAR_4 - ((int) VAR_2));

 if((VAR_5 <= VAR_6) && (VAR_5 <= VAR_7))
 {
  VAR_3 = VAR_0;
 }
 else if(VAR_6 <= VAR_7)
 {
  VAR_3 = VAR_1;
 }
 else
 {
  VAR_3 = VAR_2;
 }

 return(VAR_3);

}

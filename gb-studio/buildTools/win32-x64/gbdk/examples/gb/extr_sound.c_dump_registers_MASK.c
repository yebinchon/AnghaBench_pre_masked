
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (char) ;
 scalar_t__ VAR_5 ;

void FUNC_5()
{
  UBYTE VAR_6;
  UBYTE VAR_7, VAR_8;

  FUNC_0();
  FUNC_1(VAR_0, VAR_2);
  FUNC_2("Register Dump");

  for(VAR_7 = 0, VAR_8 = 0; VAR_7 <= 0x16; VAR_7++, VAR_8++) {
    if(VAR_7 == 0x05 || VAR_7 == 0x0F)
      VAR_7++;
    if(VAR_8%2 == 0) {
      FUNC_1(VAR_0, VAR_1+VAR_8/2);
      FUNC_2("0xFF");
    } else {
      FUNC_1(VAR_0+6, VAR_1+VAR_8/2);
      FUNC_4('-');
    }
    FUNC_3(VAR_7+0x10, 16, VAR_3);
    if(VAR_8%2 == 0) {
      FUNC_1(VAR_4, VAR_1+VAR_8/2);
    } else {
      FUNC_1(VAR_4+2, VAR_1+VAR_8/2);
      FUNC_4('-');
    }
    VAR_6 = ((UBYTE *)VAR_5)[VAR_7];
    if(!(VAR_6 & 0xF0U)) FUNC_4('0');
    FUNC_3(VAR_6, 16, VAR_3);
  }
}

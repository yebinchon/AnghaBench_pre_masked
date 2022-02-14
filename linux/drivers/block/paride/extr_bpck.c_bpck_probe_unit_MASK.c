
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unit; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 ( PIA *VAR_0 )

{ int VAR_1, VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_0->unit;
 VAR_6 = 0;
 FUNC_5(4); FUNC_5(0xe); FUNC_2(); FUNC_3(2);
 VAR_1 = FUNC_1()&0xf8;
 VAR_2 = FUNC_0();
 FUNC_4(255-VAR_4); FUNC_5(4); FUNC_4(VAR_4);
 FUNC_3(8); FUNC_3(8); FUNC_3(8);
 FUNC_3(2); VAR_5 = FUNC_1()&0xf8;
 VAR_3 = ((VAR_4 % 8) == 7);
 if ((VAR_3) || (VAR_5 != VAR_1)) { FUNC_3(2); VAR_6 = FUNC_1()&0xf8; }
 if ((VAR_5 == VAR_1) && ((!VAR_3) || (VAR_6 == VAR_1))) {
  FUNC_5(0x4c); FUNC_4(VAR_2);
  return 0;
 }
 FUNC_3(8); FUNC_4(0); FUNC_3(2); FUNC_5(0x4c); FUNC_4(VAR_2);
 return 1;
}

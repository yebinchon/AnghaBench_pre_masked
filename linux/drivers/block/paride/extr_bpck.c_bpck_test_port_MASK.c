
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIA ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3 ( PIA *VAR_0 )

{ int VAR_1, VAR_2, VAR_3;

 FUNC_2(0x2c); VAR_1 = FUNC_0(); FUNC_1(255-VAR_1); VAR_2 = FUNC_0(); FUNC_1(VAR_1);
 VAR_3 = -1;
 if (VAR_2 == VAR_1) VAR_3 = 2;
 if (VAR_2 == (255-VAR_1)) VAR_3 = 0;

 FUNC_2(0xc); VAR_1 = FUNC_0(); FUNC_1(255-VAR_1); VAR_2 = FUNC_0(); FUNC_1(VAR_1);
 if (VAR_2 != (255-VAR_1)) VAR_3 = -1;

 if (VAR_3 == 0) { FUNC_2(6); FUNC_2(0xc); VAR_2 = FUNC_0(); FUNC_1(0xaa); FUNC_1(VAR_2); FUNC_1(0xaa); }
 if (VAR_3 == 2) { FUNC_2(0x26); FUNC_2(0xc); }

 if (VAR_3 == -1) return 0;
 return 5;
}

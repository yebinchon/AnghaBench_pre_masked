
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6( PIA *VAR_0, int VAR_1, int VAR_2 )

{ int VAR_3, VAR_4;

 if (VAR_1) {
   if (VAR_2 != 6) return 0xff;
   VAR_2 = 7;
 }

 switch (VAR_0->mode) {

 case 0: FUNC_5(0xc); FUNC_4(VAR_2 + 0x10); FUNC_5(0x8); FUNC_5(0xc);
  FUNC_5(0xd); VAR_3 = FUNC_2();
  FUNC_5(0xf); VAR_4 = FUNC_2();
  FUNC_5(0xc);
  return FUNC_0(VAR_3,VAR_4);

 case 1: FUNC_5(0xc); FUNC_4(VAR_2 + 0x90); FUNC_5(0x8); FUNC_5(0xc);
  FUNC_5(0xec); FUNC_5(0xee); FUNC_5(0xef); VAR_3 = FUNC_1();
  FUNC_5(0xc);
  return VAR_3;

 case 2: FUNC_5(0xc); FUNC_4(VAR_2 + 0x90); FUNC_5(0x8); FUNC_5(0xc);
  FUNC_5(0xec);
  VAR_3 = FUNC_3(); VAR_4 = FUNC_3();
  FUNC_5(0xc);
  return VAR_3;

 }
 return -1;

}

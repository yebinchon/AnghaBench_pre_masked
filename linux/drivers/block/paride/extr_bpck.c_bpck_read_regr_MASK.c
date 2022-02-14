
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8( PIA *VAR_1, int VAR_2, int VAR_3 )

{ int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3 + VAR_0[VAR_2];

 switch (VAR_1->mode) {

 case 0: FUNC_6(VAR_4 & 0xf); FUNC_6(VAR_4); FUNC_5(2); FUNC_5(4);
         VAR_5 = FUNC_3();
         FUNC_5(4);
         VAR_6 = FUNC_3();
         return FUNC_1(VAR_5,VAR_6);

 case 1: FUNC_6(VAR_4 & 0xf); FUNC_6(VAR_4); FUNC_5(2);
         FUNC_0(); FUNC_5(0x20);
  FUNC_5(4); VAR_6 = FUNC_2();
         FUNC_5(1); FUNC_5(0x20);
         return VAR_6;

 case 2:
 case 3:
 case 4: FUNC_6(VAR_4); FUNC_7(9); FUNC_7(0); FUNC_7(0x20);
  VAR_6 = FUNC_4();
  FUNC_7(0);
  return VAR_6;

 }
 return -1;
}

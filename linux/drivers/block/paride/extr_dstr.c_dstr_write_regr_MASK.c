
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( PIA *VAR_3, int VAR_4, int VAR_5, int VAR_6 )

{ int VAR_7;

        VAR_7 = VAR_5 + VAR_2[VAR_4];

 FUNC_0(0x81); VAR_0;
 if (VAR_3->mode >= 2) { FUNC_0(0x11); } else { FUNC_0(1); }
 VAR_1; FUNC_0(VAR_7); VAR_0;

        switch (VAR_3->mode) {

        case 0:
        case 1: FUNC_0(VAR_6); FUNC_1(5); FUNC_1(7); FUNC_1(5); FUNC_1(4);
  break;

 case 2:
 case 3:
        case 4: FUNC_2(VAR_6);
                break;
        }
}

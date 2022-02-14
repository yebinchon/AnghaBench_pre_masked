
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7( PIA *VAR_2, char * VAR_3, int VAR_4 )

{ int VAR_5;

        switch (VAR_2->mode) {

        case 0:
        case 1: FUNC_1(1); VAR_0; FUNC_1(1); VAR_1;
  FUNC_1(2); VAR_0; FUNC_1(0x18+VAR_2->mode); VAR_1; FUNC_1(0); VAR_0;
  FUNC_0(10);
  for (VAR_5=0;VAR_5<VAR_4/2;VAR_5++) {
                        FUNC_2(5); FUNC_1(VAR_3[2*VAR_5]);
   FUNC_2(7); FUNC_1(VAR_3[2*VAR_5+1]);
                }
                FUNC_2(5); FUNC_2(4);
  FUNC_1(2); VAR_0; FUNC_1(8+VAR_2->mode); VAR_1;
                break;

        case 2: FUNC_3(1); FUNC_3(1); FUNC_2(5); FUNC_4(1); FUNC_2(4);
  FUNC_3(0); FUNC_3(0); FUNC_2(0xc5);
  FUNC_0(10);
                for (VAR_5=0;VAR_5<VAR_4;VAR_5++) FUNC_4(VAR_3[VAR_5]);
  FUNC_2(0xc4);
                break;

        case 3: FUNC_3(1); FUNC_3(1); FUNC_2(5); FUNC_4(1); FUNC_2(4);
                FUNC_3(0); FUNC_3(0); FUNC_2(0xc5);
                FUNC_0(10);
                for (VAR_5=0;VAR_5<VAR_4/2;VAR_5++) FUNC_6(((u16 *)VAR_3)[VAR_5]);
                FUNC_2(0xc4);
                break;

        case 4: FUNC_3(1); FUNC_3(1); FUNC_2(5); FUNC_4(1); FUNC_2(4);
                FUNC_3(0); FUNC_3(0); FUNC_2(0xc5);
                FUNC_0(10);
                for (VAR_5=0;VAR_5<VAR_4/4;VAR_5++) FUNC_5(((u32 *)VAR_3)[VAR_5]);
                FUNC_2(0xc4);
                break;

        }

}


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
 char FUNC_0 (int,int) ;
 char FUNC_1 () ;
 int FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8( PIA *VAR_1, char * VAR_2, int VAR_3, int VAR_4 )

{ int VAR_5, VAR_6, VAR_7, VAR_8;

        switch(VAR_1->mode) {

        case 0: FUNC_7(4); FUNC_6(VAR_4); VAR_0;
                for (VAR_7=0;VAR_7<VAR_3;VAR_7++) {
                        FUNC_7(6); VAR_6 = FUNC_2();
                        FUNC_7(4); VAR_5 = FUNC_2();
                        VAR_2[VAR_7] = FUNC_0(VAR_6,VAR_5);
                }
                FUNC_7(4);
                break;

        case 1: VAR_8 = 2;
                FUNC_7(4); FUNC_6(VAR_4 + 0xc0); VAR_0;
                FUNC_6(0xff);
                for (VAR_7=0;VAR_7<VAR_3;VAR_7++) {
                        FUNC_7(0xa4 + VAR_8);
                        VAR_2[VAR_7] = FUNC_1();
                        VAR_8 = 2 - VAR_8;
                }
                FUNC_7(0xac); FUNC_7(0xa4); FUNC_7(4);
                break;

        case 2: FUNC_7(4); FUNC_6(VAR_4 + 0x80); VAR_0;
                for (VAR_7=0;VAR_7<VAR_3;VAR_7++) VAR_2[VAR_7] = FUNC_3();
                FUNC_7(0xac); FUNC_7(0xa4);
                FUNC_7(4);
                break;

 case 3: FUNC_7(4); FUNC_6(VAR_4 + 0x80); VAR_0;
  for (VAR_7=0;VAR_7<VAR_3-2;VAR_7++) VAR_2[VAR_7] = FUNC_3();
  FUNC_7(0xac); FUNC_7(0xa4);
  VAR_2[VAR_3-2] = FUNC_3();
  VAR_2[VAR_3-1] = FUNC_3();
  FUNC_7(4);
  break;

 case 4: FUNC_7(4); FUNC_6(VAR_4 + 0x80); VAR_0;
                for (VAR_7=0;VAR_7<(VAR_3/2)-1;VAR_7++) ((u16 *)VAR_2)[VAR_7] = FUNC_5();
                FUNC_7(0xac); FUNC_7(0xa4);
                VAR_2[VAR_3-2] = FUNC_3();
                VAR_2[VAR_3-1] = FUNC_3();
                FUNC_7(4);
                break;

 case 5: FUNC_7(4); FUNC_6(VAR_4 + 0x80); VAR_0;
                for (VAR_7=0;VAR_7<(VAR_3/4)-1;VAR_7++) ((u32 *)VAR_2)[VAR_7] = FUNC_4();
                VAR_2[VAR_3-4] = FUNC_3();
                VAR_2[VAR_3-3] = FUNC_3();
                FUNC_7(0xac); FUNC_7(0xa4);
                VAR_2[VAR_3-2] = FUNC_3();
                VAR_2[VAR_3-1] = FUNC_3();
                FUNC_7(4);
                break;

        }
}

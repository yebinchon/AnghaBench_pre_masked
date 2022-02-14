
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 char FUNC_1 (int,int) ;
 char FUNC_2 () ;
 int FUNC_3 () ;
 char FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9( PIA *VAR_0, char * VAR_1, int VAR_2, int VAR_3 )

{ int VAR_4, VAR_5, VAR_6, VAR_7;

        switch(VAR_0->mode) {

        case 0: FUNC_0(VAR_3);
                for (VAR_6=0;VAR_6<VAR_2;VAR_6++) {
                        FUNC_8(6); VAR_5 = FUNC_3();
                        FUNC_8(4); VAR_4 = FUNC_3();
                        VAR_1[VAR_6] = FUNC_1(VAR_5,VAR_4);
                }
                FUNC_8(4);
                break;

        case 1: VAR_7 = 2;
                FUNC_0(VAR_3+0xc0);
                FUNC_7(0xff);
                for (VAR_6=0;VAR_6<VAR_2;VAR_6++) {
                        FUNC_8(0xa4 + VAR_7);
                        VAR_1[VAR_6] = FUNC_2();
                        VAR_7 = 2 - VAR_7;
                }
                FUNC_8(0xac); FUNC_8(0xa4); FUNC_8(4);
                break;

 case 2: FUNC_0(VAR_3+0x80);
  for (VAR_6=0;VAR_6<VAR_2-2;VAR_6++) VAR_1[VAR_6] = FUNC_4();
  FUNC_8(0xac); FUNC_8(0xa4);
  VAR_1[VAR_2-2] = FUNC_4();
  VAR_1[VAR_2-1] = FUNC_4();
  FUNC_8(4);
  break;

 case 3: FUNC_0(VAR_3+0x80);
                for (VAR_6=0;VAR_6<(VAR_2/2)-1;VAR_6++) ((u16 *)VAR_1)[VAR_6] = FUNC_6();
                FUNC_8(0xac); FUNC_8(0xa4);
                VAR_1[VAR_2-2] = FUNC_4();
                VAR_1[VAR_2-1] = FUNC_4();
                FUNC_8(4);
                break;

 case 4: FUNC_0(VAR_3+0x80);
                for (VAR_6=0;VAR_6<(VAR_2/4)-1;VAR_6++) ((u32 *)VAR_1)[VAR_6] = FUNC_5();
                VAR_1[VAR_2-4] = FUNC_4();
                VAR_1[VAR_2-3] = FUNC_4();
                FUNC_8(0xac); FUNC_8(0xa4);
                VAR_1[VAR_2-2] = FUNC_4();
                VAR_1[VAR_2-1] = FUNC_4();
                FUNC_8(4);
                break;

        }
}

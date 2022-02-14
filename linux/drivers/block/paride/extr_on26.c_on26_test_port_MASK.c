
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int saved_r0; int saved_r2; int delay; int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11( PIA *VAR_3)

{ int VAR_4, VAR_5, VAR_6, VAR_7=0, VAR_8=0;

        VAR_3->saved_r0 = FUNC_5();
        VAR_3->saved_r2 = FUNC_7();

        VAR_6 = VAR_3->delay;
        VAR_5 = VAR_3->mode;
        VAR_3->delay = 5;
        VAR_3->mode = 0;

        FUNC_10(0xc);

        FUNC_0(0x30); FUNC_0(0);

        FUNC_9(0xfe);FUNC_9(0xaa);FUNC_9(0x55);FUNC_9(0);FUNC_9(0xff);
        VAR_4 = ((FUNC_6() & 0xf0) << 4); FUNC_9(0x87);
        VAR_4 |= (FUNC_6() & 0xf0); FUNC_9(0x78);
        FUNC_9(0x20);FUNC_10(4);FUNC_10(5);
        VAR_4 |= ((FUNC_6() & 0xf0) >> 4);
        FUNC_10(4);FUNC_9(0xff);

        if (VAR_4 == 0xb5f) {

            FUNC_9(2); VAR_0; FUNC_9(0); VAR_1;
            FUNC_9(3); VAR_0; FUNC_9(0); VAR_1;
            FUNC_9(2); VAR_0; FUNC_9(8); VAR_1; FUNC_8(100);
            FUNC_9(2); VAR_0; FUNC_9(0xa); VAR_1; FUNC_8(100);
            FUNC_9(2); VAR_0; FUNC_9(8); VAR_1; FUNC_8(1000);

            FUNC_3(VAR_3,0,6,0xa0);

            for (VAR_4=0;VAR_4<VAR_2;VAR_4++) {
                FUNC_3(VAR_3,0,6,0xa0);
                VAR_7 = FUNC_2(VAR_3,0,7);
                FUNC_3(VAR_3,0,6,0xb0);
                VAR_8 = FUNC_2(VAR_3,0,7);
                if (!((VAR_7&0x80)||(VAR_8&0x80))) break;
                FUNC_1(100);
            }

     if (VAR_4 == VAR_2)
  FUNC_4("on26: Device reset failed (%x,%x)\n",VAR_7,VAR_8);

            FUNC_9(4); VAR_0; FUNC_9(4); VAR_0;
        }

        FUNC_0(0x30);

        VAR_3->delay = VAR_6;
        VAR_3->mode = VAR_5;
        FUNC_9(VAR_3->saved_r0);
        FUNC_10(VAR_3->saved_r2);

        return 5;
}

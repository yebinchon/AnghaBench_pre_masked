
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3;

        switch (VAR_0->mode) {

        case 0:
        case 1:
        case 2: FUNC_2(0x90); FUNC_3(4); FUNC_3(6); FUNC_3(4);
  for(VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
   FUNC_2(VAR_1[2*VAR_3+1]); FUNC_3(0); FUNC_3(4);
   FUNC_2(VAR_1[2*VAR_3]); FUNC_3(5); FUNC_3(4);
  }
  break;

        case 3: FUNC_2(0xa0); FUNC_3(4); FUNC_3(6); FUNC_3(4); FUNC_4(0);
  for(VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
   FUNC_5(VAR_1[2*VAR_3+1]);
                        FUNC_5(VAR_1[2*VAR_3]);
                }
  FUNC_3(4); FUNC_3(0); FUNC_3(4);
  break;

 case 4: FUNC_2(0xa0); FUNC_3(4); FUNC_3(6); FUNC_3(4); FUNC_4(0);
                for(VAR_3=0;VAR_3<VAR_2/2;VAR_3++) FUNC_7(FUNC_0(VAR_1,VAR_3));
                FUNC_3(4); FUNC_3(0); FUNC_3(4);
                break;

        case 5: FUNC_2(0xa0); FUNC_3(4); FUNC_3(6); FUNC_3(4); FUNC_4(0);
                for(VAR_3=0;VAR_3<VAR_2/4;VAR_3++) FUNC_6(FUNC_1(VAR_1,VAR_3));
                FUNC_3(4); FUNC_3(0); FUNC_3(4);
                break;

        }

}

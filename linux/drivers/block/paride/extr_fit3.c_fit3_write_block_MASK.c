
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void FUNC_3( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3;

        switch (VAR_0->mode) {

 case 0:
        case 1: FUNC_1(0xc); FUNC_0(0); FUNC_1(0x8); FUNC_1(0xc);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) {
       FUNC_0(VAR_1[2*VAR_3 ]); FUNC_1(0xd);
       FUNC_0(VAR_1[2*VAR_3+1]); FUNC_1(0xc);
  }
  break;

        case 2: FUNC_1(0xc); FUNC_0(0); FUNC_1(0x8); FUNC_1(0xc);
                for (VAR_3=0;VAR_3<VAR_2;VAR_3++) FUNC_2(VAR_1[VAR_3]);
                FUNC_1(0xc);
  break;
 }
}

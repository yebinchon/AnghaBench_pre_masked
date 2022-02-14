
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6;

        switch (VAR_0->mode) {

        case 0:
        case 1:
        case 2: FUNC_1(0xa1); FUNC_2(1); FUNC_2(3); FUNC_2(1); FUNC_2(5);
                VAR_3 = 0; VAR_5 = 0x8000;
                for (VAR_4=0;VAR_4<VAR_2;VAR_4++) {
                        VAR_6 = VAR_1[VAR_4];
                        if (VAR_6 != VAR_5) { VAR_5 = VAR_6; FUNC_1(VAR_6); }
                        FUNC_2(4+VAR_3);
                        VAR_3 = 1 - VAR_3;
                }
                FUNC_2(7); FUNC_2(4);
                break;

        case 3: if (VAR_2 < 512) FUNC_0(0x84,1);
  FUNC_3(0x40);
                for (VAR_4=0;VAR_4<VAR_2;VAR_4++) FUNC_4(VAR_1[VAR_4]);
  if (VAR_2 < 512) FUNC_0(0x84,0);
                break;

        case 4: if (VAR_2 < 512) FUNC_0(0x84,1);
  FUNC_3(0x40);
                for (VAR_4=0;VAR_4<VAR_2/2;VAR_4++) FUNC_6(((u16 *)VAR_1)[VAR_4]);
  if (VAR_2 < 512) FUNC_0(0x84,0);
                break;

        case 5: if (VAR_2 < 512) FUNC_0(0x84,1);
  FUNC_3(0x40);
                for (VAR_4=0;VAR_4<VAR_2/4;VAR_4++) FUNC_5(((u32 *)VAR_1)[VAR_4]);
  if (VAR_2 < 512) FUNC_0(0x84,0);
                break;

        }

}

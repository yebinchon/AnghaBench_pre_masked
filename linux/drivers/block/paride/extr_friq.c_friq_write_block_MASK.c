
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
 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3;

 switch(VAR_0->mode) {

 case 0:
 case 1: FUNC_0(8); FUNC_2(5);
         for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
   FUNC_1(VAR_1[VAR_3]);
   FUNC_2(7);FUNC_2(5);
  }
  FUNC_2(4);
  break;

 case 2: FUNC_0(0xc8); FUNC_2(5);
  for (VAR_3=0;VAR_3<VAR_2;VAR_3++) FUNC_3(VAR_1[VAR_3]);
  FUNC_2(4);
  break;

        case 3: FUNC_0(0xc8); FUNC_2(5);
                for (VAR_3=0;VAR_3<VAR_2/2;VAR_3++) FUNC_5(((u16 *)VAR_1)[VAR_3]);
                FUNC_2(4);
                break;

        case 4: FUNC_0(0xc8); FUNC_2(5);
                for (VAR_3=0;VAR_3<VAR_2/4;VAR_3++) FUNC_4(((u32 *)VAR_1)[VAR_3]);
                FUNC_2(4);
                break;
 }
}

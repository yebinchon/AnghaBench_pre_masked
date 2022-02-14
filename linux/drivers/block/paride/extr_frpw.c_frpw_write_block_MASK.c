
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( PIA *VAR_1, char * VAR_2, int VAR_3 )

{ int VAR_4;

 switch(VAR_1->mode) {

 case 0:
 case 1:
 case 2: FUNC_1(4); FUNC_0(8); VAR_0; FUNC_1(5);
         for (VAR_4=0;VAR_4<VAR_3;VAR_4++) {
   FUNC_0(VAR_2[VAR_4]);
   FUNC_1(7);FUNC_1(5);
  }
  FUNC_1(4);
  break;

 case 3: FUNC_1(4); FUNC_0(0xc8); VAR_0; FUNC_1(5);
  for (VAR_4=0;VAR_4<VAR_3;VAR_4++) FUNC_2(VAR_2[VAR_4]);
  FUNC_1(4);
  break;

        case 4: FUNC_1(4); FUNC_0(0xc8); VAR_0; FUNC_1(5);
                for (VAR_4=0;VAR_4<VAR_3/2;VAR_4++) FUNC_4(((u16 *)VAR_2)[VAR_4]);
                FUNC_1(4);
                break;

        case 5: FUNC_1(4); FUNC_0(0xc8); VAR_0; FUNC_1(5);
                for (VAR_4=0;VAR_4<VAR_3/4;VAR_4++) FUNC_3(((u32 *)VAR_2)[VAR_4]);
                FUNC_1(4);
                break;
 }
}

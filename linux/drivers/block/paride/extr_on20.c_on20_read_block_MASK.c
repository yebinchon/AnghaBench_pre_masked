
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
typedef TYPE_1__ PIA ;


 char FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 char FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;

 FUNC_1(1); FUNC_4(1); FUNC_1(0);

 for (VAR_3=0;VAR_3<VAR_2;VAR_3++)
     if (VAR_0->mode) {
  FUNC_5(4); FUNC_5(0x26); VAR_1[VAR_3] = FUNC_2();
     } else {
  FUNC_5(6); VAR_4 = FUNC_3(); FUNC_5(4);
  FUNC_5(6); VAR_5 = FUNC_3(); FUNC_5(4);
  VAR_1[VAR_3] = FUNC_0(VAR_4,VAR_5);
     }
 FUNC_5(4);
}

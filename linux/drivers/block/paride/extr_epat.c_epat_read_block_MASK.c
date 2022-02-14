
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ PIA ;


 char FUNC_0 (int,int) ;
 char FUNC_1 (int,int) ;
 char FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6;

 switch (VAR_0->mode) {

 case 0: FUNC_8(7); FUNC_9(1); FUNC_9(3); FUNC_8(0xff);
  VAR_4 = 0;
  for(VAR_3=0;VAR_3<VAR_2;VAR_3++) {
   if (VAR_3 == VAR_2-1) FUNC_8(0xfd);
   FUNC_9(6+VAR_4); VAR_5 = FUNC_3();
   if (VAR_5 & 8) VAR_6 = VAR_5;
     else { FUNC_9(4+VAR_4); VAR_6 = FUNC_3(); }
   VAR_1[VAR_3] = FUNC_0(VAR_5,VAR_6);
   VAR_4 = 1 - VAR_4;
  }
  FUNC_8(0); FUNC_9(4);
  break;

 case 1: FUNC_8(0x47); FUNC_9(1); FUNC_9(5); FUNC_8(0xff);
  VAR_4 = 0;
  for(VAR_3=0;VAR_3<VAR_2;VAR_3++) {
   if (VAR_3 == VAR_2-1) FUNC_8(0xfd);
   FUNC_9(4+VAR_4);
   VAR_5 = FUNC_3(); VAR_6 = FUNC_4();
   VAR_1[VAR_3] = FUNC_1(VAR_5,VAR_6);
   VAR_4 = 1 - VAR_4;
  }
  FUNC_8(0); FUNC_9(4);
  break;

 case 2: FUNC_8(0x27); FUNC_9(1); FUNC_9(0x25); FUNC_8(0);
  VAR_4 = 0;
  for(VAR_3=0;VAR_3<VAR_2-1;VAR_3++) {
   FUNC_9(0x24+VAR_4);
   VAR_1[VAR_3] = FUNC_2();
   VAR_4 = 1 - VAR_4;
  }
  FUNC_9(0x26); FUNC_9(0x27); VAR_1[VAR_2-1] = FUNC_2();
  FUNC_9(0x25); FUNC_9(4);
  break;

 case 3: FUNC_10(0x80); FUNC_9(0x24);
  for(VAR_3=0;VAR_3<VAR_2-1;VAR_3++) VAR_1[VAR_3] = FUNC_5();
  FUNC_9(4); FUNC_10(0xa0); FUNC_9(0x24); VAR_1[VAR_2-1] = FUNC_5();
  FUNC_9(4);
  break;

 case 4: FUNC_10(0x80); FUNC_9(0x24);
  for(VAR_3=0;VAR_3<(VAR_2/2)-1;VAR_3++) ((u16 *)VAR_1)[VAR_3] = FUNC_7();
  VAR_1[VAR_2-2] = FUNC_5();
  FUNC_9(4); FUNC_10(0xa0); FUNC_9(0x24); VAR_1[VAR_2-1] = FUNC_5();
  FUNC_9(4);
  break;

 case 5: FUNC_10(0x80); FUNC_9(0x24);
  for(VAR_3=0;VAR_3<(VAR_2/4)-1;VAR_3++) ((u32 *)VAR_1)[VAR_3] = FUNC_6();
  for(VAR_3=VAR_2-4;VAR_3<VAR_2-1;VAR_3++) VAR_1[VAR_3] = FUNC_5();
  FUNC_9(4); FUNC_10(0xa0); FUNC_9(0x24); VAR_1[VAR_2-1] = FUNC_5();
  FUNC_9(4);
  break;

 }
}

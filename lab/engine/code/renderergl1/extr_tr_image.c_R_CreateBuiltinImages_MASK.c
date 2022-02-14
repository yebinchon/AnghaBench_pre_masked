
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int data ;
typedef int byte ;
struct TYPE_2__ {int identityLightByte; void** scratchImage; void* identityLightImage; void* whiteImage; } ;


 int FUNC_0 (int***,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (char*,int*,int,int,int ,int,int ) ;
 TYPE_1__ VAR_5 ;

void FUNC_5( void ) {
 int VAR_6,VAR_7;
 byte VAR_8[VAR_0][VAR_0][4];

 FUNC_1();


 FUNC_0( VAR_8, 255, sizeof( VAR_8 ) );
 VAR_5.whiteImage = FUNC_4("*white", (byte *)VAR_8, 8, 8, VAR_4, VAR_2, 0);



 for (VAR_6=0 ; VAR_6<VAR_0 ; VAR_6++) {
  for (VAR_7=0 ; VAR_7<VAR_0 ; VAR_7++) {
   VAR_8[VAR_7][VAR_6][0] =
   VAR_8[VAR_7][VAR_6][1] =
   VAR_8[VAR_7][VAR_6][2] = VAR_5.identityLightByte;
   VAR_8[VAR_7][VAR_6][3] = 255;
  }
 }

 VAR_5.identityLightImage = FUNC_4("*identityLight", (byte *)VAR_8, 8, 8, VAR_4, VAR_2, 0);


 for(VAR_6=0;VAR_6<32;VAR_6++) {

  VAR_5.scratchImage[VAR_6] = FUNC_4("*scratch", (byte *)VAR_8, VAR_0, VAR_0, VAR_4, VAR_3 | VAR_1, 0);
 }

 FUNC_2();
 FUNC_3();
}

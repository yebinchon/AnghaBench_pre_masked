
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int dlightImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*,int,int,int ,int ,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_4,VAR_5;
 byte VAR_6[VAR_0][VAR_0][4];
 int VAR_7;


 for (VAR_4=0 ; VAR_4<VAR_0 ; VAR_4++) {
  for (VAR_5=0 ; VAR_5<VAR_0 ; VAR_5++) {
   float VAR_8;

   VAR_8 = ( VAR_0/2 - 0.5f - VAR_4 ) * ( VAR_0/2 - 0.5f - VAR_4 ) +
    ( VAR_0/2 - 0.5f - VAR_5 ) * ( VAR_0/2 - 0.5f - VAR_5 );
   VAR_7 = 4000 / VAR_8;
   if (VAR_7 > 255) {
    VAR_7 = 255;
   } else if ( VAR_7 < 75 ) {
    VAR_7 = 0;
   }
   VAR_6[VAR_5][VAR_4][0] =
   VAR_6[VAR_5][VAR_4][1] =
   VAR_6[VAR_5][VAR_4][2] = VAR_7;
   VAR_6[VAR_5][VAR_4][3] = 255;
  }
 }
 VAR_3.dlightImage = FUNC_0("*dlight", (byte *)VAR_6, VAR_0, VAR_0, VAR_2, VAR_1, 0 );
}

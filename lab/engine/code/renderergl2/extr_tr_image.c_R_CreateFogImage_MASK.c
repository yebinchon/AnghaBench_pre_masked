
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (int*) ;} ;
struct TYPE_3__ {int fogImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int*,int,int,int ,int ,int ) ;
 float FUNC_1 (int,int) ;
 TYPE_2__ VAR_4 ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_4( void ) {
 int VAR_6,VAR_7;
 byte *VAR_8;
 float VAR_9;

 VAR_8 = VAR_4.Hunk_AllocateTempMemory( VAR_0 * VAR_1 * 4 );


 for (VAR_6=0 ; VAR_6<VAR_0 ; VAR_6++) {
  for (VAR_7=0 ; VAR_7<VAR_1 ; VAR_7++) {
   VAR_9 = FUNC_1( ( VAR_6 + 0.5f ) / VAR_0, ( VAR_7 + 0.5f ) / VAR_1 );

   VAR_8[(VAR_7*VAR_0+VAR_6)*4+0] =
   VAR_8[(VAR_7*VAR_0+VAR_6)*4+1] =
   VAR_8[(VAR_7*VAR_0+VAR_6)*4+2] = 255;
   VAR_8[(VAR_7*VAR_0+VAR_6)*4+3] = 255*VAR_9;
  }
 }
 VAR_5.fogImage = FUNC_0("*fog", (byte *)VAR_8, VAR_0, VAR_1, VAR_3, VAR_2, 0 );
 VAR_4.Hunk_FreeTempMemory( VAR_8 );
}

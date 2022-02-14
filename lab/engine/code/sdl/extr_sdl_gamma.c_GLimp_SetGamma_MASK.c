
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vinfo ;
typedef int Uint16 ;
struct TYPE_9__ {int deviceSupportsGamma; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_6__ {int dwOSVersionInfoSize; int dwMajorVersion; scalar_t__ dwPlatformId; } ;
typedef TYPE_1__ OSVERSIONINFO ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int*,int*,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;

void FUNC_5( unsigned char VAR_6[256], unsigned char VAR_7[256], unsigned char VAR_8[256] )
{
 Uint16 VAR_9[3][256];
 int VAR_10, VAR_11;

 if( !VAR_3.deviceSupportsGamma || VAR_4->integer > 0 )
  return;

 for (VAR_10 = 0; VAR_10 < 256; VAR_10++)
 {
  VAR_9[0][VAR_10] = ( ( ( Uint16 ) VAR_6[VAR_10] ) << 8 ) | VAR_6[VAR_10];
  VAR_9[1][VAR_10] = ( ( ( Uint16 ) VAR_7[VAR_10] ) << 8 ) | VAR_7[VAR_10];
  VAR_9[2][VAR_10] = ( ( ( Uint16 ) VAR_8[VAR_10] ) << 8 ) | VAR_8[VAR_10];
 }
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
 {
  for (VAR_10 = 1; VAR_10 < 256; VAR_10++)
  {
   if (VAR_9[VAR_11][VAR_10] < VAR_9[VAR_11][VAR_10-1])
    VAR_9[VAR_11][VAR_10] = VAR_9[VAR_11][VAR_10-1];
  }
 }

 if (FUNC_2(VAR_1, VAR_9[0], VAR_9[1], VAR_9[2]) < 0)
 {
  VAR_5.Printf( VAR_0, "SDL_SetWindowGammaRamp() failed: %s\n", FUNC_1() );
 }
}

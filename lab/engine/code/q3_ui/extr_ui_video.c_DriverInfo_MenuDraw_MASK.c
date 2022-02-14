
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numstrings; char** strings; int menu; } ;
struct TYPE_4__ {char* vendor_string; char* version_string; char* renderer_string; int stencilBits; int depthBits; int colorBits; } ;
struct TYPE_5__ {TYPE_1__ glconfig; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 char* FUNC_2 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3( void )
{
 int VAR_9;
 int VAR_10;

 FUNC_0( &VAR_6.menu );

 FUNC_1( 320, 80, "VENDOR", VAR_1|VAR_4, VAR_5 );
 FUNC_1( 320, 152, "PIXELFORMAT", VAR_1|VAR_4, VAR_5 );
 FUNC_1( 320, 192, "EXTENSIONS", VAR_1|VAR_4, VAR_5 );

 FUNC_1( 320, 80+16, VAR_8.glconfig.vendor_string, VAR_1|VAR_4, VAR_7 );
 FUNC_1( 320, 96+16, VAR_8.glconfig.version_string, VAR_1|VAR_4, VAR_7 );
 FUNC_1( 320, 112+16, VAR_8.glconfig.renderer_string, VAR_1|VAR_4, VAR_7 );
 FUNC_1( 320, 152+16, FUNC_2 ("color(%d-bits) Z(%d-bits) stencil(%d-bits)", VAR_8.glconfig.colorBits, VAR_8.glconfig.depthBits, VAR_8.glconfig.stencilBits), VAR_1|VAR_4, VAR_7 );


 VAR_10 = 192+16;
 for (VAR_9=0; VAR_9<VAR_6.numstrings/2; VAR_9++) {
  FUNC_1( 320-4, VAR_10, VAR_6.strings[VAR_9*2], VAR_3|VAR_4, VAR_7 );
  FUNC_1( 320+4, VAR_10, VAR_6.strings[VAR_9*2+1], VAR_2|VAR_4, VAR_7 );
  VAR_10 += VAR_0;
 }

 if (VAR_6.numstrings & 1)
  FUNC_1( 320, VAR_10, VAR_6.strings[VAR_6.numstrings-1], VAR_1|VAR_4, VAR_7 );
}

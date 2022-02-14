
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int w ;
typedef int h ;
struct TYPE_20__ {scalar_t__ curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_12__ {int curvalue; } ;
struct TYPE_11__ {TYPE_9__ filter; TYPE_8__ geometry; TYPE_7__ lighting; TYPE_6__ colordepth; TYPE_5__ fs; TYPE_4__ mode; TYPE_3__ allow_extensions; TYPE_2__ tq; TYPE_1__ texturebits; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 char** VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_10__ VAR_4 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8( void *VAR_5, int VAR_6 )
{
 if (VAR_6 != VAR_1)
  return;

 switch ( VAR_4.texturebits.curvalue )
 {
 case 0:
  FUNC_7( "r_texturebits", 0 );
  break;
 case 1:
  FUNC_7( "r_texturebits", 16 );
  break;
 case 2:
  FUNC_7( "r_texturebits", 32 );
  break;
 }
 FUNC_7( "r_picmip", 3 - VAR_4.tq.curvalue );
 FUNC_7( "r_allowExtensions", VAR_4.allow_extensions.curvalue );

 if( VAR_3 )
 {

  int VAR_7;
  if ( VAR_4.mode.curvalue == -1
   || VAR_4.mode.curvalue >= FUNC_0( VAR_2 ) )
   VAR_4.mode.curvalue = 0;

  VAR_7 = FUNC_1( VAR_4.mode.curvalue );
  if( VAR_7 == -1 )
  {
   char VAR_8[ 16 ], VAR_9[ 16 ];
   FUNC_2( VAR_8, VAR_2[ VAR_4.mode.curvalue ], sizeof( VAR_8 ) );
   *FUNC_3( VAR_8, 'x' ) = 0;
   FUNC_2( VAR_9,
     FUNC_3( VAR_2[ VAR_4.mode.curvalue ], 'x' ) + 1, sizeof( VAR_9 ) );
   FUNC_6( "r_customwidth", VAR_8 );
   FUNC_6( "r_customheight", VAR_9 );
  }

  FUNC_7( "r_mode", VAR_7 );
 }
 else
  FUNC_7( "r_mode", VAR_4.mode.curvalue );

 FUNC_7( "r_fullscreen", VAR_4.fs.curvalue );
 switch ( VAR_4.colordepth.curvalue )
 {
 case 0:
  FUNC_7( "r_colorbits", 0 );
  FUNC_7( "r_depthbits", 0 );
  FUNC_5( "r_stencilbits" );
  break;
 case 1:
  FUNC_7( "r_colorbits", 16 );
  FUNC_7( "r_depthbits", 16 );
  FUNC_7( "r_stencilbits", 0 );
  break;
 case 2:
  FUNC_7( "r_colorbits", 32 );
  FUNC_7( "r_depthbits", 24 );
  FUNC_7( "r_stencilbits", 8 );
  break;
 }
 FUNC_7( "r_vertexLight", VAR_4.lighting.curvalue );

 if ( VAR_4.geometry.curvalue == 2 )
 {
  FUNC_7( "r_lodBias", 0 );
  FUNC_7( "r_subdivisions", 4 );
 }
 else if ( VAR_4.geometry.curvalue == 1 )
 {
  FUNC_7( "r_lodBias", 1 );
  FUNC_7( "r_subdivisions", 12 );
 }
 else
 {
  FUNC_7( "r_lodBias", 1 );
  FUNC_7( "r_subdivisions", 20 );
 }

 if ( VAR_4.filter.curvalue )
 {
  FUNC_6( "r_textureMode", "GL_LINEAR_MIPMAP_LINEAR" );
 }
 else
 {
  FUNC_6( "r_textureMode", "GL_LINEAR_MIPMAP_NEAREST" );
 }

 FUNC_4( VAR_0, "vid_restart\n" );
}

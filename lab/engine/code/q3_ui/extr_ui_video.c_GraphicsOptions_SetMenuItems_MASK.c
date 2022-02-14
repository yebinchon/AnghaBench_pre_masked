
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int buf ;
struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {int curvalue; } ;
struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_15__ {TYPE_11__ colordepth; TYPE_10__ driver; TYPE_9__ fs; TYPE_8__ geometry; TYPE_7__ filter; TYPE_6__ texturebits; TYPE_5__ lighting; TYPE_4__ tq; TYPE_3__ allow_extensions; TYPE_2__ mode; TYPE_1__ ratio; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 char** VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_12__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6( void )
{
 VAR_4.mode.curvalue =
  FUNC_0( FUNC_5( "r_mode" ) );

 if ( VAR_4.mode.curvalue < 0 )
 {
  if( VAR_3 )
  {
   int VAR_5;
   char VAR_6[VAR_0];
   FUNC_4("r_customwidth", VAR_6, sizeof(VAR_6)-2);
   VAR_6[FUNC_3(VAR_6)+1] = 0;
   VAR_6[FUNC_3(VAR_6)] = 'x';
   FUNC_4("r_customheight", VAR_6+FUNC_3(VAR_6), sizeof(VAR_6)-FUNC_3(VAR_6));

   for(VAR_5 = 0; VAR_1[VAR_5]; ++VAR_5)
   {
    if(!FUNC_1(VAR_6, VAR_1[VAR_5]))
    {
     VAR_4.mode.curvalue = VAR_5;
     break;
    }
   }
   if ( VAR_4.mode.curvalue < 0 )
    VAR_4.mode.curvalue = 0;
  }
  else
  {
   VAR_4.mode.curvalue = 3;
  }
 }
 VAR_4.ratio.curvalue =
  VAR_2[ VAR_4.mode.curvalue ];
 VAR_4.fs.curvalue = FUNC_5("r_fullscreen");
 VAR_4.allow_extensions.curvalue = FUNC_5("r_allowExtensions");
 VAR_4.tq.curvalue = 3-FUNC_5( "r_picmip");
 if ( VAR_4.tq.curvalue < 0 )
 {
  VAR_4.tq.curvalue = 0;
 }
 else if ( VAR_4.tq.curvalue > 3 )
 {
  VAR_4.tq.curvalue = 3;
 }

 VAR_4.lighting.curvalue = FUNC_5( "r_vertexLight" ) != 0;
 switch ( ( int ) FUNC_5( "r_texturebits" ) )
 {
 default:
 case 0:
  VAR_4.texturebits.curvalue = 0;
  break;
 case 16:
  VAR_4.texturebits.curvalue = 1;
  break;
 case 32:
  VAR_4.texturebits.curvalue = 2;
  break;
 }

 if ( !FUNC_1( FUNC_2( "r_textureMode" ), "GL_LINEAR_MIPMAP_NEAREST" ) )
 {
  VAR_4.filter.curvalue = 0;
 }
 else
 {
  VAR_4.filter.curvalue = 1;
 }

 if ( FUNC_5( "r_lodBias" ) > 0 )
 {
  if ( FUNC_5( "r_subdivisions" ) >= 20 )
  {
   VAR_4.geometry.curvalue = 0;
  }
  else
  {
   VAR_4.geometry.curvalue = 1;
  }
 }
 else
 {
  VAR_4.geometry.curvalue = 2;
 }

 switch ( ( int ) FUNC_5( "r_colorbits" ) )
 {
 default:
 case 0:
  VAR_4.colordepth.curvalue = 0;
  break;
 case 16:
  VAR_4.colordepth.curvalue = 1;
  break;
 case 32:
  VAR_4.colordepth.curvalue = 2;
  break;
 }

 if ( VAR_4.fs.curvalue == 0 )
 {
  VAR_4.colordepth.curvalue = 0;
 }
 if ( VAR_4.driver.curvalue == 1 )
 {
  VAR_4.colordepth.curvalue = 1;
 }
}

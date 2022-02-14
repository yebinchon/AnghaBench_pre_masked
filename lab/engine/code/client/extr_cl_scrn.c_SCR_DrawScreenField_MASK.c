
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int stereoFrame_t ;
typedef int renderOrigin_t ;
typedef int qboolean ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int state; } ;
struct TYPE_8__ {int vidWidth; int vidHeight; } ;
struct TYPE_10__ {int realtime; int whiteShader; TYPE_1__ glconfig; } ;
struct TYPE_9__ {int (* SetColor ) (int *) ;int (* DrawStretchPic ) (int ,int ,int,int,int ,int ,int ,int ,int ) ;int (* BeginFrame ) (int ,int ) ;} ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__,int ,...) ;
 TYPE_7__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 int ** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_16 ;

void FUNC_14( stereoFrame_t VAR_17, renderOrigin_t VAR_18, qboolean VAR_19 ) {
 qboolean VAR_20;



 if ( !VAR_19 ) {
  VAR_15.BeginFrame( VAR_17, VAR_18 );
 }


 VAR_20 = (VAR_16 && FUNC_9( VAR_16, VAR_4 ));



 if ( VAR_20 || VAR_10.state < 129 ) {
  if ( VAR_11.glconfig.vidWidth * 480 > VAR_11.glconfig.vidHeight * 640 ) {
   VAR_15.SetColor( VAR_12[0] );
   VAR_15.DrawStretchPic( 0, 0, VAR_11.glconfig.vidWidth, VAR_11.glconfig.vidHeight, 0, 0, 0, 0, VAR_11.whiteShader );
   VAR_15.SetColor( ((void*)0) );
  }
 }



 if ( VAR_16 && !VAR_20 ) {
  switch( VAR_10.state ) {
  default:
   FUNC_1( VAR_0, "SCR_DrawScreenField: bad clc.state" );
   break;
  case 133:
   if ( !VAR_19 ) {
    FUNC_4();
   }
   break;
  case 130:
   if ( !VAR_19 ) {

    FUNC_8();
    FUNC_9( VAR_16, VAR_6, VAR_2 );
   }
   break;
  case 131:
  case 134:
  case 132:
   if ( !VAR_19 ) {


    FUNC_9( VAR_16, VAR_5, VAR_11.realtime );
    FUNC_9( VAR_16, VAR_3, VAR_13 );
   }
   break;
  case 129:
  case 128:

   FUNC_0(VAR_17, VAR_19);

   if ( !VAR_19 ) {



    FUNC_9( VAR_16, VAR_5, VAR_11.realtime );
    FUNC_9( VAR_16, VAR_3, VAR_14 );
   }
   break;
  case 135:

   FUNC_0(VAR_17, VAR_19);
   if ( !VAR_19 ) {
    FUNC_6();



   }
   break;
  }
 }

 if ( VAR_19 ) return;


 if ( FUNC_3( ) & VAR_1 && VAR_16 ) {
  FUNC_9( VAR_16, VAR_5, VAR_11.realtime );
 }


 FUNC_2 ();


 if ( VAR_8->integer || VAR_9->integer || VAR_7->integer ) {
  FUNC_5 ();
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ stereoEnabled; } ;
struct TYPE_10__ {TYPE_1__ glconfig; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int (* EndFrame ) (int *,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_5( void ) {
 static int VAR_14;

 if ( !VAR_9 ) {
  return;
 }

 if ( ++VAR_14 > 2 ) {
  FUNC_0( VAR_0, "SCR_UpdateScreen: recursively called" );
 }
 VAR_14 = 1;



 if( VAR_13 || VAR_5->integer )
 {

  int VAR_15 = FUNC_1("r_anaglyphMode");

  if ( VAR_4.glconfig.stereoEnabled || VAR_15) {
   FUNC_2( VAR_2, VAR_8, VAR_10 );
   FUNC_2( VAR_3, VAR_8, VAR_10 );
  } else {
   FUNC_2( VAR_1, VAR_8, VAR_10 );
  }

  if ( !VAR_10 ) {
   if ( VAR_6->integer ) {
    VAR_7.EndFrame( &VAR_12, &VAR_11 );
   } else {
    VAR_7.EndFrame( ((void*)0), ((void*)0) );
   }
  }
 }

 VAR_14 = 0;
}

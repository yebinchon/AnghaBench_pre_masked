
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {int (* CM_DrawDebugSurface ) (int ) ;} ;
struct TYPE_5__ {int rdflags; } ;
struct TYPE_6__ {int whiteImage; TYPE_1__ refdef; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_6 ;

void FUNC_4( void ) {
 if ( VAR_6.refdef.rdflags & VAR_1 ) {
  return;
 }
 if ( !VAR_4->integer ) {
  return;
 }

 FUNC_2();

 FUNC_0(VAR_6.whiteImage, VAR_3);
 FUNC_1( VAR_0 );
 VAR_5.CM_DrawDebugSurface( VAR_2 );
}

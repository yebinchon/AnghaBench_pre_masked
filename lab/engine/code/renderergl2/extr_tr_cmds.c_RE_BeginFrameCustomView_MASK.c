
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


struct TYPE_13__ {int buffer; int commandId; } ;
typedef TYPE_2__ drawBufferCommand_t ;
struct TYPE_20__ {int vidHeight; int vidWidth; } ;
struct TYPE_19__ {void* finishCalled; } ;
struct TYPE_18__ {void* modified; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {void* modified; int string; } ;
struct TYPE_15__ {int (* Error ) (int ,char*,int) ;} ;
struct TYPE_12__ {int vertFlipBuffer; int stereoFrame; int height; int width; } ;
struct TYPE_14__ {TYPE_1__ refdef; int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_6__* VAR_10 ;
 TYPE_5__* VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_3__ VAR_13 ;

void FUNC_7( void ) {
 drawBufferCommand_t *VAR_14 = ((void*)0);
 if ( !VAR_13.registered ) {
  return;
 }
 FUNC_4( &VAR_5 );
 VAR_13.refdef.width = VAR_5.vidWidth;
 VAR_13.refdef.height = VAR_5.vidHeight;
 VAR_6.finishCalled = VAR_7;




 if ( VAR_11->modified ) {
  FUNC_2();
  FUNC_0( VAR_11->string );
  VAR_11->modified = VAR_7;
 }




 if ( VAR_9->modified ) {
  VAR_9->modified = VAR_7;

  FUNC_2();
  FUNC_3();
 }


 if ( !VAR_10->integer )
 {
  int VAR_15;

  FUNC_2();
  if ((VAR_15 = FUNC_5()) != VAR_2)
   VAR_12.Error(VAR_0, "RE_BeginFrame() - glGetError() failed (0x%x)!", VAR_15);
 }

 if( !(VAR_14 = FUNC_1(sizeof(*VAR_14))) )
  return;
 if(VAR_14)
 {
  VAR_14->commandId = VAR_3;
  VAR_14->buffer = VAR_1;
 }

 VAR_13.refdef.stereoFrame = VAR_4;

 VAR_13.refdef.vertFlipBuffer = VAR_8;
}

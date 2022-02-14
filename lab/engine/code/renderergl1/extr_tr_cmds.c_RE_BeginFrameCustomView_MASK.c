
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int buffer; int commandId; } ;
typedef TYPE_2__ drawBufferCommand_t ;
struct TYPE_22__ {void* finishCalled; } ;
struct TYPE_21__ {int string; } ;
struct TYPE_20__ {void* modified; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {void* modified; int string; } ;
struct TYPE_17__ {int (* Error ) (int ,char*,int) ;} ;
struct TYPE_14__ {int vertFlipBuffer; int stereoFrame; int height; int width; } ;
struct TYPE_16__ {TYPE_1__ refdef; int registered; } ;
struct TYPE_13__ {int vidHeight; int vidWidth; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (TYPE_10__*) ;
 TYPE_10__ VAR_6 ;
 TYPE_9__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_6 () ;
 int VAR_9 ;
 TYPE_8__* VAR_10 ;
 TYPE_7__* VAR_11 ;
 TYPE_6__* VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_4__ VAR_14 ;
 int FUNC_7 (int ,char*,int) ;
 TYPE_3__ VAR_15 ;

void FUNC_8( void ) {
 drawBufferCommand_t *VAR_16 = ((void*)0);
 if ( !VAR_15.registered ) {
  return;
 }

 FUNC_5( &VAR_6 );
 VAR_15.refdef.width = VAR_6.vidWidth;
 VAR_15.refdef.height = VAR_6.vidHeight;
 VAR_7.finishCalled = VAR_8;




 if ( VAR_13->modified ) {
  FUNC_3();
  FUNC_0( VAR_13->string );
  VAR_13->modified = VAR_8;
 }




 if ( VAR_11->modified ) {
  VAR_11->modified = VAR_8;

  FUNC_3();
  FUNC_4();
 }


 if ( !VAR_12->integer )
 {
  int VAR_17;

  FUNC_3();
  if ((VAR_17 = FUNC_6()) != VAR_3)
   VAR_14.Error(VAR_0, "RE_BeginFrame() - glGetError() failed (0x%x)!", VAR_17);
 }

 if( !(VAR_16 = FUNC_2(sizeof(*VAR_16))) )
  return;
 if(VAR_16)
 {
  VAR_16->commandId = VAR_4;
  if (!FUNC_1(VAR_10->string, "GL_FRONT"))
   VAR_16->buffer = (int)VAR_2;
  else
   VAR_16->buffer = (int)VAR_1;
 }

 VAR_15.refdef.stereoFrame = VAR_5;

 VAR_15.refdef.vertFlipBuffer = VAR_9;
}

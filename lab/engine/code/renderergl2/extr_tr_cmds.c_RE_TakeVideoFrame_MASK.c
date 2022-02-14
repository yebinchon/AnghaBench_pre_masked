
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int motionJpeg; int * encodeBuffer; int * captureBuffer; int commandId; } ;
typedef TYPE_1__ videoFrameCommand_t ;
typedef int qboolean ;
typedef int byte ;
struct TYPE_5__ {int registered; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;

void FUNC_1( int VAR_2, int VAR_3,
  byte *VAR_4, byte *VAR_5, qboolean VAR_6 )
{
 videoFrameCommand_t *VAR_7;

 if( !VAR_1.registered ) {
  return;
 }

 VAR_7 = FUNC_0( sizeof( *VAR_7 ) );
 if( !VAR_7 ) {
  return;
 }

 VAR_7->commandId = VAR_0;

 VAR_7->width = VAR_2;
 VAR_7->height = VAR_3;
 VAR_7->captureBuffer = VAR_4;
 VAR_7->encodeBuffer = VAR_5;
 VAR_7->motionJpeg = VAR_6;
}

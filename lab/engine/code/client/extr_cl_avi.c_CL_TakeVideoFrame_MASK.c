
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int motionJpeg; int eBuffer; int cBuffer; int height; int width; int fileOpen; } ;
struct TYPE_3__ {int (* TakeVideoFrame ) (int ,int ,int ,int ,int ) ;} ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

void FUNC_1( void )
{

  if( !VAR_0.fileOpen )
    return;

  VAR_1.TakeVideoFrame( VAR_0.width, VAR_0.height,
      VAR_0.cBuffer, VAR_0.eBuffer, VAR_0.motionJpeg );
}

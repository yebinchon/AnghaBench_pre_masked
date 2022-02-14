
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int vidWidth; int vidHeight; } ;
struct TYPE_4__ {TYPE_1__ glconfig; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_7( qboolean VAR_9 )
{
 if( !FUNC_6( VAR_1 ) )
  return;



 if( !VAR_9 )
  FUNC_4( VAR_2 );

 if( !VAR_7 )
  return;

 if( VAR_6 )
 {
  FUNC_0( );

  FUNC_3( VAR_4, VAR_0 );
  FUNC_2( VAR_0 );


  if( FUNC_1( VAR_4 ) & VAR_3 )
   FUNC_5( VAR_4, VAR_5.glconfig.vidWidth / 2, VAR_5.glconfig.vidHeight / 2 );

  VAR_6 = VAR_8;
 }
}

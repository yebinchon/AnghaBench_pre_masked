
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ modified; scalar_t__ integer; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_4( qboolean VAR_9 )
{
 if (!VAR_6 || !FUNC_3( VAR_1 ) )
  return;

 if( !VAR_5 )
 {
  FUNC_1( VAR_2 );
  FUNC_2( VAR_3, VAR_2 );

  FUNC_0( );
 }


 if( !VAR_9 )
 {
  if( VAR_4->modified || !VAR_5 )
  {
   if( VAR_4->integer ) {
    FUNC_1( VAR_0 );
    FUNC_2( VAR_3, VAR_0 );
   } else {
    FUNC_1( VAR_2 );
    FUNC_2( VAR_3, VAR_2 );
   }

   VAR_4->modified = VAR_7;
  }
 }

 VAR_5 = VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int fileSize; int numIndices; int fileName; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static qboolean FUNC_3( int VAR_4 )
{
  unsigned int VAR_5;

  VAR_5 =
    VAR_1.fileSize +
    VAR_4 +
    ( VAR_1.numIndices * 16 ) +
    4;



  if( VAR_5 > VAR_0 )
  {

    FUNC_0( );


    FUNC_1( FUNC_2( "%s_", VAR_1.fileName ) );

    return VAR_3;
  }

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numfavoriteaddresses; char** favoriteaddresses; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;

void FUNC_2( void )
{
 int VAR_2;

 for (VAR_2=0; VAR_2<VAR_1.numfavoriteaddresses; VAR_2++)
  FUNC_0( FUNC_1("server%d",VAR_2+1), VAR_1.favoriteaddresses[VAR_2] );

 for (; VAR_2<VAR_0; VAR_2++)
  FUNC_0( FUNC_1("server%d",VAR_2+1), "" );
}

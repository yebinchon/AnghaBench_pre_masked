
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (char const*,int ) ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_5( const char *VAR_4 )
{
 if (!VAR_4[0])
  return;

 FUNC_0( );

 if( VAR_0 && VAR_0->integer )
  FUNC_2( VAR_4 );
 else
  FUNC_3( VAR_4, VAR_1 );

 if (!VAR_2) {

  return;
 }



 if (VAR_4[FUNC_4(VAR_4) - 1] == '\n') {
  FUNC_1();


  while (VAR_3 > 0) {
   FUNC_1();
   VAR_3--;
  }
 }
 else
 {

  VAR_3++;
 }
}

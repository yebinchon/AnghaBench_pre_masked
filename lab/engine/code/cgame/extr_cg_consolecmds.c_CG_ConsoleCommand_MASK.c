
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {int (* function ) () ;int cmd; } ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

qboolean FUNC_4( void ) {
 const char *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(0);

 for ( VAR_4 = 0 ; VAR_4 < FUNC_0( VAR_0 ) ; VAR_4++ ) {
  if ( !FUNC_2( VAR_3, VAR_0[VAR_4].cmd ) ) {
   VAR_0[VAR_4].function();
   return VAR_2;
  }
 }

 return VAR_1;
}

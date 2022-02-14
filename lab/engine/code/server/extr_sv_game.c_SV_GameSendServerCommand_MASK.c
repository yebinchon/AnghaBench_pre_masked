
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int * clients; } ;


 int FUNC_0 (int *,char*,char const*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_1( int VAR_2, const char *VAR_3 ) {
 if ( VAR_2 == -1 ) {
  FUNC_0( ((void*)0), "%s", VAR_3 );
 } else {
  if ( VAR_2 < 0 || VAR_2 >= VAR_0->integer ) {
   return;
  }
  FUNC_0( VAR_1.clients + VAR_2, "%s", VAR_3 );
 }
}

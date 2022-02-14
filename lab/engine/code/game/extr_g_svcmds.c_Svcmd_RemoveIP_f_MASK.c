
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int str ;
struct TYPE_4__ {scalar_t__ mask; int compare; } ;
typedef TYPE_1__ ipFilter_t ;
struct TYPE_5__ {scalar_t__ mask; int compare; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;

void FUNC_5 (void)
{
 ipFilter_t VAR_3;
 int VAR_4;
 char VAR_5[VAR_0];

 if ( FUNC_3() < 2 ) {
  FUNC_0("Usage: removeip <ip-mask>\n");
  return;
 }

 FUNC_4( 1, VAR_5, sizeof( VAR_5 ) );

 if (!FUNC_1 (VAR_5, &VAR_3))
  return;

 for (VAR_4=0 ; VAR_4<VAR_2 ; VAR_4++) {
  if (VAR_1[VAR_4].mask == VAR_3.mask &&
   VAR_1[VAR_4].compare == VAR_3.compare) {
   VAR_1[VAR_4].compare = 0xffffffffu;
   FUNC_0 ("Removed.\n");

   FUNC_2();
   return;
  }
 }

 FUNC_0 ( "Didn't find %s.\n", VAR_5 );
}

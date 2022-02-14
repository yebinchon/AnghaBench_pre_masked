
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int randomAngleRange; } ;
typedef TYPE_1__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (char*,char*,int*) ;

void FUNC_2( gentity_t *VAR_2 ) {
 int VAR_3;
 FUNC_0( "randomAngleRange", "360.0", &VAR_2->randomAngleRange );
 FUNC_1( "nobots", "0", &VAR_3);
 if ( VAR_3 ) {
  VAR_2->flags |= VAR_0;
 }
 FUNC_1( "nohumans", "0", &VAR_3 );
 if ( VAR_3 ) {
  VAR_2->flags |= VAR_1;
 }
}

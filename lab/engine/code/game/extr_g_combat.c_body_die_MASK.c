
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ health; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_8__ {int integer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_2__ VAR_1 ;

void FUNC_1( gentity_t *VAR_2, gentity_t *VAR_3, gentity_t *VAR_4, int VAR_5, int VAR_6 ) {
 if ( VAR_2->health > VAR_0 ) {
  return;
 }
 if ( !VAR_1.integer ) {
  VAR_2->health = VAR_0+1;
  return;
 }

 FUNC_0( VAR_2, 0 );
}

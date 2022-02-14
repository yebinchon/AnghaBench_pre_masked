
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pack; struct TYPE_5__* next; } ;
typedef TYPE_2__ searchpath_t ;
struct TYPE_4__ {int referenced; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0( int VAR_1 ) {
 searchpath_t *VAR_2;

 if ( !VAR_1 ) {
  VAR_1 = -1;
 }
 for ( VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next ) {

  if ( VAR_2->pack ) {
   VAR_2->pack->referenced &= ~VAR_1;
  }
 }
}

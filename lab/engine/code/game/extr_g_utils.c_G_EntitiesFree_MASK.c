
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ inuse; } ;
typedef TYPE_1__ gentity_t ;
struct TYPE_5__ {int num_entities; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

qboolean FUNC_0( void ) {
 int VAR_6;
 gentity_t *VAR_7;

 if ( VAR_3.num_entities < VAR_0 ) {

  return VAR_5;
 }

 VAR_7 = &VAR_2[VAR_1];
 for ( VAR_6 = VAR_1; VAR_6 < VAR_3.num_entities; VAR_6++, VAR_7++) {
  if ( VAR_7->inuse ) {
   continue;
  }

  return VAR_5;
 }
 return VAR_4;
}

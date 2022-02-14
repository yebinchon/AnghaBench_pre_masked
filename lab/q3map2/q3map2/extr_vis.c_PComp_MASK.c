
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nummightsee; } ;
typedef TYPE_1__ vportal_t ;



int FUNC_0( const void *VAR_0, const void *VAR_1 ){
 if ( ( *(vportal_t **)VAR_0 )->nummightsee == ( *(vportal_t **)VAR_1 )->nummightsee ) {
  return 0;
 }
 if ( ( *(vportal_t **)VAR_0 )->nummightsee < ( *(vportal_t **)VAR_1 )->nummightsee ) {
  return -1;
 }
 return 1;
}

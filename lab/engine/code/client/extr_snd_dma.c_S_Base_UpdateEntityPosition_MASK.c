
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_2__ {int origin; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const,int ) ;
 TYPE_1__* VAR_2 ;

void FUNC_2( int VAR_3, const vec3_t VAR_4 ) {
 if ( VAR_3 < 0 || VAR_3 >= VAR_1 ) {
  FUNC_0( VAR_0, "S_UpdateEntityPosition: bad entitynum %i", VAR_3 );
 }
 FUNC_1( VAR_4, VAR_2[VAR_3].origin );
}

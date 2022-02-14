
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const vec3_t ;
struct TYPE_4__ {scalar_t__ eType; int apos; int pos; } ;
struct TYPE_5__ {TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;


 int FUNC_0 (int *,int,int const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const,int const,int const) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int const,int const,int const) ;
 TYPE_2__* VAR_2 ;

void FUNC_4(const vec3_t VAR_3, int VAR_4, int VAR_5, int VAR_6, vec3_t VAR_7, vec3_t VAR_8, vec3_t VAR_9) {
 centity_t *VAR_10;
 vec3_t VAR_11, VAR_12, VAR_13;
 vec3_t VAR_14, VAR_15, VAR_16;

 if ( VAR_4 <= 0 || VAR_4 >= VAR_0 ) {
  FUNC_2( VAR_3, VAR_7 );
  FUNC_2(VAR_8, VAR_9);
  return;
 }

 VAR_10 = &VAR_2[ VAR_4 ];
 if ( VAR_10->currentState.eType != VAR_1 ) {
  FUNC_2( VAR_3, VAR_7 );
  FUNC_2(VAR_8, VAR_9);
  return;
 }

 FUNC_0( &VAR_10->currentState.pos, VAR_5, VAR_11 );
 FUNC_0( &VAR_10->currentState.apos, VAR_5, VAR_14 );

 FUNC_0( &VAR_10->currentState.pos, VAR_6, VAR_12 );
 FUNC_0( &VAR_10->currentState.apos, VAR_6, VAR_15 );

 FUNC_3( VAR_12, VAR_11, VAR_13 );
 FUNC_3( VAR_15, VAR_14, VAR_16 );

 FUNC_1( VAR_3, VAR_13, VAR_7 );
 FUNC_1( VAR_8, VAR_16, VAR_9 );

}

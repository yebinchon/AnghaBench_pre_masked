
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {TYPE_1__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_5__ {int accuracy_hits; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,float,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_6( vec3_t VAR_4, vec3_t VAR_5, int VAR_6, gentity_t *VAR_7 ) {
 int VAR_8;
 float VAR_9, VAR_10;
 vec3_t VAR_11;
 vec3_t VAR_12, VAR_13, VAR_14;
 qboolean VAR_15 = VAR_2;



 FUNC_5( VAR_5, VAR_12 );
 FUNC_1( VAR_13, VAR_12 );
 FUNC_0( VAR_12, VAR_13, VAR_14 );


 for ( VAR_8 = 0 ; VAR_8 < VAR_0 ; VAR_8++ ) {
  VAR_9 = FUNC_2( &VAR_6 ) * VAR_1 * 16;
  VAR_10 = FUNC_2( &VAR_6 ) * VAR_1 * 16;
  FUNC_4( VAR_4, 8192 * 16, VAR_12, VAR_11);
  FUNC_4 (VAR_11, VAR_9, VAR_13, VAR_11);
  FUNC_4 (VAR_11, VAR_10, VAR_14, VAR_11);
  if( FUNC_3( VAR_4, VAR_11, VAR_7 ) && !VAR_15 ) {
   VAR_15 = VAR_3;
   VAR_7->client->accuracy_hits++;
  }
 }
}

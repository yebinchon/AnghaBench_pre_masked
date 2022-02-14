
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_5__ {int origin; } ;
struct TYPE_6__ {scalar_t__ client; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int*,int) ;

qboolean FUNC_2( gentity_t *VAR_6 ) {
 int VAR_7, VAR_8;
 int VAR_9[VAR_0];
 gentity_t *VAR_10;
 vec3_t VAR_11, VAR_12;

 FUNC_0( VAR_6->s.origin, VAR_3, VAR_11 );
 FUNC_0( VAR_6->s.origin, VAR_2, VAR_12 );
 VAR_8 = FUNC_1( VAR_11, VAR_12, VAR_9, VAR_0 );

 for (VAR_7=0 ; VAR_7<VAR_8 ; VAR_7++) {
  VAR_10 = &VAR_1[VAR_9[VAR_7]];

  if ( VAR_10->client) {
   return VAR_5;
  }

 }

 return VAR_4;
}

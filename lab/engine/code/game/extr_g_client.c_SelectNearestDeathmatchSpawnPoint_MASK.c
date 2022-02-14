
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int origin; } ;
struct TYPE_7__ {TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,char*) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;

gentity_t *FUNC_4( vec3_t VAR_1 ) {
 gentity_t *VAR_2;
 vec3_t VAR_3;
 float VAR_4, VAR_5;
 gentity_t *VAR_6;

 VAR_5 = 999999;
 VAR_6 = ((void*)0);
 VAR_2 = ((void*)0);

 while ((VAR_2 = FUNC_1 (VAR_2, FUNC_0(VAR_0), "info_player_deathmatch")) != ((void*)0)) {

  FUNC_3( VAR_2->s.origin, VAR_1, VAR_3 );
  VAR_4 = FUNC_2( VAR_3 );
  if ( VAR_4 < VAR_5 ) {
   VAR_5 = VAR_4;
   VAR_6 = VAR_2;
  }
 }

 return VAR_6;
}

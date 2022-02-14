
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef float* vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {int angles; int origin; } ;
struct TYPE_8__ {int flags; float randomAngleRange; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,char const*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,float*) ;
 float FUNC_4 () ;

gentity_t *FUNC_5(vec3_t VAR_2, vec3_t VAR_3, qboolean VAR_4) {
 float VAR_5 = 0;
 gentity_t * VAR_6 = ((void*)0);
 gentity_t * VAR_7 = ((void*)0);
 const char* VAR_8 = "info_player_deathmatch";
 while ( ( VAR_6 = FUNC_1( VAR_6, FUNC_0(VAR_8), VAR_8 ) ) != ((void*)0) ) {
  if ( ( (VAR_6->flags & VAR_0) && VAR_4) || ((VAR_6->flags & VAR_1) && !VAR_4) )
   continue;

  if ( FUNC_2( VAR_6 ) ) {

   if ( VAR_7 == ((void*)0) ) {
    VAR_7 = VAR_6;
   }
   continue;
  }

  VAR_5 += 1.0f;
  if ( FUNC_4() * VAR_5 <= 1.0f ) {
   VAR_7 = VAR_6;
  }
 }
 if ( VAR_7 ) {
  FUNC_3(VAR_7->s.origin, VAR_2);
  VAR_2[2] += 9.0f;
  FUNC_3(VAR_7->s.angles, VAR_3);
  if ( VAR_7->randomAngleRange == 360.0f ) {
   VAR_3[1] = FUNC_4() * 360.0f;
  } else {

   float VAR_9 = ( FUNC_4() - 0.5f ) * VAR_7->randomAngleRange;
   VAR_3[1] += VAR_9;
  }
 }
 return VAR_7;
}

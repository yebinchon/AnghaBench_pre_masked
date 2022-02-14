
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_8__ {int angles; int origin; } ;
struct TYPE_9__ {int flags; int spawnflags; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,char*) ;
 TYPE_2__* FUNC_2 (int ,int*,int*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;

gentity_t *FUNC_5( vec3_t VAR_4, vec3_t VAR_5, qboolean VAR_6 ) {
 gentity_t *VAR_7;

 VAR_7 = ((void*)0);

 while ((VAR_7 = FUNC_1 (VAR_7, FUNC_0(VAR_2), "info_player_deathmatch")) != ((void*)0))
 {
  if(((VAR_7->flags & VAR_0) && VAR_6) ||
     ((VAR_7->flags & VAR_1) && !VAR_6))
  {
   continue;
  }

  if((VAR_7->spawnflags & 0x01))
   break;
 }

 if (!VAR_7 || FUNC_3(VAR_7))
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_4 (VAR_7->s.origin, VAR_4);
 VAR_4[2] += 9;
 FUNC_4 (VAR_7->s.angles, VAR_5);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_7__ {int angles; int origin; } ;
struct TYPE_8__ {int flags; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int*) ;
 float FUNC_5 (int*) ;
 int FUNC_6 (int ,int*,int*) ;
 int VAR_3 ;
 int FUNC_7 () ;

gentity_t *FUNC_8 ( vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, qboolean VAR_7 ) {
 gentity_t *VAR_8;
 vec3_t VAR_9;
 float VAR_10;
 float VAR_11[VAR_2];
 gentity_t *VAR_12[VAR_2];
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_13 = 0;
 VAR_8 = ((void*)0);

 while((VAR_8 = FUNC_2 (VAR_8, FUNC_0(VAR_3), "info_player_deathmatch")) != ((void*)0))
 {
  if(FUNC_3(VAR_8))
   continue;

  if(((VAR_8->flags & VAR_0) && VAR_7) ||
     ((VAR_8->flags & VAR_1) && !VAR_7))
  {

   continue;
  }

  FUNC_6( VAR_8->s.origin, VAR_4, VAR_9 );
  VAR_10 = FUNC_5( VAR_9 );

  for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
  {
   if(VAR_10 > VAR_11[VAR_15])
   {
    if (VAR_13 >= VAR_2)
     VAR_13 = VAR_2 - 1;

    for(VAR_16 = VAR_13; VAR_16 > VAR_15; VAR_16--)
    {
     VAR_11[VAR_16] = VAR_11[VAR_16-1];
     VAR_12[VAR_16] = VAR_12[VAR_16-1];
    }

    VAR_11[VAR_15] = VAR_10;
    VAR_12[VAR_15] = VAR_8;

    VAR_13++;
    break;
   }
  }

  if(VAR_15 >= VAR_13 && VAR_13 < VAR_2)
  {
   VAR_11[VAR_13] = VAR_10;
   VAR_12[VAR_13] = VAR_8;
   VAR_13++;
  }
 }

 if(!VAR_13)
 {
  VAR_8 = FUNC_2(((void*)0), FUNC_0(VAR_3), "info_player_deathmatch");

  if (!VAR_8)
   FUNC_1( "Couldn't find a spawn point" );

  FUNC_4 (VAR_8->s.origin, VAR_5);
  VAR_5[2] += 9;
  FUNC_4 (VAR_8->s.angles, VAR_6);
  return VAR_8;
 }


 VAR_14 = FUNC_7() * (VAR_13 / 2);

 FUNC_4 (VAR_12[VAR_14]->s.origin, VAR_5);
 VAR_5[2] += 9;
 FUNC_4 (VAR_12[VAR_14]->s.angles, VAR_6);

 return VAR_12[VAR_14];
}

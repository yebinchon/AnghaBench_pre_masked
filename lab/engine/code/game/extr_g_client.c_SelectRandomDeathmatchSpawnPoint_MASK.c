
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 () ;

gentity_t *FUNC_4(qboolean VAR_4) {
 gentity_t *VAR_5;
 int VAR_6;
 int VAR_7;
 gentity_t *VAR_8[VAR_2];

 VAR_6 = 0;
 VAR_5 = ((void*)0);

 while((VAR_5 = FUNC_1 (VAR_5, FUNC_0(VAR_3), "info_player_deathmatch")) != ((void*)0) && VAR_6 < VAR_2)
 {
  if(FUNC_2(VAR_5))
   continue;

  if(((VAR_5->flags & VAR_0) && VAR_4) ||
     ((VAR_5->flags & VAR_1) && !VAR_4))
  {

   continue;
  }

  VAR_8[VAR_6] = VAR_5;
  VAR_6++;
 }

 if ( !VAR_6 ) {
  return FUNC_1( ((void*)0), FUNC_0(VAR_3), "info_player_deathmatch");
 }

 VAR_7 = FUNC_3() % VAR_6;
 return VAR_8[ VAR_7 ];
}

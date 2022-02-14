
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ team_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 float FUNC_3 () ;

gentity_t *FUNC_4( int VAR_5, team_t VAR_6, qboolean VAR_7) {
 gentity_t *VAR_8 = ((void*)0);
 gentity_t *VAR_9 = ((void*)0);
 float VAR_10 = 0;

 char *VAR_11;

 if (VAR_5 == VAR_2) {
  if (VAR_6 == VAR_4)
   VAR_11 = "team_CTF_redplayer";
  else if (VAR_6 == VAR_3)
   VAR_11 = "team_CTF_blueplayer";
  else
   return ((void*)0);
 } else {
  if (VAR_6 == VAR_4)
   VAR_11 = "team_CTF_redspawn";
  else if (VAR_6 == VAR_3)
   VAR_11 = "team_CTF_bluespawn";
  else
   return ((void*)0);
 }

 while ( ( VAR_8 = FUNC_1( VAR_8, FUNC_0(VAR_11), VAR_11 ) ) != ((void*)0) ) {
  if ( ( (VAR_8->flags & VAR_0) && VAR_7) || ((VAR_8->flags & VAR_1) && !VAR_7) )
   continue;

  if ( FUNC_2( VAR_8 ) ) {

   if ( VAR_9 == ((void*)0) ) {
    VAR_9 = VAR_8;
   }
   continue;
  }

  VAR_10 += 1.0f;
  if ( FUNC_3() * VAR_10 <= 1.0f ) {
   VAR_9 = VAR_8;
  }
 }

 return VAR_9;
}

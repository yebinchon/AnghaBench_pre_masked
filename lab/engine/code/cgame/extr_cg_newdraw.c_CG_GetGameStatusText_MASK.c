
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* teamScores; TYPE_2__* snap; } ;
struct TYPE_7__ {scalar_t__ gametype; } ;
struct TYPE_5__ {scalar_t__* persistant; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 char* FUNC_1 (char*,scalar_t__,...) ;

const char *FUNC_2(void) {
 const char *VAR_7 = "";
 if ( VAR_6.gametype < VAR_0) {
  if (VAR_5.snap->ps.persistant[VAR_3] != VAR_4 ) {
   VAR_7 = FUNC_1("%s place with %i",FUNC_0( VAR_5.snap->ps.persistant[VAR_1] + 1 ),VAR_5.snap->ps.persistant[VAR_2] );
  }
 } else {
  if ( VAR_5.teamScores[0] == VAR_5.teamScores[1] ) {
   VAR_7 = FUNC_1("Teams are tied at %i", VAR_5.teamScores[0] );
  } else if ( VAR_5.teamScores[0] >= VAR_5.teamScores[1] ) {
   VAR_7 = FUNC_1("Red leads Blue, %i to %i", VAR_5.teamScores[0], VAR_5.teamScores[1] );
  } else {
   VAR_7 = FUNC_1("Blue leads Red, %i to %i", VAR_5.teamScores[1], VAR_5.teamScores[0] );
  }
 }
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int id; } ;
typedef TYPE_1__ gentity_t ;
typedef int buffer ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int num_entities; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_2 (char*) ;
 TYPE_4__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int,char*) ;

void FUNC_6( gentity_t *VAR_5 ) {
 gentity_t *VAR_6;
 int VAR_7, VAR_8;
 char VAR_9[VAR_0];

 if ( !VAR_1.integer ) {
  FUNC_5( VAR_5-VAR_2, "print \"Cheats are not enabled on this server.\n\"" );
  return;
 }
 if ( FUNC_3() == 3 ) {
  FUNC_4( 2, VAR_9, sizeof( VAR_9 ) );
  VAR_8 = FUNC_0( VAR_5, VAR_9, VAR_4, VAR_4 );
  if (VAR_8 == -1) {
   FUNC_5( VAR_5-VAR_2, "print \"Invalid player name\n\"");
  return;
  }
  VAR_5 = &VAR_2[VAR_8];
 } else if ( FUNC_3() != 2 ) {
  FUNC_5( VAR_5-VAR_2, "print \"usage: pickup id <optional player name>\n\"" );
  return;
 }
 FUNC_4( 1, VAR_9, sizeof( VAR_9 ) );
 VAR_7 = FUNC_2( VAR_9 );
 for (VAR_8 = 0; VAR_8 < VAR_3.num_entities; VAR_8++) {
  VAR_6 = &VAR_2[VAR_8];
  if (VAR_6->id && VAR_7 == VAR_6->id) {
   FUNC_1( VAR_6, VAR_5, ((void*)0) );
  }
 }
}

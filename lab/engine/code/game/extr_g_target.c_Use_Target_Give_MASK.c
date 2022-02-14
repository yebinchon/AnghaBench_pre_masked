
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int trace_t ;
typedef int trace ;
struct TYPE_10__ {scalar_t__ nextthink; int item; int target; int client; } ;
typedef TYPE_1__ gentity_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5( gentity_t *VAR_1, gentity_t *VAR_2, gentity_t *VAR_3 ) {
 gentity_t *VAR_4;
 trace_t VAR_5;

 if ( !VAR_3->client ) {
  return;
 }

 if ( !VAR_1->target ) {
  return;
 }

 FUNC_3( &VAR_5, 0, sizeof( VAR_5 ) );
 VAR_4 = ((void*)0);
 while ( (VAR_4 = FUNC_1 (VAR_4, FUNC_0(VAR_0), VAR_1->target)) != ((void*)0) ) {
  if ( !VAR_4->item ) {
   continue;
  }
  FUNC_2( VAR_4, VAR_3, &VAR_5 );


  VAR_4->nextthink = 0;
  FUNC_4( VAR_4 );
 }
}

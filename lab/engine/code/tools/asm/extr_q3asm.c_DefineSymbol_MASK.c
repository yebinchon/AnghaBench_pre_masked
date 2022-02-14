
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hash; int value; struct TYPE_6__* next; int segment; int name; } ;
typedef TYPE_1__ symbol_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int,char*) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (char*,char*,char*,int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7( char *VAR_7, int VAR_8 ) {

 symbol_t *VAR_9;
 char VAR_10[VAR_0];
 int VAR_11;

 if ( VAR_4 == 1 ) {
  return;
 }


 if ( VAR_7[0] == '$' ) {
  FUNC_6( VAR_10, "%s_%i", VAR_7, VAR_1 );
  VAR_7 = VAR_10;
 }

 VAR_11 = FUNC_1( VAR_7 );

 if (FUNC_4(VAR_6, VAR_11, VAR_7)) {
  FUNC_0( "Multiple definitions for %s\n", VAR_7 );
  return;
 }

 VAR_9 = FUNC_5( sizeof( *VAR_9 ) );
 VAR_9->next = ((void*)0);
 VAR_9->name = FUNC_2( VAR_7 );
 VAR_9->hash = VAR_11;
 VAR_9->value = VAR_8;
 VAR_9->segment = VAR_2;

 FUNC_3(VAR_6, VAR_11, VAR_9);
 if (VAR_5 == 0) {
  VAR_3 = VAR_5 = VAR_9;
 } else {
  VAR_3->next = VAR_9;
  VAR_3 = VAR_9;
 }
}

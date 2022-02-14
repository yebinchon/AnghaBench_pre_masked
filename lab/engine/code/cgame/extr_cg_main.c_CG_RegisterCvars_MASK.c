
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int var ;
struct TYPE_5__ {char* cvarName; int cvarFlags; int defaultString; int * vmCvar; } ;
typedef TYPE_1__ cvarTable_t ;
struct TYPE_7__ {int modificationCount; } ;
struct TYPE_6__ {int localServer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3( void ) {
 int VAR_11;
 cvarTable_t *VAR_12;
 char VAR_13[VAR_5];

 for ( VAR_11 = 0, VAR_12 = VAR_8 ; VAR_11 < VAR_9 ; VAR_11++, VAR_12++ ) {
  FUNC_1( VAR_12->vmCvar, VAR_12->cvarName,
   VAR_12->defaultString, VAR_12->cvarFlags );
 }


 FUNC_2( "sv_running", VAR_13, sizeof( VAR_13 ) );
 VAR_7.localServer = FUNC_0( VAR_13 );

 VAR_10 = VAR_6.modificationCount;

 FUNC_1(((void*)0), "model", VAR_2, VAR_1 | VAR_0 );
 FUNC_1(((void*)0), "headmodel", VAR_2, VAR_1 | VAR_0 );
 FUNC_1(((void*)0), "team_model", VAR_4, VAR_1 | VAR_0 );
 FUNC_1(((void*)0), "team_headmodel", VAR_3, VAR_1 | VAR_0 );
}

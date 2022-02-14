
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
typedef int msg_t ;
struct TYPE_8__ {int lastClientCommand; scalar_t__ state; scalar_t__ nextReliableTime; int lastClientCommandString; int name; } ;
typedef TYPE_1__ client_t ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {scalar_t__ time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int,char const*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int,char*,char const*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*,int ) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static qboolean FUNC_7( client_t *VAR_6, msg_t *VAR_7 ) {
 int VAR_8;
 const char *VAR_9;
 qboolean VAR_10 = VAR_3;

 VAR_8 = FUNC_3( VAR_7 );
 VAR_9 = FUNC_4( VAR_7 );


 if ( VAR_6->lastClientCommand >= VAR_8 ) {
  return VAR_3;
 }

 FUNC_0( "clientCommand: %s : %i : %s\n", VAR_6->name, VAR_8, VAR_9 );


 if ( VAR_8 > VAR_6->lastClientCommand + 1 ) {
  FUNC_1( "Client %s lost %i clientCommands\n", VAR_6->name,
   VAR_8 - VAR_6->lastClientCommand + 1 );
  FUNC_5( VAR_6, "Lost reliable commands" );
  return VAR_2;
 }
 if ( !VAR_1->integer &&
  VAR_6->state >= VAR_0 &&
  VAR_4->integer &&
  VAR_5.time < VAR_6->nextReliableTime ) {


  VAR_10 = VAR_2;
 }


 VAR_6->nextReliableTime = VAR_5.time + 1000;

 FUNC_6( VAR_6, VAR_9, VAR_10 );

 VAR_6->lastClientCommand = VAR_8;
 FUNC_2(VAR_6->lastClientCommandString, sizeof(VAR_6->lastClientCommandString), "%s", VAR_9);

 return VAR_3;
}

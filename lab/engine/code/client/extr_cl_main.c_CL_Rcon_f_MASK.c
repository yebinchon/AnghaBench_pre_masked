
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ port; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_9__ {TYPE_2__ remoteAddress; } ;
struct TYPE_14__ {scalar_t__ state; TYPE_1__ netchan; } ;
struct TYPE_13__ {TYPE_2__ rconAddress; } ;
struct TYPE_12__ {char* string; } ;
struct TYPE_11__ {char* string; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,scalar_t__,char*,TYPE_2__) ;
 int FUNC_4 (char*,TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,int,char*) ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7( void ) {
 char VAR_9[VAR_1];
 netadr_t VAR_10;

 if ( !VAR_8->string[0] ) {
  FUNC_2 ("You must set 'rconpassword' before\n"
     "issuing an rcon command.\n");
  return;
 }

 VAR_9[0] = -1;
 VAR_9[1] = -1;
 VAR_9[2] = -1;
 VAR_9[3] = -1;
 VAR_9[4] = 0;

 FUNC_5 (VAR_9, VAR_1, "rcon ");

 FUNC_5 (VAR_9, VAR_1, VAR_8->string);
 FUNC_5 (VAR_9, VAR_1, " ");


 FUNC_5 (VAR_9, VAR_1, FUNC_1()+5);

 if ( VAR_5.state >= VAR_0 ) {
  VAR_10 = VAR_5.netchan.remoteAddress;
 } else {
  if (!FUNC_6(VAR_7->string)) {
   FUNC_2 ("You must either be connected,\n"
      "or set the 'rconAddress' cvar\n"
      "to issue rcon commands\n");

   return;
  }
  FUNC_4 (VAR_7->string, &VAR_10, VAR_2);
  if (VAR_10.port == 0) {
   VAR_10.port = FUNC_0 (VAR_4);
  }
 }

 FUNC_3 (VAR_3, FUNC_6(VAR_9)+1, VAR_9, VAR_10);
 VAR_6.rconAddress = VAR_10;
}

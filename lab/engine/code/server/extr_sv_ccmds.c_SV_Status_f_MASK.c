
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * persistant; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_9__ {int remoteAddress; } ;
struct TYPE_11__ {scalar_t__ state; int ping; int rate; TYPE_1__ netchan; int name; } ;
typedef TYPE_3__ client_t ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {int string; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {TYPE_3__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ) ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_7__* VAR_3 ;
 int FUNC_4 (char const*) ;
 TYPE_6__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static void FUNC_5( void ) {
 int VAR_7, VAR_8, VAR_9;
 client_t *VAR_10;
 playerState_t *VAR_11;
 const char *VAR_12;
 int VAR_13;


 if ( !VAR_3->integer ) {
  FUNC_0( "Server is not running.\n" );
  return;
 }

 FUNC_0 ("map: %s\n", VAR_4->string );

 FUNC_0 ("cl score ping name            address                                 rate \n");
 FUNC_0 ("-- ----- ---- --------------- --------------------------------------- -----\n");
 for (VAR_7=0,VAR_10=VAR_6.clients ; VAR_7 < VAR_5->integer ; VAR_7++,VAR_10++)
 {
  if (!VAR_10->state)
   continue;
  FUNC_0 ("%2i ", VAR_7);
  VAR_11 = FUNC_2( VAR_7 );
  FUNC_0 ("%5i ", VAR_11->persistant[VAR_2]);

  if (VAR_10->state == VAR_0)
   FUNC_0 ("CON ");
  else if (VAR_10->state == VAR_1)
   FUNC_0 ("ZMB ");
  else
  {
   VAR_13 = VAR_10->ping < 9999 ? VAR_10->ping : 9999;
   FUNC_0 ("%4i ", VAR_13);
  }

  FUNC_0 ("%s", VAR_10->name);

  VAR_9 = 16 - FUNC_3(VAR_10->name);
  VAR_8 = 0;

  do
  {
   FUNC_0 (" ");
   VAR_8++;
  } while(VAR_8 < VAR_9);



  VAR_12 = FUNC_1( VAR_10->netchan.remoteAddress );
  FUNC_0 ("^7%s", VAR_12);
  VAR_9 = 39 - FUNC_4(VAR_12);
  VAR_8 = 0;

  do
  {
   FUNC_0(" ");
   VAR_8++;
  } while(VAR_8 < VAR_9);

  FUNC_0 (" %5i", VAR_10->rate);

  FUNC_0 ("\n");
 }
 FUNC_0 ("\n");
}

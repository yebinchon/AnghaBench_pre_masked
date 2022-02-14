
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* pending; void* print; int address; } ;
typedef TYPE_1__ serverStatus_t ;
typedef int netadrtype_t ;
typedef int netadr_t ;
struct TYPE_5__ {scalar_t__ state; int serverAddress; scalar_t__ demoplaying; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (char*,int *,int ) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_7 (char*,char*) ;

void FUNC_8(void) {
 netadr_t VAR_7, *VAR_8 = ((void*)0);
 char *VAR_9;
 serverStatus_t *VAR_10;
 int VAR_11;
 netadrtype_t VAR_12 = VAR_3;

 VAR_11 = FUNC_1();

 if ( VAR_11 != 2 && VAR_11 != 3 )
 {
  if (VAR_5.state != VAR_0 || VAR_5.demoplaying)
  {
   FUNC_4 ("Not connected to a server.\n");
   FUNC_4( "usage: serverstatus [-4|-6] server\n");
   return;
  }

  VAR_8 = &VAR_5.serverAddress;
 }

 if(!VAR_8)
 {
  FUNC_3( &VAR_7, 0, sizeof(netadr_t) );

  if(VAR_11 == 2)
   VAR_9 = FUNC_2(1);
  else
  {
   if(!FUNC_7(FUNC_2(1), "-4"))
    VAR_12 = VAR_1;
   else if(!FUNC_7(FUNC_2(1), "-6"))
    VAR_12 = VAR_2;
   else
    FUNC_4( "warning: only -4 or -6 as address type understood.\n");

   VAR_9 = FUNC_2(2);
  }

  VAR_8 = &VAR_7;
  if ( !FUNC_6( VAR_9, VAR_8, VAR_12 ) )
   return;
 }

 FUNC_5( VAR_4, *VAR_8, "getstatus" );

 VAR_10 = FUNC_0( *VAR_8 );
 VAR_10->address = *VAR_8;
 VAR_10->print = VAR_6;
 VAR_10->pending = VAR_6;
}

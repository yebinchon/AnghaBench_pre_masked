
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int adr; scalar_t__ time; int start; } ;
typedef TYPE_1__ ping_t ;
typedef int netadrtype_t ;
typedef int netadr_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (char*,int *,int ) ;
 int VAR_3 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (char*,char*) ;

void FUNC_11( void ) {
 netadr_t VAR_4;
 ping_t* VAR_5;
 char* VAR_6;
 int VAR_7;
 netadrtype_t VAR_8 = VAR_2;

 VAR_7 = FUNC_2();

 if ( VAR_7 != 2 && VAR_7 != 3 ) {
  FUNC_5( "usage: ping [-4|-6] server\n");
  return;
 }

 if(VAR_7 == 2)
  VAR_6 = FUNC_3(1);
 else
 {
  if(!FUNC_10(FUNC_3(1), "-4"))
   VAR_8 = VAR_0;
  else if(!FUNC_10(FUNC_3(1), "-6"))
   VAR_8 = VAR_1;
  else
   FUNC_5( "warning: only -4 or -6 as address type understood.\n");

  VAR_6 = FUNC_3(2);
 }

 FUNC_4( &VAR_4, 0, sizeof(netadr_t) );

 if ( !FUNC_7( VAR_6, &VAR_4, VAR_8 ) ) {
  return;
 }

 VAR_5 = FUNC_0();

 FUNC_9( &VAR_5->adr, &VAR_4, sizeof (netadr_t) );
 VAR_5->start = FUNC_8();
 VAR_5->time = 0;

 FUNC_1(VAR_5->adr, ((void*)0), 0);

 FUNC_6( VAR_3, VAR_4, "getinfo xxx" );
}

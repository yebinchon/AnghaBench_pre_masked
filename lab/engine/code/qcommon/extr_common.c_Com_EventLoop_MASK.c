
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int evType; int evTime; scalar_t__ evPtr; int evValue2; int evValue; } ;
typedef TYPE_1__ sysEvent_t ;
typedef int netadr_t ;
typedef int msg_t ;
typedef int byte ;
typedef int bufData ;
struct TYPE_5__ {scalar_t__ integer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;
 TYPE_1__ FUNC_7 () ;
 int FUNC_8 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int *,int *,int) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_11 (scalar_t__) ;
 TYPE_2__* VAR_5 ;

int FUNC_12( void ) {
 sysEvent_t VAR_6;
 netadr_t VAR_7;
 byte VAR_8[VAR_1];
 msg_t VAR_9;

 FUNC_9( &VAR_9, VAR_8, sizeof( VAR_8 ) );

 while ( 1 ) {
  VAR_6 = FUNC_7();


  if ( VAR_6.evType == VAR_4 ) {

   while ( FUNC_10( VAR_2, &VAR_7, &VAR_9 ) ) {
    FUNC_4( VAR_7, &VAR_9 );
   }

   while ( FUNC_10( VAR_3, &VAR_7, &VAR_9 ) ) {

    if ( VAR_5->integer ) {
     FUNC_8( &VAR_7, &VAR_9 );
    }
   }

   return VAR_6.evTime;
  }


  switch(VAR_6.evType)
  {
   case 129:
    FUNC_2( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
   case 132:
    FUNC_0( VAR_6.evValue );
   break;
   case 128:
    FUNC_3( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
   case 130:
    FUNC_1( VAR_6.evValue, VAR_6.evValue2, VAR_6.evTime );
   break;
   case 131:
    FUNC_5( (char *)VAR_6.evPtr );
    FUNC_5( "\n" );
   break;
   default:
    FUNC_6( VAR_0, "Com_EventLoop: bad event type %i", VAR_6.evType );
   break;
  }


  if ( VAR_6.evPtr ) {
   FUNC_11( VAR_6.evPtr );
  }
 }

 return 0;
}

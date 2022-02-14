
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int evPtrLength; struct TYPE_8__* evPtr; } ;
typedef TYPE_1__ sysEvent_t ;
typedef int ev ;
struct TYPE_9__ {int integer; } ;


 int FUNC_0 (int ,char*) ;
 TYPE_1__ FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

sysEvent_t FUNC_5( void ) {
 int VAR_3;
 sysEvent_t VAR_4;


 if ( VAR_1->integer == 2 ) {
  VAR_3 = FUNC_2( &VAR_4, sizeof(VAR_4), VAR_2 );
  if ( VAR_3 != sizeof(VAR_4) ) {
   FUNC_0( VAR_0, "Error reading from journal file" );
  }
  if ( VAR_4.evPtrLength ) {
   VAR_4.evPtr = FUNC_4( VAR_4.evPtrLength );
   VAR_3 = FUNC_2( VAR_4.evPtr, VAR_4.evPtrLength, VAR_2 );
   if ( VAR_3 != VAR_4.evPtrLength ) {
    FUNC_0( VAR_0, "Error reading from journal file" );
   }
  }
 } else {
  VAR_4 = FUNC_1();


  if ( VAR_1->integer == 1 ) {
   VAR_3 = FUNC_3( &VAR_4, sizeof(VAR_4), VAR_2 );
   if ( VAR_3 != sizeof(VAR_4) ) {
    FUNC_0( VAR_0, "Error writing to journal file" );
   }
   if ( VAR_4.evPtrLength ) {
    VAR_3 = FUNC_3( VAR_4.evPtr, VAR_4.evPtrLength, VAR_2 );
    if ( VAR_3 != VAR_4.evPtrLength ) {
     FUNC_0( VAR_0, "Error writing to journal file" );
    }
   }
  }
 }

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ evType; int evValue; int evValue2; int evTime; int evPtrLength; void* evPtr; } ;
typedef TYPE_1__ sysEvent_t ;
typedef scalar_t__ sysEventType_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void FUNC_3( int VAR_6, sysEventType_t VAR_7, int VAR_8, int VAR_9, int VAR_10, void *VAR_11 )
{
 sysEvent_t *VAR_12;


 if ( VAR_7 == VAR_2 && VAR_3 != VAR_5 )
 {
  VAR_12 = &VAR_4[ ( VAR_3 + VAR_1 - 1 ) & VAR_0 ];

  if ( VAR_12->evType == VAR_2 )
  {
   VAR_12->evValue += VAR_8;
   VAR_12->evValue2 += VAR_9;
   return;
  }
 }

 VAR_12 = &VAR_4[ VAR_3 & VAR_0 ];

 if ( VAR_3 - VAR_5 >= VAR_1 )
 {
  FUNC_0("Com_QueueEvent: overflow\n");

  if ( VAR_12->evPtr )
  {
   FUNC_2( VAR_12->evPtr );
  }
  VAR_5++;
 }

 VAR_3++;

 if ( VAR_6 == 0 )
 {
  VAR_6 = FUNC_1();
 }

 VAR_12->evTime = VAR_6;
 VAR_12->evType = VAR_7;
 VAR_12->evValue = VAR_8;
 VAR_12->evValue2 = VAR_9;
 VAR_12->evPtrLength = VAR_10;
 VAR_12->evPtr = VAR_11;
}

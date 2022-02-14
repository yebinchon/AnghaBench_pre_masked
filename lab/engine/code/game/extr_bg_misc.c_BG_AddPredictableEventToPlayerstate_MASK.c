
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eventSequence; int* events; int* eventParms; int pmove_framecount; } ;
typedef TYPE_1__ playerState_t ;
typedef int buf ;


 int FUNC_0 (char*,int ,int,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int * VAR_1 ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3( int VAR_2, int VAR_3, playerState_t *VAR_4 ) {
 VAR_4->events[VAR_4->eventSequence & (VAR_0-1)] = VAR_2;
 VAR_4->eventParms[VAR_4->eventSequence & (VAR_0-1)] = VAR_3;
 VAR_4->eventSequence++;
}

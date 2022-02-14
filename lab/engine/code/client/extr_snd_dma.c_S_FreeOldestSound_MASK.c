
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_6__ {int lastTimeUsed; TYPE_1__* soundData; scalar_t__ inMemory; int soundName; } ;
typedef TYPE_2__ sfx_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

void FUNC_3( void ) {
 int VAR_3, VAR_4, VAR_5;
 sfx_t *VAR_6;
 sndBuffer *VAR_7, *VAR_8;

 VAR_4 = FUNC_1();
 VAR_5 = 0;

 for (VAR_3=1 ; VAR_3 < VAR_2 ; VAR_3++) {
  VAR_6 = &VAR_1[VAR_3];
  if (VAR_6->inMemory && VAR_6->lastTimeUsed<VAR_4) {
   VAR_5 = VAR_3;
   VAR_4 = VAR_6->lastTimeUsed;
  }
 }

 VAR_6 = &VAR_1[VAR_5];

 FUNC_0("S_FreeOldestSound: freeing sound %s\n", VAR_6->soundName);

 VAR_7 = VAR_6->soundData;
 while(VAR_7 != ((void*)0)) {
  VAR_8 = VAR_7->next;
  FUNC_2(VAR_7);
  VAR_7 = VAR_8;
 }
 VAR_6->inMemory = VAR_0;
 VAR_6->soundData = ((void*)0);
}

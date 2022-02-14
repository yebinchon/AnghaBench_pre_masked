
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; } ;
typedef TYPE_1__ sndBuffer ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

sndBuffer* FUNC_1(void) {
 sndBuffer *VAR_3;
redo:
 if (VAR_0 == ((void*)0)) {
  FUNC_0();
  goto redo;
 }

 VAR_1 -= sizeof(sndBuffer);
 VAR_2 += sizeof(sndBuffer);

 VAR_3 = VAR_0;
 VAR_0 = *(sndBuffer **)VAR_0;
 VAR_3->next = ((void*)0);
 return VAR_3;
}

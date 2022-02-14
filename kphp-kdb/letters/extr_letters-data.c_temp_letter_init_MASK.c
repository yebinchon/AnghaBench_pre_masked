
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int drive_l; int priority; struct TYPE_3__* prev; struct TYPE_3__* next; int * l; } ;
typedef TYPE_1__ temp_letter ;



void FUNC_0 (temp_letter *VAR_0) {
  VAR_0->id = VAR_0->drive_l = VAR_0->priority = -1;
  VAR_0->l = ((void*)0);
  VAR_0->next = VAR_0;
  VAR_0->prev = VAR_0;
}

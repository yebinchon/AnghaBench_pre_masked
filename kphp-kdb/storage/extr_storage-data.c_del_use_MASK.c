
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; struct TYPE_4__* next; struct TYPE_4__* prev; } ;
typedef TYPE_1__ metafile_t ;


 size_t FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1 (metafile_t *VAR_3) {
  metafile_t *VAR_4 = VAR_3->prev, *VAR_5 = VAR_3->next;
  VAR_4->next = VAR_5;
  VAR_5->prev = VAR_4;
  VAR_3->prev = VAR_3->next = ((void*)0);
  VAR_0[FUNC_0 (VAR_3)] -= VAR_3->size;
  VAR_2 -= VAR_3->size;
  VAR_1--;
}

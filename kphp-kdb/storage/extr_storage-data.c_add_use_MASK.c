
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ metafile_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1 (metafile_t *VAR_4) {
  const int VAR_5 = FUNC_0 (VAR_4);
  metafile_t *VAR_6 = &VAR_0[VAR_5], *VAR_7 = VAR_0[VAR_5].next;
  VAR_6->next = VAR_4; VAR_4->prev = VAR_6;
  VAR_7->prev = VAR_4; VAR_4->next = VAR_7;
  VAR_1[VAR_5] += VAR_4->size;
  VAR_3 += VAR_4->size;
  VAR_2++;
}

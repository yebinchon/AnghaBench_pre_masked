
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; TYPE_2__** h; } ;
typedef TYPE_1__ hash_table ;
struct TYPE_6__ {int key; int data; struct TYPE_6__* next_entry; } ;
typedef TYPE_2__ hash_entry ;


 TYPE_2__* VAR_0 ;

int FUNC_0 (hash_table *VAR_1, int VAR_2) {
  int VAR_3 = (int)VAR_2 % VAR_1->size, VAR_4 = 0;
  if (VAR_3 < 0) {
    VAR_3 += VAR_1->size;
  }

  hash_entry **VAR_5 = &VAR_1->h[VAR_3];
  while ((*VAR_5) != ((void*)0)) {
    if ((*VAR_5)->key == VAR_2) {
      hash_entry *VAR_6 = *VAR_5;
      *VAR_5 = (*VAR_5)->next_entry;
      VAR_4 = VAR_6->data;
      VAR_6->data = 0;
      VAR_6->next_entry = VAR_0;
      VAR_0 = VAR_6;

      return VAR_4;
    }
    VAR_5 = &(*VAR_5)->next_entry;
  }

  return VAR_4;
}

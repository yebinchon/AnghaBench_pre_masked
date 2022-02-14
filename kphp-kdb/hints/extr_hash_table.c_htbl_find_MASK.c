
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; TYPE_2__** h; } ;
typedef TYPE_1__ hash_table ;
struct TYPE_5__ {long long key; struct TYPE_5__* next_entry; int data; } ;
typedef TYPE_2__ hash_entry ;
typedef int changes ;



changes *FUNC_0 (hash_table *VAR_0, long long VAR_1) {
  int VAR_2 = (unsigned int)VAR_1 % VAR_0->size;

  hash_entry *VAR_3 = VAR_0->h[VAR_2];
  while (VAR_3 != ((void*)0)) {
    if (VAR_3->key == VAR_1) {
      return &(VAR_3->data);
    }
    VAR_3 = VAR_3->next_entry;
  }

  return ((void*)0);
}

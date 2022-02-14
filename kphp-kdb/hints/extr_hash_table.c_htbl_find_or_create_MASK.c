
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int size; TYPE_2__** h; } ;
typedef TYPE_1__ hash_table ;
struct TYPE_6__ {long long key; int data; struct TYPE_6__* next_entry; } ;
typedef TYPE_2__ hash_entry ;
typedef int changes ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;

changes *FUNC_2 (hash_table *VAR_0, long long VAR_1) {
  int VAR_2 = (unsigned int)VAR_1 % VAR_0->size;

  hash_entry *VAR_3 = VAR_0->h[VAR_2];
  while (VAR_3 != ((void*)0)) {
    if (VAR_3->key == VAR_1) {
      return &(VAR_3->data);
    }
    VAR_3 = VAR_3->next_entry;
  }

  VAR_3 = FUNC_1();
  VAR_3->key = VAR_1;
  FUNC_0(VAR_3->data);
  VAR_3->next_entry = VAR_0->h[VAR_2];
  VAR_0->h[VAR_2] = VAR_3;

  return &(VAR_3->data);
}

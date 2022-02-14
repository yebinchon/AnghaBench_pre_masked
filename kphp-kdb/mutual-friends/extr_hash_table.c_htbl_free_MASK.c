
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; TYPE_2__** h; int hash; } ;
typedef TYPE_1__ hash_table ;
typedef TYPE_2__* hash_entry_ptr ;
struct TYPE_9__ {struct TYPE_9__* next_entry; scalar_t__ data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (TYPE_2__**,int) ;

void FUNC_3 (hash_table *VAR_1) {
  FUNC_0 (VAR_1);
  if (VAR_1 == ((void*)0)) {
    return;
  }

  int VAR_2 = VAR_1->size, VAR_3;
  hash_entry_ptr *VAR_4 = VAR_1->h;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    hash_entry_ptr VAR_5 = VAR_4[VAR_3];
    if (VAR_5 != ((void*)0)) {
      while (VAR_5->next_entry != ((void*)0)) {
        VAR_5->data = 0;
        VAR_5 = VAR_5->next_entry;
      }
      VAR_5->data = 0;
      VAR_5->next_entry = VAR_0;
      VAR_0 = VAR_4[VAR_3];
      VAR_4[VAR_3] = ((void*)0);
    }
  }

  FUNC_2 (VAR_1->h, sizeof (hash_entry_ptr) * VAR_1->size);
  VAR_1->h = ((void*)0);
  VAR_1->size = 0;
  VAR_1->hash = FUNC_1 (VAR_1->h, VAR_1->size);
}

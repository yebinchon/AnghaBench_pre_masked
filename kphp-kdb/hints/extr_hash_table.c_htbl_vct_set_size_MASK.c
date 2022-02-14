
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * h; } ;
typedef TYPE_1__ hash_table_vct ;
typedef int hash_entry_vct ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int) ;

void FUNC_2 (hash_table_vct *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0->h == ((void*)0));

  VAR_0->h = FUNC_1 (sizeof (hash_entry_vct *) * VAR_1);
  FUNC_0 (VAR_0->h != ((void*)0));

  VAR_0->size = VAR_1;
}

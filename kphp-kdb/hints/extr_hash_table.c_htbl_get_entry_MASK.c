
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hash_entry_ptr ;
struct TYPE_5__ {struct TYPE_5__* next_entry; } ;
typedef TYPE_1__ hash_entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;

hash_entry_ptr FUNC_2 (void) {
  if (VAR_1 == ((void*)0)) {
    if (1 <= VAR_0 && VAR_0 < 10000) {
      FUNC_1 (VAR_0);
    } else {
      FUNC_1 (10000);
    }
  }

  FUNC_0 (VAR_1 != ((void*)0));

  hash_entry *VAR_2 = VAR_1;
  VAR_1 = VAR_1->next_entry;
  VAR_2->next_entry = ((void*)0);

  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gather_data {scalar_t__ filedata_len; int * filedata; int * filename; scalar_t__ key_len; int * key; TYPE_1__* prev; struct gather_data* next; } ;
struct TYPE_2__ {struct gather_data* next; } ;


 int VAR_0 ;
 struct gather_data* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct gather_data*,int) ;

void FUNC_3 (struct gather_data *VAR_2) {
  if (VAR_1 == VAR_2) {
    VAR_1 = VAR_2->next;
  }
  if (VAR_2->prev) {
    VAR_2->prev->next = VAR_2->next;
  }
  if (VAR_2->next) {
    VAR_2->next->prev = VAR_2->prev;
  }

  if (VAR_2->key != ((void*)0)) {
    FUNC_1 (VAR_2->key, VAR_2->key_len + 1);
  }
  if (VAR_2->filename != ((void*)0)) {
    FUNC_1 (VAR_2->filename, FUNC_0 (VAR_2->filename) + 1);
  }
  if (VAR_2->filedata != ((void*)0)) {
    FUNC_1 (VAR_2->filedata, VAR_2->filedata_len);
  }
  FUNC_2 (VAR_2, sizeof (struct gather_data));

  VAR_0--;
}

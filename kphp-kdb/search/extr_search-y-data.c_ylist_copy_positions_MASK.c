
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ylist_decoder_stack_entry {int num; struct list_int_entry* positions_head; } ;
struct ylist_decoder {int capacity; int* positions; TYPE_1__* H; } ;
struct list_int_entry {int value; struct list_int_entry* next; } ;
struct TYPE_2__ {int* positions1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (struct ylist_decoder *VAR_1, struct ylist_decoder_stack_entry *VAR_2) {
  if (FUNC_0 (VAR_1->capacity < VAR_2->num + 1)) {
    int VAR_3 = VAR_1->capacity;
    while (VAR_3 < VAR_2->num + 1) {
      VAR_3 *= 2;
    }

    VAR_1->H->positions1 = VAR_1->positions = FUNC_1 (4 * VAR_3);
    VAR_1->capacity = VAR_3;
    if (VAR_0 < VAR_3) {
      VAR_0 = VAR_3;
    }
  }
  VAR_1->positions[0] = VAR_2->num;
  int VAR_4;
  struct list_int_entry *VAR_5;
  for (VAR_4 = 0, VAR_5 = VAR_2->positions_head; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
    VAR_1->positions[++VAR_4] = VAR_5->value;
  }
}

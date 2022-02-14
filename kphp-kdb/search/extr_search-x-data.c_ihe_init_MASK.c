
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct item {int dummy; } ;
struct TYPE_12__ {scalar_t__ doc_id; } ;
struct TYPE_11__ {int* Bt; int sp; TYPE_4__** TS; int cur_freq_text0; int cur_freq_title0; int cur0; TYPE_3__ Decoder; struct item* cur1; int word; } ;
typedef TYPE_1__ iheap_en_t ;
typedef int hash_t ;
struct TYPE_13__ {int freq_text; int freq_title; int item; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6 (iheap_en_t *VAR_2, hash_t VAR_3) {
  int VAR_4, VAR_5;
  FUNC_5 (VAR_2, 0, sizeof (*VAR_2));
  VAR_2->word = VAR_3;
  VAR_2->TS[0] = VAR_1;
  VAR_2->Bt[0] = -1;

  if (FUNC_4 (&VAR_2->Decoder, VAR_3)) {
    if (FUNC_0 (&VAR_2->Decoder) >= 0) {
      VAR_2->cur1 = (struct item *) (VAR_0 + VAR_2->Decoder.doc_id);
    }
  }

  if (!VAR_1) {
    VAR_4 = 1;
  } else {
    VAR_4 = FUNC_1 (VAR_2);
    VAR_5 = VAR_2->sp;

    if (VAR_4 < 0 && VAR_2->Bt[VAR_5] >= 0) {
      VAR_5 = VAR_2->Bt[VAR_5];
      VAR_4 = FUNC_3 (VAR_2->TS[VAR_5], VAR_2);
    }
  }

  if (VAR_4 != 0) {
    VAR_2->sp = -1;
    VAR_2->cur0 = 0;
    return FUNC_2 (VAR_2);
  }

  VAR_2->sp = VAR_5;
  VAR_2->cur0 = VAR_2->TS[VAR_5]->item;

  VAR_2->cur_freq_title0 = VAR_2->TS[VAR_5]->freq_title;
  VAR_2->cur_freq_text0 = VAR_2->TS[VAR_5]->freq_text;

  return FUNC_2 (VAR_2);
}

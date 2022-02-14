
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ylist_decoder {scalar_t__ k; } ;
struct list_decoder {scalar_t__ k; int (* decode_int ) (struct list_decoder*) ;} ;
struct index_item {int extra; } ;
struct TYPE_7__ {long long item_id; } ;
typedef TYPE_2__ item_t ;
struct TYPE_6__ {struct list_decoder* tag_dec; struct ylist_decoder* term_dec; } ;
struct TYPE_8__ {scalar_t__ remaining; scalar_t__ len; int doc_id; TYPE_1__ dec; scalar_t__ term; } ;
typedef TYPE_3__ ilist_decoder_t ;
struct TYPE_9__ {TYPE_2__* cur1; TYPE_3__ Decoder; } ;
typedef TYPE_4__ iheap_en_t ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 int FUNC_0 (struct list_decoder*,long long) ;
 int FUNC_1 (struct list_decoder*) ;
 int FUNC_2 (struct ylist_decoder*) ;
 int FUNC_3 (struct ylist_decoder*,long long) ;

__attribute__((used)) static void FUNC_4 (iheap_en_t *VAR_2, long long VAR_3) {
  if (VAR_2->cur1->item_id >= VAR_3) {
    return;
  }
  ilist_decoder_t *VAR_4 = &VAR_2->Decoder;
  if (VAR_4->term) {
    struct ylist_decoder *VAR_5 = VAR_4->dec.term_dec;
    VAR_4->doc_id = FUNC_3 (VAR_5, VAR_3);
    if (VAR_4->doc_id < 0) {
      VAR_4->remaining = 0;
      VAR_2->cur1 = 0;
      return;
    }
    VAR_4->remaining = VAR_4->len - VAR_5->k;
    for (;;) {
      struct index_item *VAR_6 = VAR_1 + VAR_4->doc_id;
      if (!(VAR_6->extra & VAR_0)) {
        VAR_2->cur1 = (item_t *) VAR_6;
        return;
      }
      if (VAR_4->remaining <= 0) {
        VAR_4->remaining = 0;
        VAR_2->cur1 = 0;
        return;
      }
      VAR_4->remaining--;
      VAR_4->doc_id = FUNC_2 (VAR_5);
    }
  } else {
    struct list_decoder *VAR_7 = VAR_4->dec.tag_dec;
    VAR_4->doc_id = FUNC_0 (VAR_7, VAR_3);
    if (VAR_4->doc_id < 0) {
      VAR_4->remaining = 0;
      VAR_2->cur1 = 0;
      return;
    }
    VAR_4->remaining = VAR_4->len - VAR_7->k;
    for (;;) {
      struct index_item *VAR_8 = VAR_1 + VAR_4->doc_id;
      if (!(VAR_8->extra & VAR_0)) {
        VAR_2->cur1 = (item_t *) VAR_8;
        return;
      }
      if (VAR_4->remaining <= 0) {
        VAR_4->remaining = 0;
        VAR_2->cur1 = 0;
        return;
      }
      VAR_4->remaining--;
      VAR_4->doc_id = VAR_7->decode_int (VAR_7);
    }
  }
}

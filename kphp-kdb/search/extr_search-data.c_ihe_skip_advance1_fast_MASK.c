
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct search_list_decoder {scalar_t__ remaining; scalar_t__ len; TYPE_4__* dec; } ;
struct index_item {int extra; int item_id; } ;
struct TYPE_8__ {long long item_id; } ;
typedef TYPE_1__ item_t ;
struct TYPE_9__ {scalar_t__ doc_id; struct search_list_decoder dec; int (* adv_ilist_subseq ) (TYPE_2__*,int) ;int item_id; } ;
typedef TYPE_2__ ilist_decoder_t ;
struct TYPE_10__ {TYPE_1__* cur1; int cur_y1; TYPE_2__ Decoder; } ;
typedef TYPE_3__ iheap_en_t ;
struct TYPE_11__ {scalar_t__ k; int (* decode_int ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,long long) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3 (iheap_en_t *VAR_2, long long VAR_3) {
  if (VAR_2->cur1->item_id >= VAR_3) {
    return;
  }
  struct search_list_decoder *VAR_4 = &VAR_2->Decoder.dec;
  ilist_decoder_t *VAR_5 = &VAR_2->Decoder;
  VAR_5->doc_id = FUNC_0 (VAR_4->dec, VAR_3);
  if (VAR_5->doc_id < 0) {
    VAR_4->remaining = 0;
    VAR_2->cur1 = 0;

    return;
  }
  VAR_4->remaining = VAR_4->len - VAR_4->dec->k;
  for (;;) {
    struct index_item *VAR_6 = VAR_1 + VAR_5->doc_id;
    if (!(VAR_6->extra & VAR_0)) {
      VAR_2->cur1 = (item_t *) VAR_6;
      VAR_5->item_id = VAR_6->item_id;
      VAR_2->cur_y1 = VAR_5->adv_ilist_subseq (VAR_5, VAR_5->dec.len - 1 - VAR_5->dec.remaining);
      return;
    }
    if (VAR_4->remaining <= 0) {
      VAR_4->remaining = 0;
      VAR_2->cur1 = 0;

      return;
    }
    VAR_4->remaining--;
    VAR_5->doc_id = VAR_4->dec->decode_int (VAR_4->dec);
  }
}

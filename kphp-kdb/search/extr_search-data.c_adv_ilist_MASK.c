
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct index_item {int extra; int item_id; } ;
struct TYPE_6__ {scalar_t__ remaining; int len; TYPE_4__* dec; } ;
struct TYPE_7__ {int doc_id; TYPE_1__ dec; int item_id; int (* adv_ilist_subseq ) (TYPE_2__*,int) ;int field; } ;
typedef TYPE_2__ ilist_decoder_t ;
struct TYPE_8__ {int (* decode_int ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

int FUNC_3 (ilist_decoder_t *VAR_3) {
  struct index_item *VAR_4;
  while (VAR_3->dec.remaining > 0) {
    VAR_3->dec.remaining--;
    VAR_3->doc_id = VAR_3->dec.dec->decode_int (VAR_3->dec.dec);
    FUNC_0 (VAR_3->doc_id >= 0 && VAR_3->doc_id < VAR_2);
    VAR_4 = VAR_1 + VAR_3->doc_id;
    if (!(VAR_4->extra & VAR_0)) {
      VAR_3->item_id = VAR_4->item_id;
      VAR_3->field = VAR_3->adv_ilist_subseq (VAR_3, VAR_3->dec.len - 1 - VAR_3->dec.remaining);
      return VAR_3->doc_id;
    }
  }
  if (!VAR_3->dec.remaining) {
    VAR_3->doc_id = -1;
    VAR_3->item_id = 0;
    VAR_3->dec.remaining--;
    return -1;
  }
  return -1;
}

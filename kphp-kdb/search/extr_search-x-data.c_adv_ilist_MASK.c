
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_decoder {int (* decode_int ) (struct list_decoder*) ;int br; } ;
struct index_item {int extra; int item_id; } ;
struct TYPE_4__ {scalar_t__ remaining; struct list_decoder* dec; } ;
struct TYPE_5__ {int doc_id; unsigned int freq_title; unsigned int freq_text; TYPE_1__ dec; int item_id; } ;
typedef TYPE_2__ ilist_decoder_t ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct list_decoder*) ;

__attribute__((used)) static int FUNC_3 (ilist_decoder_t *VAR_3) {
  struct index_item *VAR_4;
  while (VAR_3->dec.remaining > 0) {
    struct list_decoder *VAR_5 = VAR_3->dec.dec;
    VAR_3->dec.remaining--;
    VAR_3->doc_id = VAR_5->decode_int (VAR_3->dec.dec);
    FUNC_0 (VAR_3->doc_id >= 0 && VAR_3->doc_id < VAR_2);
    unsigned VAR_6 = FUNC_1 (&VAR_5->br) - 1;
    unsigned VAR_7 = FUNC_1 (&VAR_5->br) - 1;
    VAR_4 = VAR_1 + VAR_3->doc_id;
    if (!(VAR_4->extra & VAR_0)) {
      if (!VAR_6) { VAR_7++; }
      VAR_3->item_id = VAR_4->item_id;
      VAR_3->freq_title = VAR_6;
      VAR_3->freq_text = VAR_7;
      return VAR_3->doc_id;
    }
  }
  if (!VAR_3->dec.remaining) {
    VAR_3->doc_id = -1;
    VAR_3->item_id = 0;
    VAR_3->freq_title = VAR_3->freq_text = 0;
    VAR_3->dec.remaining--;
    return -1;
  }
  return -1;
}

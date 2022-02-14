
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ item_id; } ;
typedef TYPE_2__ item_t ;
struct TYPE_5__ {scalar_t__ freq_text; scalar_t__ freq_title; } ;
struct TYPE_7__ {scalar_t__ item_id; TYPE_1__ Decoder; scalar_t__ cur_freq_text; scalar_t__ cur_freq_title; TYPE_2__* cur; scalar_t__ cur_freq_text0; scalar_t__ cur_freq_title0; TYPE_2__* cur1; TYPE_2__* cur0; } ;
typedef TYPE_3__ iheap_en_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 (iheap_en_t *VAR_1) {
  item_t *VAR_2 = VAR_1->cur0, *VAR_3 = VAR_1->cur1;
  if (FUNC_0(!VAR_2 && !VAR_3)) {
    VAR_1->item_id = VAR_0;
    VAR_1->cur = 0;
    VAR_1->cur_freq_title = VAR_1->cur_freq_text = 0;
    return 0;
  }
  if (!VAR_3) {
    VAR_1->cur = VAR_2;
    VAR_1->cur_freq_title = VAR_1->cur_freq_title0;
    VAR_1->cur_freq_text = VAR_1->cur_freq_text0;
    VAR_1->item_id = VAR_2->item_id;
  } else if (!VAR_2) {
    VAR_1->cur = VAR_3;
    VAR_1->cur_freq_title = VAR_1->Decoder.freq_title;
    VAR_1->cur_freq_text = VAR_1->Decoder.freq_text;
    VAR_1->item_id = VAR_3->item_id;
  } else if (VAR_2->item_id < VAR_3->item_id) {
    VAR_1->cur = VAR_2;
    VAR_1->cur_freq_title = VAR_1->cur_freq_title0;
    VAR_1->cur_freq_text = VAR_1->cur_freq_text0;
    VAR_1->item_id = VAR_2->item_id;
  } else {
    VAR_1->cur = VAR_3;
    VAR_1->cur_freq_title = VAR_1->Decoder.freq_title;
    VAR_1->cur_freq_text = VAR_1->Decoder.freq_text;
    VAR_1->item_id = VAR_3->item_id;
  }
  return 1;
}

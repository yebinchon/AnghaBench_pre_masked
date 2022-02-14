
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct index_item {int extra; } ;
struct TYPE_5__ {TYPE_3__* tag_dec; int term_dec; } ;
struct TYPE_6__ {scalar_t__ remaining; int doc_id; TYPE_1__ dec; scalar_t__ term; } ;
typedef TYPE_2__ ilist_decoder_t ;
struct TYPE_7__ {int (* decode_int ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 struct index_item* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (ilist_decoder_t *VAR_3) {
  while (VAR_3->remaining > 0) {
    VAR_3->remaining--;
    VAR_3->doc_id = VAR_3->term ? FUNC_2 (VAR_3->dec.term_dec) : VAR_3->dec.tag_dec->decode_int (VAR_3->dec.tag_dec);
    FUNC_0 (VAR_3->doc_id >= 0 && VAR_3->doc_id < VAR_2);
    struct index_item *VAR_4 = VAR_1 + VAR_3->doc_id;
    if (!(VAR_4->extra & VAR_0)) {
      return VAR_3->doc_id;
    }
  }
  return VAR_3->doc_id = -1;
}

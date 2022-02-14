
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct search_list_decoder {scalar_t__ remaining; TYPE_2__* dec; } ;
struct TYPE_4__ {int last_subseq; struct search_list_decoder dec_subseq; } ;
typedef TYPE_1__ ilist_decoder_t ;
struct TYPE_5__ {int (* decode_int ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1 (ilist_decoder_t *VAR_0, int VAR_1) {
  struct search_list_decoder *VAR_2 = &VAR_0->dec_subseq;
  while (VAR_0->last_subseq < VAR_1) {
    if (VAR_2->remaining <= 0) {
      VAR_0->last_subseq = 0x7fffffff;
      return 0;
    }
    VAR_2->remaining--;
    VAR_0->last_subseq = VAR_2->dec->decode_int (VAR_2->dec);
  }
  return (VAR_0->last_subseq == VAR_1) ? 1 : 0;
}

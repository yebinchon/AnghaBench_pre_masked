
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dec; } ;
struct TYPE_5__ {int last_subseq; TYPE_1__ dec_subseq; } ;
typedef TYPE_2__ ilist_decoder_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1 (ilist_decoder_t *VAR_0, int VAR_1) {
  VAR_0->last_subseq = FUNC_0 (VAR_0->dec_subseq.dec, VAR_1);
  return (VAR_0->last_subseq == VAR_1) ? 1 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int short_descr; unsigned int short_len; int eop; } ;
struct pdma_descr {TYPE_2__ shrt; TYPE_1__ ctrl; } ;
struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_descriptors {scalar_t__ out_cnt; struct pdma_descr* out; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,void*,unsigned int) ;
 int FUNC_2 (struct pdma_descr*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct artpec6_crypto_req_common *VAR_3,
         void *VAR_4, unsigned int VAR_5, bool VAR_6)
{
 struct artpec6_crypto_dma_descriptors *VAR_7 = VAR_3->dma;
 struct pdma_descr *VAR_8;

 if (VAR_7->out_cnt >= VAR_2 ||
     FUNC_0()) {
  FUNC_3("No free OUT DMA descriptors available!\n");
  return -VAR_1;
 } else if (VAR_5 > 7 || VAR_5 < 1) {
  return -VAR_0;
 }
 VAR_8 = &VAR_7->out[VAR_7->out_cnt++];
 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->ctrl.short_descr = 1;
 VAR_8->ctrl.short_len = VAR_5;
 VAR_8->ctrl.eop = VAR_6;
 FUNC_1(VAR_8->shrt.data, VAR_4, VAR_5);
 return 0;
}

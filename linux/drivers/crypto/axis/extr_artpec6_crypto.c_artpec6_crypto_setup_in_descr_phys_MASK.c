
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int len; int buf; } ;
struct TYPE_3__ {int intr; } ;
struct pdma_descr {TYPE_2__ data; TYPE_1__ ctrl; } ;
struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_descriptors {scalar_t__ in_cnt; struct pdma_descr* in; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pdma_descr*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct artpec6_crypto_req_common *VAR_2,
          dma_addr_t VAR_3, unsigned int VAR_4, bool VAR_5)
{
 struct artpec6_crypto_dma_descriptors *VAR_6 = VAR_2->dma;
 struct pdma_descr *VAR_7;

 if (VAR_6->in_cnt >= VAR_1 ||
     FUNC_0()) {
  FUNC_2("No free IN DMA descriptors available!\n");
  return -VAR_0;
 }
 VAR_7 = &VAR_6->in[VAR_6->in_cnt++];
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->ctrl.intr = VAR_5;
 VAR_7->data.len = VAR_4;
 VAR_7->data.buf = VAR_3;
 return 0;
}

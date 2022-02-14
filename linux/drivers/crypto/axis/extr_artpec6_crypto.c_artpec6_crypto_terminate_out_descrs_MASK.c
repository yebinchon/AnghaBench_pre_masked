
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int eop; } ;
struct pdma_descr {TYPE_1__ ctrl; } ;
struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_descriptors {int out_cnt; struct pdma_descr* out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct artpec6_crypto_req_common *VAR_3)
{
 struct artpec6_crypto_dma_descriptors *VAR_4 = VAR_3->dma;
 struct pdma_descr *VAR_5;

 if (!VAR_4->out_cnt || VAR_4->out_cnt > VAR_2) {
  FUNC_0("%s: OUT descriptor list is %s\n",
   VAR_1, VAR_4->out_cnt ? "empty" : "full");
  return -VAR_0;

 }

 VAR_5 = &VAR_4->out[VAR_4->out_cnt-1];
 VAR_5->ctrl.eop = 1;

 return 0;
}

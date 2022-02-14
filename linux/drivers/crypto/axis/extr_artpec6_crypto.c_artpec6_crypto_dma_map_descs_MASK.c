
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_descriptors {int in_cnt; int out_cnt; int stat_dma_addr; scalar_t__* stat; int out_dma_addr; scalar_t__* out; int in_dma_addr; scalar_t__* in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct artpec6_crypto_req_common*,scalar_t__*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct artpec6_crypto_req_common *VAR_2)
{
 struct artpec6_crypto_dma_descriptors *VAR_3 = VAR_2->dma;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->in,
    sizeof(VAR_3->in[0]) * VAR_3->in_cnt,
    VAR_1, &VAR_3->in_dma_addr);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3->out,
    sizeof(VAR_3->out[0]) * VAR_3->out_cnt,
    VAR_1, &VAR_3->out_dma_addr);
 if (VAR_4)
  return VAR_4;


 VAR_3->stat[VAR_3->in_cnt - 1] = 0;





 return FUNC_0(VAR_2,
    VAR_3->stat,
    sizeof(VAR_3->stat[0]) * VAR_3->in_cnt,
    VAR_0,
    &VAR_3->stat_dma_addr);
}

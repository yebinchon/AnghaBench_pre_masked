
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_req_common {struct artpec6_crypto_dma_descriptors* dma; } ;
struct artpec6_crypto_dma_descriptors {int bounce_buffers; scalar_t__ map_count; scalar_t__ in_cnt; scalar_t__ out_cnt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct artpec6_crypto_req_common *VAR_0)
{
 struct artpec6_crypto_dma_descriptors *VAR_1 = VAR_0->dma;

 VAR_1->out_cnt = 0;
 VAR_1->in_cnt = 0;
 VAR_1->map_count = 0;
 FUNC_0(&VAR_1->bounce_buffers);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int dst; int src; int cryptlen; } ;
struct mv_cesa_skcipher_dma_iter {int dst; int src; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct mv_cesa_skcipher_dma_iter *VAR_2,
          struct skcipher_request *VAR_3)
{
 FUNC_0(&VAR_2->base, VAR_3->cryptlen);
 FUNC_1(&VAR_2->src, VAR_3->src, VAR_1);
 FUNC_1(&VAR_2->dst, VAR_3->dst, VAR_0);
}

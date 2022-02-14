
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_ahash_req {unsigned int cache_ptr; int last_req; } ;
struct TYPE_2__ {unsigned int op_offset; } ;
struct mv_cesa_ahash_dma_iter {TYPE_1__ src; int base; } ;
struct ahash_request {unsigned int nbytes; int src; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct mv_cesa_ahash_dma_iter *VAR_2,
       struct ahash_request *VAR_3)
{
 struct mv_cesa_ahash_req *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5 = VAR_3->nbytes + VAR_4->cache_ptr;

 if (!VAR_4->last_req)
  VAR_5 &= ~VAR_0;

 FUNC_1(&VAR_2->base, VAR_5);
 FUNC_2(&VAR_2->src, VAR_3->src, VAR_1);
 VAR_2->src.op_offset = VAR_4->cache_ptr;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct caam_hash_state {scalar_t__ buf_dma; } ;
struct ahash_request {int src; } ;
struct ahash_edesc {scalar_t__ qm_sg_bytes; scalar_t__ qm_sg_dma; scalar_t__ src_nents; } ;


 int VAR_0 ;
 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 scalar_t__* FUNC_1 (struct caam_hash_state*) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct device*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_4(struct device *VAR_1, struct ahash_edesc *VAR_2,
          struct ahash_request *VAR_3)
{
 struct caam_hash_state *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->src_nents)
  FUNC_2(VAR_1, VAR_3->src, VAR_2->src_nents, VAR_0);

 if (VAR_2->qm_sg_bytes)
  FUNC_3(VAR_1, VAR_2->qm_sg_dma, VAR_2->qm_sg_bytes,
     VAR_0);

 if (VAR_4->buf_dma) {
  FUNC_3(VAR_1, VAR_4->buf_dma, *FUNC_1(VAR_4),
     VAR_0);
  VAR_4->buf_dma = 0;
 }
}

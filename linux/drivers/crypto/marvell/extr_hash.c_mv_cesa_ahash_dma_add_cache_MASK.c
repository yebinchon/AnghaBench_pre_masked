
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_tdma_chain {int dummy; } ;
struct mv_cesa_ahash_dma_req {int cache_dma; int cache; } ;
struct TYPE_2__ {struct mv_cesa_ahash_dma_req dma; } ;
struct mv_cesa_ahash_req {int cache_ptr; int cache; TYPE_1__ req; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mv_cesa_ahash_dma_req*,int ) ;
 int FUNC_2 (struct mv_cesa_tdma_chain*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct mv_cesa_tdma_chain *VAR_2,
       struct mv_cesa_ahash_req *VAR_3,
       gfp_t VAR_4)
{
 struct mv_cesa_ahash_dma_req *VAR_5 = &VAR_3->req.dma;
 int VAR_6;

 if (!VAR_3->cache_ptr)
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_5->cache, VAR_3->cache, VAR_3->cache_ptr);

 return FUNC_2(VAR_2,
          VAR_0,
          VAR_5->cache_dma,
          VAR_3->cache_ptr,
          VAR_1,
          VAR_4);
}

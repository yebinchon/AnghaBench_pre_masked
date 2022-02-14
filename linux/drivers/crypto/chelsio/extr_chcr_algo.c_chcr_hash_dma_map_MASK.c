
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int is_sg_map; } ;
struct chcr_ahash_req_ctx {TYPE_1__ hctx_wr; } ;
struct ahash_request {int src; int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct chcr_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct device *VAR_2,
        struct ahash_request *VAR_3)
{
 struct chcr_ahash_req_ctx *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;

 if (!VAR_3->nbytes)
  return 0;
 VAR_5 = FUNC_1(VAR_2, VAR_3->src, FUNC_2(VAR_3->src),
      VAR_0);
 if (!VAR_5)
  return -VAR_1;
 VAR_4->hctx_wr.is_sg_map = 1;
 return 0;
}

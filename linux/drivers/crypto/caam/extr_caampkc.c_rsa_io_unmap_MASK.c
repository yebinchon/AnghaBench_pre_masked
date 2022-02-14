
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_edesc {scalar_t__ sec4_sg_bytes; int sec4_sg_dma; int src_nents; int dst_nents; } ;
struct device {int dummy; } ;
struct caam_rsa_req_ctx {int fixup_src; } ;
struct akcipher_request {int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct caam_rsa_req_ctx* FUNC_0 (struct akcipher_request*) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, struct rsa_edesc *VAR_3,
    struct akcipher_request *VAR_4)
{
 struct caam_rsa_req_ctx *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_2, VAR_4->dst, VAR_3->dst_nents, VAR_0);
 FUNC_1(VAR_2, VAR_5->fixup_src, VAR_3->src_nents, VAR_1);

 if (VAR_3->sec4_sg_bytes)
  FUNC_2(VAR_2, VAR_3->sec4_sg_dma, VAR_3->sec4_sg_bytes,
     VAR_1);
}

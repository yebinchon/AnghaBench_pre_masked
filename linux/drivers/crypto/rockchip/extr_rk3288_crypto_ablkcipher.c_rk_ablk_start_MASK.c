
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int aligned; int lock; void* dst_nents; int sg_dst; void* src_nents; int first; int sg_src; int total; int left_bytes; int async_req; } ;
struct ablkcipher_request {int dst; int src; int nbytes; } ;


 struct ablkcipher_request* FUNC_0 (int ) ;
 int FUNC_1 (struct rk_crypto_info*) ;
 int FUNC_2 (struct rk_crypto_info*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct rk_crypto_info *VAR_0)
{
 struct ablkcipher_request *VAR_1 =
  FUNC_0(VAR_0->async_req);
 unsigned long VAR_2;
 int VAR_3 = 0;

 VAR_0->left_bytes = VAR_1->nbytes;
 VAR_0->total = VAR_1->nbytes;
 VAR_0->sg_src = VAR_1->src;
 VAR_0->first = VAR_1->src;
 VAR_0->src_nents = FUNC_3(VAR_1->src);
 VAR_0->sg_dst = VAR_1->dst;
 VAR_0->dst_nents = FUNC_3(VAR_1->dst);
 VAR_0->aligned = 1;

 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_0);
 FUNC_5(&VAR_0->lock, VAR_2);
 return VAR_3;
}

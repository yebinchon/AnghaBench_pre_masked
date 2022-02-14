
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_crypto_info {int align_size; int src_nents; int first; int sg_src; int * sg_dst; scalar_t__ aligned; int left_bytes; int total; int async_req; } ;
struct rk_ahash_rctx {scalar_t__ mode; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int src; int nbytes; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 struct ahash_request* FUNC_0 (int ) ;
 struct rk_ahash_rctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct rk_crypto_info*) ;
 int FUNC_5 (struct rk_crypto_info*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rk_crypto_info *VAR_4)
{
 struct ahash_request *VAR_5 = FUNC_0(VAR_4->async_req);
 struct crypto_ahash *VAR_6;
 struct rk_ahash_rctx *VAR_7;

 VAR_4->total = VAR_5->nbytes;
 VAR_4->left_bytes = VAR_5->nbytes;
 VAR_4->aligned = 0;
 VAR_4->align_size = 4;
 VAR_4->sg_dst = ((void*)0);
 VAR_4->sg_src = VAR_5->src;
 VAR_4->first = VAR_5->src;
 VAR_4->src_nents = FUNC_6(VAR_5->src);
 VAR_7 = FUNC_1(VAR_5);
 VAR_7->mode = 0;

 VAR_6 = FUNC_3(VAR_5);
 switch (FUNC_2(VAR_6)) {
 case 129:
  VAR_7->mode = VAR_2;
  break;
 case 128:
  VAR_7->mode = VAR_3;
  break;
 case 130:
  VAR_7->mode = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_4);
 return FUNC_5(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_ahash_req_ctx {int partial_hash; int reqlen; int reqbfr; int bfr1; int data_len; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct chcr_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct chcr_ahash_req_ctx*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_1, void *VAR_2)
{
 struct chcr_ahash_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct chcr_ahash_req_ctx *VAR_4 = VAR_2;

 VAR_4->reqlen = VAR_3->reqlen;
 VAR_4->data_len = VAR_3->data_len;
 FUNC_2(VAR_4->bfr1, VAR_3->reqbfr, VAR_3->reqlen);
 FUNC_2(VAR_4->partial_hash, VAR_3->partial_hash,
        VAR_0);
 FUNC_1(VAR_4);
 return 0;
}

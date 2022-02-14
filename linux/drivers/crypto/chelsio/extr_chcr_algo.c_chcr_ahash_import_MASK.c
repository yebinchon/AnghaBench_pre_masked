
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_ahash_req_ctx {int partial_hash; int bfr1; int bfr2; int skbfr; int reqbfr; int data_len; int reqlen; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct chcr_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct chcr_ahash_req_ctx*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_2, const void *VAR_3)
{
 struct chcr_ahash_req_ctx *VAR_4 = FUNC_0(VAR_2);
 struct chcr_ahash_req_ctx *VAR_5 = (struct chcr_ahash_req_ctx *)VAR_3;

 VAR_4->reqlen = VAR_5->reqlen;
 VAR_4->data_len = VAR_5->data_len;
 VAR_4->reqbfr = VAR_4->bfr1;
 VAR_4->skbfr = VAR_4->bfr2;
 FUNC_2(VAR_4->bfr1, VAR_5->bfr1, VAR_0);
 FUNC_2(VAR_4->partial_hash, VAR_5->partial_hash,
        VAR_1);
 FUNC_1(VAR_4);
 return 0;
}

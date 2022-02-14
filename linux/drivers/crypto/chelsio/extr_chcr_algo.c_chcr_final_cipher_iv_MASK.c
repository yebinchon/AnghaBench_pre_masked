
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct cpl_fw6_pld {int * data; } ;
struct chcr_blkcipher_req_ctx {int op; int processed; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct chcr_blkcipher_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct ablkcipher_request*,int *,int) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_4,
       struct cpl_fw6_pld *VAR_5, u8 *VAR_6)
{
 struct crypto_ablkcipher *VAR_7 = FUNC_3(VAR_4);
 struct chcr_blkcipher_req_ctx *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_6(FUNC_4(VAR_7));
 int VAR_10 = 0;

 if (VAR_9 == VAR_2)
  FUNC_5(VAR_6, VAR_4->info, FUNC_0(VAR_8->processed,
             VAR_0));
 else if (VAR_9 == VAR_3)
  VAR_10 = FUNC_2(VAR_4, VAR_6, 1);
 else if (VAR_9 == VAR_1) {

  if (!VAR_8->op)
   FUNC_7(VAR_6, &VAR_5->data[2], VAR_0);

 }
 return VAR_10;

}

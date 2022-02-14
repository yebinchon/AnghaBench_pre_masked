
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct cpl_fw6_pld {int * data; } ;
struct chcr_blkcipher_req_ctx {int processed; scalar_t__ op; scalar_t__ iv; } ;
struct ablkcipher_request {int * info; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct chcr_blkcipher_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct ablkcipher_request*,int *,int ) ;
 int FUNC_2 (int) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_7,
       struct cpl_fw6_pld *VAR_8, u8 *VAR_9)
{
 struct crypto_ablkcipher *VAR_10 = FUNC_3(VAR_7);
 struct chcr_blkcipher_req_ctx *VAR_11 = FUNC_0(VAR_7);
 int VAR_12 = FUNC_6(FUNC_4(VAR_10));
 int VAR_13 = 0;

 if (VAR_12 == VAR_2)
  FUNC_5(VAR_9, VAR_7->info, (VAR_11->processed /
      VAR_0));
 else if (VAR_12 == VAR_3)
  *(__be32 *)(VAR_11->iv + VAR_6 +
   VAR_5) = FUNC_2((VAR_11->processed /
      VAR_0) + 1);
 else if (VAR_12 == VAR_4)
  VAR_13 = FUNC_1(VAR_7, VAR_9, 0);
 else if (VAR_12 == VAR_1) {
  if (VAR_11->op)

   FUNC_7(VAR_9, VAR_7->info, VAR_0);
  else
   FUNC_7(VAR_9, &VAR_8->data[2], VAR_0);
 }

 return VAR_13;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int * nonce; } ;
struct TYPE_5__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_aes_req_ctx {int * rfc3686_iv; int * rfc3686_info; } ;
struct TYPE_6__ {int tfm; } ;
struct ablkcipher_request {int * info; TYPE_3__ base; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccp_aes_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (struct ablkcipher_request*,int) ;
 int FUNC_2 (int) ;
 struct ccp_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ablkcipher_request *VAR_2, bool VAR_3)
{
 struct ccp_ctx *VAR_4 = FUNC_3(VAR_2->base.tfm);
 struct ccp_aes_req_ctx *VAR_5 = FUNC_0(VAR_2);
 u8 *VAR_6;


 VAR_6 = VAR_5->rfc3686_iv;
 FUNC_4(VAR_6, VAR_4->u.aes.nonce, VAR_1);

 VAR_6 += VAR_1;
 FUNC_4(VAR_6, VAR_2->info, VAR_0);

 VAR_6 += VAR_0;
 *(__be32 *)VAR_6 = FUNC_2(1);


 VAR_5->rfc3686_info = VAR_2->info;
 VAR_2->info = VAR_5->rfc3686_iv;

 return FUNC_1(VAR_2, VAR_3);
}

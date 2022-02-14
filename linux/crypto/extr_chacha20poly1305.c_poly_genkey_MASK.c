
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct chacha_req {int req; int iv; int src; } ;
struct TYPE_2__ {struct chacha_req chacha; } ;
struct chachapoly_req_ctx {int assoclen; int flags; int key; TYPE_1__ u; } ;
struct chachapoly_ctx {int chacha; } ;
struct aead_request {int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct chachapoly_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int ,struct aead_request*,int ) ;
 struct chachapoly_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *,int ,int ,struct aead_request*) ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_4(VAR_3);
 struct chachapoly_ctx *VAR_5 = FUNC_2(VAR_4);
 struct chachapoly_req_ctx *VAR_6 = FUNC_0(VAR_3);
 struct chacha_req *VAR_7 = &VAR_6->u.chacha;
 int VAR_8;

 VAR_6->assoclen = VAR_3->assoclen;

 if (FUNC_3(VAR_4) == 8) {
  if (VAR_6->assoclen < 8)
   return -VAR_0;
  VAR_6->assoclen -= 8;
 }

 FUNC_6(VAR_6->key, 0, sizeof(VAR_6->key));
 FUNC_8(VAR_7->src, VAR_6->key, sizeof(VAR_6->key));

 FUNC_1(VAR_7->iv, VAR_3, 0);

 FUNC_9(&VAR_7->req, VAR_6->flags,
          VAR_2, VAR_3);
 FUNC_11(&VAR_7->req, VAR_5->chacha);
 FUNC_10(&VAR_7->req, VAR_7->src, VAR_7->src,
       VAR_1, VAR_7->iv);

 VAR_8 = FUNC_5(&VAR_7->req);
 if (VAR_8)
  return VAR_8;

 return FUNC_7(VAR_3);
}

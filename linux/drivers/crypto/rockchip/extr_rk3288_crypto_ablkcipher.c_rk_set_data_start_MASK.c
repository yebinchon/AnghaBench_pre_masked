
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rk_crypto_info {int total; int (* load_data ) (struct rk_crypto_info*,TYPE_1__*,int ) ;int sg_dst; TYPE_1__* sg_src; int src_nents; int first; int async_req; } ;
struct rk_cipher_ctx {int mode; int iv; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int info; } ;
struct TYPE_3__ {int offset; int length; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct rk_cipher_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (struct rk_crypto_info*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct rk_crypto_info*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_10(struct rk_crypto_info *VAR_1)
{
 int VAR_2;
 struct ablkcipher_request *VAR_3 =
  FUNC_0(VAR_1->async_req);
 struct crypto_ablkcipher *VAR_4 = FUNC_3(VAR_3);
 struct rk_cipher_ctx *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6 = FUNC_2(VAR_4);
 u8 *VAR_7 = FUNC_6(FUNC_7(VAR_1->sg_src)) +
  VAR_1->sg_src->offset + VAR_1->sg_src->length - VAR_6;




 if (VAR_5->mode & VAR_0) {
  FUNC_5(VAR_5->iv, VAR_7, VAR_6);
  FUNC_8(VAR_1->first, VAR_1->src_nents, VAR_3->info,
       VAR_6, VAR_1->total - VAR_6);
 }

 VAR_2 = VAR_1->load_data(VAR_1, VAR_1->sg_src, VAR_1->sg_dst);
 if (!VAR_2)
  FUNC_4(VAR_1);
 return VAR_2;
}

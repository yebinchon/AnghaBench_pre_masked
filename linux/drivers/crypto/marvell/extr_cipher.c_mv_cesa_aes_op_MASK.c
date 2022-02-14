
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int tfm; } ;
struct skcipher_request {TYPE_1__ base; } ;
struct TYPE_6__ {int * key; } ;
struct TYPE_7__ {TYPE_2__ blkcipher; } ;
struct mv_cesa_op_ctx {TYPE_3__ ctx; } ;
struct TYPE_8__ {int key_length; int * key_enc; int * key_dec; } ;
struct mv_cesa_aes_ctx {TYPE_4__ aes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct mv_cesa_aes_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct mv_cesa_op_ctx*) ;
 int FUNC_3 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 int FUNC_4 (struct mv_cesa_op_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct skcipher_request *VAR_6,
     struct mv_cesa_op_ctx *VAR_7)
{
 struct mv_cesa_aes_ctx *VAR_8 = FUNC_1(VAR_6->base.tfm);
 int VAR_9;
 u32 *VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_3;

 if (FUNC_2(VAR_7) & VAR_5)
  VAR_10 = VAR_8->aes.key_dec;
 else
  VAR_10 = VAR_8->aes.key_enc;

 for (VAR_9 = 0; VAR_9 < VAR_8->aes.key_length / sizeof(u32); VAR_9++)
  VAR_7->ctx.blkcipher.key[VAR_9] = FUNC_0(VAR_10[VAR_9]);

 if (VAR_8->aes.key_length == 24)
  VAR_11 |= VAR_0;
 else if (VAR_8->aes.key_length == 32)
  VAR_11 |= VAR_1;

 FUNC_4(VAR_7, VAR_11,
         VAR_4 |
         VAR_2);

 return FUNC_3(VAR_6, VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_7__ {scalar_t__ mode; scalar_t__ key_len; int key_sg; int type; } ;
struct TYPE_8__ {TYPE_1__ aes; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct TYPE_9__ {scalar_t__ mode; int action; unsigned int iv_len; int dst; int aad_len; int src_len; int src; struct scatterlist* iv; scalar_t__ key_len; int * key; int type; int authsize; } ;
struct TYPE_10__ {TYPE_3__ aes; } ;
struct TYPE_11__ {TYPE_4__ u; int engine; int entry; } ;
struct ccp_aes_req_ctx {int* iv; TYPE_5__ cmd; struct scatterlist iv_sg; } ;
struct aead_request {int base; int dst; int assoclen; int cryptlen; int src; int iv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct ccp_aes_req_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (struct crypto_aead*) ;
 struct ccp_ctx* FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 (struct scatterlist*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_5, bool VAR_6)
{
 struct crypto_aead *VAR_7 = FUNC_5(VAR_5);
 struct ccp_ctx *VAR_8 = FUNC_4(VAR_7);
 struct ccp_aes_req_ctx *VAR_9 = FUNC_1(VAR_5);
 struct scatterlist *VAR_10 = ((void*)0);
 unsigned int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;

 if (!VAR_8->u.aes.key_len)
  return -VAR_3;

 if (VAR_8->u.aes.mode != VAR_1)
  return -VAR_3;

 if (!VAR_5->iv)
  return -VAR_3;
 FUNC_6(VAR_9->iv, VAR_5->iv, VAR_4);
 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  VAR_9->iv[VAR_12 + VAR_4] = 0;
 VAR_9->iv[VAR_0 - 1] = 1;


 VAR_10 = &VAR_9->iv_sg;
 VAR_11 = VAR_0;
 FUNC_8(VAR_10, VAR_9->iv, VAR_11);


 FUNC_7(&VAR_9->cmd, 0, sizeof(VAR_9->cmd));
 FUNC_0(&VAR_9->cmd.entry);
 VAR_9->cmd.engine = VAR_2;
 VAR_9->cmd.u.aes.authsize = FUNC_3(VAR_7);
 VAR_9->cmd.u.aes.type = VAR_8->u.aes.type;
 VAR_9->cmd.u.aes.mode = VAR_8->u.aes.mode;
 VAR_9->cmd.u.aes.action = VAR_6;
 VAR_9->cmd.u.aes.key = &VAR_8->u.aes.key_sg;
 VAR_9->cmd.u.aes.key_len = VAR_8->u.aes.key_len;
 VAR_9->cmd.u.aes.iv = VAR_10;
 VAR_9->cmd.u.aes.iv_len = VAR_11;
 VAR_9->cmd.u.aes.src = VAR_5->src;
 VAR_9->cmd.u.aes.src_len = VAR_5->cryptlen;
 VAR_9->cmd.u.aes.aad_len = VAR_5->assoclen;


 VAR_9->cmd.u.aes.dst = VAR_5->dst;

 VAR_13 = FUNC_2(&VAR_5->base, &VAR_9->cmd);

 return VAR_13;
}

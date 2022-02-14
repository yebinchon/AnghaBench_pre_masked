
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs1pad_request {int child_req; int out_sg; int out_buf; } ;
struct pkcs1pad_ctx {scalar_t__ key_size; int child; } ;
struct crypto_akcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct akcipher_request {scalar_t__ src_len; int src; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pkcs1pad_request* FUNC_0 (struct akcipher_request*) ;
 int FUNC_1 (int *,int ,int ,struct akcipher_request*) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 struct pkcs1pad_ctx* FUNC_4 (struct crypto_akcipher*) ;
 int FUNC_5 (int *) ;
 struct crypto_akcipher* FUNC_6 (struct akcipher_request*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct akcipher_request*,int) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_10(struct akcipher_request *VAR_6)
{
 struct crypto_akcipher *VAR_7 = FUNC_6(VAR_6);
 struct pkcs1pad_ctx *VAR_8 = FUNC_4(VAR_7);
 struct pkcs1pad_request *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;

 if (!VAR_8->key_size || VAR_6->src_len != VAR_8->key_size)
  return -VAR_2;

 VAR_9->out_buf = FUNC_7(VAR_8->key_size, VAR_4);
 if (!VAR_9->out_buf)
  return -VAR_3;

 FUNC_9(VAR_9->out_sg, VAR_9->out_buf,
       VAR_8->key_size, ((void*)0));

 FUNC_3(&VAR_9->child_req, VAR_8->child);
 FUNC_1(&VAR_9->child_req, VAR_6->base.flags,
   VAR_5, VAR_6);


 FUNC_2(&VAR_9->child_req, VAR_6->src,
       VAR_9->out_sg, VAR_6->src_len,
       VAR_8->key_size);

 VAR_10 = FUNC_5(&VAR_9->child_req);
 if (VAR_10 != -VAR_1 && VAR_10 != -VAR_0)
  return FUNC_8(VAR_6, VAR_10);

 return VAR_10;
}

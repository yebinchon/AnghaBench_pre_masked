
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsa_asn1_template {unsigned int size; int data; } ;
struct pkcs1pad_request {int* in_buf; int child_req; int in_sg; } ;
struct pkcs1pad_inst_ctx {struct rsa_asn1_template* digest_info; } ;
struct pkcs1pad_ctx {int key_size; int child; } ;
struct crypto_akcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct akcipher_request {int src_len; int dst_len; int dst; TYPE_1__ base; int src; } ;
struct akcipher_instance {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct akcipher_instance* FUNC_0 (struct crypto_akcipher*) ;
 struct pkcs1pad_inst_ctx* FUNC_1 (struct akcipher_instance*) ;
 struct pkcs1pad_request* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (int *,int ,int ,struct akcipher_request*) ;
 int FUNC_4 (int *,int ,int ,int,int) ;
 int FUNC_5 (int *,int ) ;
 struct pkcs1pad_ctx* FUNC_6 (struct crypto_akcipher*) ;
 int FUNC_7 (int *) ;
 struct crypto_akcipher* FUNC_8 (struct akcipher_request*) ;
 int* FUNC_9 (int,int ) ;
 int FUNC_10 (int*,int ,unsigned int) ;
 int FUNC_11 (int*,int,unsigned int) ;
 int FUNC_12 (struct akcipher_request*,int) ;
 int VAR_6 ;
 int FUNC_13 (int ,int*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_14(struct akcipher_request *VAR_7)
{
 struct crypto_akcipher *VAR_8 = FUNC_8(VAR_7);
 struct pkcs1pad_ctx *VAR_9 = FUNC_6(VAR_8);
 struct pkcs1pad_request *VAR_10 = FUNC_2(VAR_7);
 struct akcipher_instance *VAR_11 = FUNC_0(VAR_8);
 struct pkcs1pad_inst_ctx *VAR_12 = FUNC_1(VAR_11);
 const struct rsa_asn1_template *VAR_13 = VAR_12->digest_info;
 int VAR_14;
 unsigned int VAR_15, VAR_16 = 0;

 if (!VAR_9->key_size)
  return -VAR_2;

 if (VAR_13)
  VAR_16 = VAR_13->size;

 if (VAR_7->src_len + VAR_16 > VAR_9->key_size - 11)
  return -VAR_4;

 if (VAR_7->dst_len < VAR_9->key_size) {
  VAR_7->dst_len = VAR_9->key_size;
  return -VAR_4;
 }

 VAR_10->in_buf = FUNC_9(VAR_9->key_size - 1 - VAR_7->src_len,
      VAR_5);
 if (!VAR_10->in_buf)
  return -VAR_3;

 VAR_15 = VAR_9->key_size - VAR_16 - VAR_7->src_len - 2;
 VAR_10->in_buf[0] = 0x01;
 FUNC_11(VAR_10->in_buf + 1, 0xff, VAR_15 - 1);
 VAR_10->in_buf[VAR_15] = 0x00;

 if (VAR_13)
  FUNC_10(VAR_10->in_buf + VAR_15 + 1, VAR_13->data,
         VAR_13->size);

 FUNC_13(VAR_10->in_sg, VAR_10->in_buf,
   VAR_9->key_size - 1 - VAR_7->src_len, VAR_7->src);

 FUNC_5(&VAR_10->child_req, VAR_9->child);
 FUNC_3(&VAR_10->child_req, VAR_7->base.flags,
   VAR_6, VAR_7);


 FUNC_4(&VAR_10->child_req, VAR_10->in_sg,
       VAR_7->dst, VAR_9->key_size - 1, VAR_7->dst_len);

 VAR_14 = FUNC_7(&VAR_10->child_req);
 if (VAR_14 != -VAR_1 && VAR_14 != -VAR_0)
  return FUNC_12(VAR_7, VAR_14);

 return VAR_14;
}

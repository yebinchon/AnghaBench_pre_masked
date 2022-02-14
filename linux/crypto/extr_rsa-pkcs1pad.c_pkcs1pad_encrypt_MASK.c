
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs1pad_request {int* in_buf; int child_req; int in_sg; } ;
struct pkcs1pad_ctx {int key_size; int child; } ;
struct crypto_akcipher {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct akcipher_request {int src_len; int dst_len; int dst; TYPE_1__ base; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pkcs1pad_request* FUNC_0 (struct akcipher_request*) ;
 int FUNC_1 (int *,int ,int ,struct akcipher_request*) ;
 int FUNC_2 (int *,int ,int ,int,int) ;
 int FUNC_3 (int *,int ) ;
 struct pkcs1pad_ctx* FUNC_4 (struct crypto_akcipher*) ;
 int FUNC_5 (int *) ;
 struct crypto_akcipher* FUNC_6 (struct akcipher_request*) ;
 int* FUNC_7 (int,int ) ;
 int FUNC_8 (struct akcipher_request*,int) ;
 int VAR_6 ;
 int FUNC_9 (int ,int*,int,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct akcipher_request *VAR_7)
{
 struct crypto_akcipher *VAR_8 = FUNC_6(VAR_7);
 struct pkcs1pad_ctx *VAR_9 = FUNC_4(VAR_8);
 struct pkcs1pad_request *VAR_10 = FUNC_0(VAR_7);
 int VAR_11;
 unsigned int VAR_12, VAR_13;

 if (!VAR_9->key_size)
  return -VAR_2;

 if (VAR_7->src_len > VAR_9->key_size - 11)
  return -VAR_4;

 if (VAR_7->dst_len < VAR_9->key_size) {
  VAR_7->dst_len = VAR_9->key_size;
  return -VAR_4;
 }

 VAR_10->in_buf = FUNC_7(VAR_9->key_size - 1 - VAR_7->src_len,
      VAR_5);
 if (!VAR_10->in_buf)
  return -VAR_3;

 VAR_13 = VAR_9->key_size - VAR_7->src_len - 2;
 VAR_10->in_buf[0] = 0x02;
 for (VAR_12 = 1; VAR_12 < VAR_13; VAR_12++)
  VAR_10->in_buf[VAR_12] = 1 + FUNC_10(255);
 VAR_10->in_buf[VAR_13] = 0x00;

 FUNC_9(VAR_10->in_sg, VAR_10->in_buf,
   VAR_9->key_size - 1 - VAR_7->src_len, VAR_7->src);

 FUNC_3(&VAR_10->child_req, VAR_9->child);
 FUNC_1(&VAR_10->child_req, VAR_7->base.flags,
   VAR_6, VAR_7);


 FUNC_2(&VAR_10->child_req, VAR_10->in_sg,
       VAR_7->dst, VAR_9->key_size - 1, VAR_7->dst_len);

 VAR_11 = FUNC_5(&VAR_10->child_req);
 if (VAR_11 != -VAR_1 && VAR_11 != -VAR_0)
  return FUNC_8(VAR_7, VAR_11);

 return VAR_11;
}

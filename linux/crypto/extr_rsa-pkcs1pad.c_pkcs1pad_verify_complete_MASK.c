
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rsa_asn1_template {scalar_t__ size; int data; } ;
struct TYPE_2__ {unsigned int dst_len; } ;
struct pkcs1pad_request {int* out_buf; TYPE_1__ child_req; } ;
struct pkcs1pad_inst_ctx {struct rsa_asn1_template* digest_info; } ;
struct pkcs1pad_ctx {int key_size; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_request {unsigned int dst_len; scalar_t__ src_len; int src; } ;
struct akcipher_instance {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct akcipher_instance* FUNC_0 (struct crypto_akcipher*) ;
 struct pkcs1pad_inst_ctx* FUNC_1 (struct akcipher_instance*) ;
 struct pkcs1pad_request* FUNC_2 (struct akcipher_request*) ;
 struct pkcs1pad_ctx* FUNC_3 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_4 (struct akcipher_request*) ;
 scalar_t__ FUNC_5 (int*,int ,scalar_t__) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int*,int*,unsigned int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(struct akcipher_request *VAR_3, int VAR_4)
{
 struct crypto_akcipher *VAR_5 = FUNC_4(VAR_3);
 struct pkcs1pad_ctx *VAR_6 = FUNC_3(VAR_5);
 struct pkcs1pad_request *VAR_7 = FUNC_2(VAR_3);
 struct akcipher_instance *VAR_8 = FUNC_0(VAR_5);
 struct pkcs1pad_inst_ctx *VAR_9 = FUNC_1(VAR_8);
 const struct rsa_asn1_template *VAR_10 = VAR_9->digest_info;
 unsigned int VAR_11;
 unsigned int VAR_12;
 u8 *VAR_13;

 if (VAR_4)
  goto done;

 VAR_4 = -VAR_1;
 VAR_11 = VAR_7->child_req.dst_len;
 if (VAR_11 < VAR_6->key_size - 1)
  goto done;

 VAR_13 = VAR_7->out_buf;
 if (VAR_11 == VAR_6->key_size) {
  if (VAR_13[0] != 0x00)

   goto done;

  VAR_11--;
  VAR_13++;
 }

 VAR_4 = -VAR_0;
 if (VAR_13[0] != 0x01)
  goto done;

 for (VAR_12 = 1; VAR_12 < VAR_11; VAR_12++)
  if (VAR_13[VAR_12] != 0xff)
   break;

 if (VAR_12 < 9 || VAR_12 == VAR_11 || VAR_13[VAR_12] != 0x00)
  goto done;
 VAR_12++;

 if (VAR_10) {
  if (FUNC_5(VAR_13 + VAR_12, VAR_10->data,
      VAR_10->size))
   goto done;

  VAR_12 += VAR_10->size;
 }

 VAR_4 = 0;

 if (VAR_3->dst_len != VAR_11 - VAR_12) {
  VAR_4 = -VAR_2;
  VAR_3->dst_len = VAR_11 - VAR_12;
  goto done;
 }

 FUNC_9(VAR_3->src,
      FUNC_8(VAR_3->src,
         VAR_3->src_len + VAR_3->dst_len),
      VAR_7->out_buf + VAR_6->key_size,
      VAR_3->dst_len, VAR_6->key_size);

 if (FUNC_7(VAR_7->out_buf + VAR_6->key_size, VAR_13 + VAR_12,
     VAR_3->dst_len) != 0)
  VAR_4 = -VAR_2;
done:
 FUNC_6(VAR_7->out_buf);

 return VAR_4;
}

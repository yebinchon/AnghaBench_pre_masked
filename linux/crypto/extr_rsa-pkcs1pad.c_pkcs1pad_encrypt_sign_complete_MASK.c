
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int dst_len; } ;
struct pkcs1pad_request {int in_buf; TYPE_1__ child_req; } ;
struct pkcs1pad_ctx {unsigned int key_size; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_request {unsigned int dst_len; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pkcs1pad_request* FUNC_0 (struct akcipher_request*) ;
 struct pkcs1pad_ctx* FUNC_1 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int *,unsigned int) ;
 int FUNC_8 (int ,int ,int *,unsigned int) ;
 int FUNC_9 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct akcipher_request *VAR_2, int VAR_3)
{
 struct crypto_akcipher *VAR_4 = FUNC_2(VAR_2);
 struct pkcs1pad_ctx *VAR_5 = FUNC_1(VAR_4);
 struct pkcs1pad_request *VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7;
 unsigned int VAR_8;
 u8 *VAR_9;

 if (VAR_3)
  goto out;

 VAR_8 = VAR_6->child_req.dst_len;
 VAR_7 = VAR_5->key_size - VAR_8;


 if (FUNC_6(!VAR_7))
  goto out;

 VAR_9 = FUNC_4(VAR_5->key_size, VAR_1);
 VAR_3 = -VAR_0;
 if (!VAR_9)
  goto out;

 FUNC_8(VAR_2->dst, FUNC_9(VAR_2->dst, VAR_8),
     VAR_9 + VAR_7, VAR_8);
 FUNC_7(VAR_2->dst,
       FUNC_9(VAR_2->dst, VAR_5->key_size),
       VAR_9, VAR_5->key_size);
 FUNC_5(VAR_9);

out:
 VAR_2->dst_len = VAR_5->key_size;

 FUNC_3(VAR_6->in_buf);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int dst_len; } ;
struct pkcs1pad_request {int* out_buf; TYPE_1__ child_req; } ;
struct pkcs1pad_ctx {int key_size; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_request {unsigned int dst_len; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pkcs1pad_request* FUNC_0 (struct akcipher_request*) ;
 struct pkcs1pad_ctx* FUNC_1 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int ,int*,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct akcipher_request *VAR_2, int VAR_3)
{
 struct crypto_akcipher *VAR_4 = FUNC_2(VAR_2);
 struct pkcs1pad_ctx *VAR_5 = FUNC_1(VAR_4);
 struct pkcs1pad_request *VAR_6 = FUNC_0(VAR_2);
 unsigned int VAR_7;
 unsigned int VAR_8;
 u8 *VAR_9;

 if (VAR_3)
  goto done;

 VAR_3 = -VAR_0;
 VAR_7 = VAR_6->child_req.dst_len;
 if (VAR_7 < VAR_5->key_size - 1)
  goto done;

 VAR_9 = VAR_6->out_buf;
 if (VAR_7 == VAR_5->key_size) {
  if (VAR_9[0] != 0x00)

   goto done;

  VAR_7--;
  VAR_9++;
 }

 if (VAR_9[0] != 0x02)
  goto done;

 for (VAR_8 = 1; VAR_8 < VAR_7; VAR_8++)
  if (VAR_9[VAR_8] == 0x00)
   break;
 if (VAR_8 < 9 || VAR_8 == VAR_7)
  goto done;
 VAR_8++;

 VAR_3 = 0;

 if (VAR_2->dst_len < VAR_7 - VAR_8)
  VAR_3 = -VAR_1;
 VAR_2->dst_len = VAR_7 - VAR_8;

 if (!VAR_3)
  FUNC_4(VAR_2->dst,
    FUNC_5(VAR_2->dst, VAR_2->dst_len),
    VAR_9 + VAR_8, VAR_2->dst_len);

done:
 FUNC_3(VAR_6->out_buf);

 return VAR_3;
}

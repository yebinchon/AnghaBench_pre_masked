
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_info64 {int lo_offset; int lo_encrypt_key_size; int lo_encrypt_key; int lo_crypt_name; } ;
struct loop_device {struct crypto_sync_skcipher* key_data; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_sync_skcipher*) ;
 int FUNC_4 (struct crypto_sync_skcipher*,int ,int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct loop_device *VAR_3, const struct loop_info64 *VAR_4)
{
 int VAR_5 = -VAR_0;
 int VAR_6;
 int VAR_7;
 char VAR_8[VAR_2];
 char *VAR_9;
 char *VAR_10 = VAR_8;
 struct crypto_sync_skcipher *VAR_11;



 if (VAR_4->lo_offset % VAR_1)
  goto out;

 FUNC_8(VAR_8, VAR_4->lo_crypt_name, VAR_2);
 VAR_8[VAR_2 - 1] = 0;

 VAR_6 = FUNC_7(VAR_10, "-");

 VAR_9 = VAR_10 + VAR_6;
 VAR_7 = 0;
 if (*VAR_9) {
  VAR_9++;
  VAR_7 = FUNC_7(VAR_9, "-");
 }

 if (!VAR_7) {
  VAR_9 = "cbc";
  VAR_7 = 3;
 }

 if (VAR_6 + VAR_7 + 3 > VAR_2)
  return -VAR_0;

 FUNC_6(VAR_8, VAR_9, VAR_7);
 VAR_10 = VAR_8 + VAR_7;
 *VAR_10++ = '(';
 FUNC_5(VAR_10, VAR_4->lo_crypt_name, VAR_6);
 VAR_10 += VAR_6;
 *VAR_10++ = ')';
 *VAR_10 = 0;

 VAR_11 = FUNC_2(VAR_8, 0, 0);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_5 = FUNC_4(VAR_11, VAR_4->lo_encrypt_key,
       VAR_4->lo_encrypt_key_size);

 if (VAR_5 != 0)
  goto out_free_tfm;

 VAR_3->key_data = VAR_11;
 return 0;

 out_free_tfm:
 FUNC_3(VAR_11);

 out:
 return VAR_5;
}

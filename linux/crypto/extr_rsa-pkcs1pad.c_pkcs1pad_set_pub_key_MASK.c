
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs1pad_ctx {int key_size; int child; } ;
struct crypto_akcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pkcs1pad_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_akcipher *VAR_2, const void *VAR_3,
  unsigned int VAR_4)
{
 struct pkcs1pad_ctx *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_5->key_size = 0;

 VAR_6 = FUNC_2(VAR_5->child, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_5->child);
 if (VAR_6 > VAR_1)
  return -VAR_0;

 VAR_5->key_size = VAR_6;
 return 0;
}

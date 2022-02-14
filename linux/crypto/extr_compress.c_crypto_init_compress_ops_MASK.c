
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compress_tfm {int cot_decompress; int cot_compress; } ;
struct crypto_tfm {struct compress_tfm crt_compress; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct crypto_tfm *VAR_2)
{
 struct compress_tfm *VAR_3 = &VAR_2->crt_compress;

 VAR_3->cot_compress = VAR_0;
 VAR_3->cot_decompress = VAR_1;

 return 0;
}

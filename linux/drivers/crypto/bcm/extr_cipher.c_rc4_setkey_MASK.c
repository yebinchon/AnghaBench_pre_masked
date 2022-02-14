
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iproc_ctx_s {int enckeylen; int* enckey; int cipher_type; } ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iproc_ctx_s* FUNC_0 (struct crypto_ablkcipher*) ;

__attribute__((used)) static int FUNC_1(struct crypto_ablkcipher *VAR_3, const u8 *VAR_4,
        unsigned int VAR_5)
{
 struct iproc_ctx_s *VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 VAR_6->enckeylen = VAR_0 + VAR_1;

 VAR_6->enckey[0] = 0x00;
 VAR_6->enckey[1] = 0x00;
 VAR_6->enckey[2] = 0x00;
 VAR_6->enckey[3] = 0x00;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6->enckey[VAR_7 + VAR_1] = VAR_4[VAR_7 % VAR_5];

 VAR_6->cipher_type = VAR_2;

 return 0;
}

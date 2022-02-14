
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int authsize; } ;
struct aead_request {int assoclen; int* iv; } ;


 unsigned int VAR_0 ;
 struct crypto_aead* FUNC_0 (struct aead_request*) ;

__attribute__((used)) static inline bool FUNC_1(struct aead_request *VAR_1,
      unsigned int VAR_2,
      bool VAR_3, bool VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_0(VAR_1);


 if (VAR_5->authsize & 3)
  return 1;





 if (VAR_2 < VAR_0)
  return 1;


 if (VAR_1->assoclen & 0x3 || VAR_1->assoclen > 1020)
  return 1;


 if (VAR_3 && !(VAR_1->iv[0] == 1 || VAR_1->iv[0] == 3))
  return 1;

 return 0;
}

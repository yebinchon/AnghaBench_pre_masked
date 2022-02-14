
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_aead {int dummy; } ;
struct aead_request {int * iv; scalar_t__ assoclen; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_3, u8 VAR_4[], u32 VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_2(VAR_3);
 __be32 *VAR_7 = (__be32 *)&VAR_4[VAR_0 - 8];
 u32 VAR_8 = VAR_3->iv[0] + 1;


 if (VAR_8 < 2 || VAR_8 > 8)
  return -VAR_1;


 if (VAR_8 < 4 && VAR_5 >> (8 * VAR_8))
  return -VAR_2;





 VAR_7[0] = 0;
 VAR_7[1] = FUNC_0(VAR_5);

 FUNC_3(VAR_4, VAR_3->iv, VAR_0 - VAR_8);
 VAR_4[0] |= (FUNC_1(VAR_6) - 2) << 2;
 if (VAR_3->assoclen)
  VAR_4[0] |= 0x40;

 FUNC_4(&VAR_3->iv[VAR_0 - VAR_8], 0, VAR_8);
 return 0;
}

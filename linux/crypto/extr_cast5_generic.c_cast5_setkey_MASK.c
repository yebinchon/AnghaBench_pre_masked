
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct cast5_ctx {int rr; int* Km; int* Kr; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 struct cast5_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int *,int const*,unsigned int) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(struct crypto_tfm *VAR_0, const u8 *VAR_1, unsigned int VAR_2)
{
 struct cast5_ctx *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;
 u32 VAR_5[4];
 u32 VAR_6[4];
 u32 VAR_7[16];
 __be32 VAR_8[4];

 VAR_3->rr = VAR_2 <= 10 ? 1 : 0;

 FUNC_4(VAR_8, 0, 16);
 FUNC_3(VAR_8, VAR_1, VAR_2);


 VAR_5[0] = FUNC_0(VAR_8[0]);
 VAR_5[1] = FUNC_0(VAR_8[1]);
 VAR_5[2] = FUNC_0(VAR_8[2]);
 VAR_5[3] = FUNC_0(VAR_8[3]);

 FUNC_2(VAR_5, VAR_6, VAR_7);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  VAR_3->Km[VAR_4] = VAR_7[VAR_4];
 FUNC_2(VAR_5, VAR_6, VAR_7);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  VAR_3->Kr[VAR_4] = VAR_7[VAR_4] & 0x1f;
 return 0;
}

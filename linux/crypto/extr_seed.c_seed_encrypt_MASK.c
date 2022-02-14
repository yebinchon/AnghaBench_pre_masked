
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct seed_ctx {int * keysched; } ;
struct crypto_tfm {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ) ;
 struct seed_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const struct seed_ctx *VAR_3 = FUNC_3(VAR_0);
 const __be32 *VAR_4 = (const __be32 *)VAR_2;
 __be32 *VAR_5 = (__be32 *)VAR_1;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 const u32 *VAR_12 = VAR_3->keysched;

 VAR_6 = FUNC_1(VAR_4[0]);
 VAR_7 = FUNC_1(VAR_4[1]);
 VAR_8 = FUNC_1(VAR_4[2]);
 VAR_9 = FUNC_1(VAR_4[3]);

 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 0);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 2);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 4);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 6);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 8);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 10);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 12);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 14);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 16);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 18);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 20);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 22);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 24);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 26);
 FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, 28);
 FUNC_0(VAR_8, VAR_9, VAR_6, VAR_7, 30);

 VAR_5[0] = FUNC_2(VAR_8);
 VAR_5[1] = FUNC_2(VAR_9);
 VAR_5[2] = FUNC_2(VAR_6);
 VAR_5[3] = FUNC_2(VAR_7);
}

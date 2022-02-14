
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tea_ctx {scalar_t__* KEY; } ;
struct crypto_tfm {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct tea_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_2, u8 *VAR_3, const u8 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct tea_ctx *VAR_8 = FUNC_1(VAR_2);
 const __le32 *VAR_9 = (const __le32 *)VAR_4;
 __le32 *VAR_10 = (__le32 *)VAR_3;

 VAR_5 = FUNC_2(VAR_9[0]);
 VAR_6 = FUNC_2(VAR_9[1]);

 VAR_7 = VAR_0 * VAR_1;

 while (VAR_7) {
  VAR_6 -= (VAR_5 << 4 ^ VAR_5 >> 5) + (VAR_5 ^ VAR_7) + VAR_8->KEY[VAR_7>>11 & 3];
  VAR_7 -= VAR_0;
  VAR_5 -= (VAR_6 << 4 ^ VAR_6 >> 5) + (VAR_6 ^ VAR_7) + VAR_8->KEY[VAR_7 & 3];
 }

 VAR_10[0] = FUNC_0(VAR_5);
 VAR_10[1] = FUNC_0(VAR_6);
}

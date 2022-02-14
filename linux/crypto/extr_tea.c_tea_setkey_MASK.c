
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tea_ctx {void** KEY; } ;
struct crypto_tfm {int dummy; } ;
typedef int __le32 ;


 struct tea_ctx* FUNC_0 (struct crypto_tfm*) ;
 void* FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2)
{
 struct tea_ctx *VAR_3 = FUNC_0(VAR_0);
 const __le32 *VAR_4 = (const __le32 *)VAR_1;

 VAR_3->KEY[0] = FUNC_1(VAR_4[0]);
 VAR_3->KEY[1] = FUNC_1(VAR_4[1]);
 VAR_3->KEY[2] = FUNC_1(VAR_4[2]);
 VAR_3->KEY[3] = FUNC_1(VAR_4[3]);

 return 0;

}

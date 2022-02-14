
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_ablkcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_ablkcipher*,int const*,int ,int ) ;
 scalar_t__ FUNC_1 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_2(struct crypto_ablkcipher *VAR_1, const u8 *VAR_2,
          u32 VAR_3)
{
 return FUNC_1(VAR_1, VAR_2) ?:
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}

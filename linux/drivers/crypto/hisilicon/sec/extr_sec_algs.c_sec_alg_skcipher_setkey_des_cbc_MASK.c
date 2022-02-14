
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_skcipher*,int const*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*,int const*) ;

__attribute__((used)) static int FUNC_2(struct crypto_skcipher *VAR_1,
        const u8 *VAR_2, unsigned int VAR_3)
{
 return FUNC_1(VAR_1, VAR_2) ?:
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}

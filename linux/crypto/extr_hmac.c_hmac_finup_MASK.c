
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 char* FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct shash_desc*,int const*,int,int const*) ;
 scalar_t__ FUNC_3 (struct shash_desc*,char*) ;
 int FUNC_4 (struct crypto_shash*) ;
 struct shash_desc* FUNC_5 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_6(struct shash_desc *VAR_0, const u8 *VAR_1,
        unsigned int VAR_2, u8 *VAR_3)
{

 struct crypto_shash *VAR_4 = VAR_0->tfm;
 int VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = FUNC_4(VAR_4);
 char *VAR_7 = FUNC_0(VAR_4) + VAR_6;
 struct shash_desc *VAR_8 = FUNC_5(VAR_0);

 return FUNC_2(VAR_8, VAR_1, VAR_2, VAR_3) ?:
        FUNC_3(VAR_8, VAR_7) ?:
        FUNC_2(VAR_8, VAR_3, VAR_5, VAR_3);
}

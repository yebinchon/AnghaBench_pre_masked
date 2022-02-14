
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 struct shash_desc* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, u32 VAR_4, u32 VAR_5,
         struct crypto_shash **VAR_6,
         struct shash_desc **VAR_7)
{
 struct crypto_shash *VAR_8;
 struct shash_desc *VAR_9;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (FUNC_0(VAR_8)) {
  if (FUNC_1(VAR_8) == -VAR_0) {




   return 0;
  }
  FUNC_6("alg: hash: failed to allocate shash transform for %s: %ld\n",
         VAR_3, FUNC_1(VAR_8));
  return FUNC_1(VAR_8);
 }

 VAR_9 = FUNC_5(sizeof(*VAR_9) + FUNC_4(VAR_8), VAR_2);
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }
 VAR_9->tfm = VAR_8;

 *VAR_6 = VAR_8;
 *VAR_7 = VAR_9;
 return 0;
}

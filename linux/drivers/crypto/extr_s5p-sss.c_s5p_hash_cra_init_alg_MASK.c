
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_hash_reqctx {int dummy; } ;
struct s5p_hash_ctx {int fallback; int dd; } ;
struct crypto_tfm {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char const*,int ,int ) ;
 char* FUNC_5 (struct crypto_tfm*) ;
 struct s5p_hash_ctx* FUNC_6 (struct crypto_tfm*) ;
 int FUNC_7 (char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_3)
{
 struct s5p_hash_ctx *VAR_4 = FUNC_6(VAR_3);
 const char *VAR_5 = FUNC_5(VAR_3);

 VAR_4->dd = VAR_2;

 VAR_4->fallback = FUNC_4(VAR_5, 0,
         VAR_1);
 if (FUNC_0(VAR_4->fallback)) {
  FUNC_7("fallback alloc fails for '%s'\n", VAR_5);
  return FUNC_1(VAR_4->fallback);
 }

 FUNC_3(FUNC_2(VAR_3),
     sizeof(struct s5p_hash_reqctx) + VAR_0);

 return 0;
}

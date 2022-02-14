
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drbg_string {int dummy; } ;
struct drbg_state {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_rng {int dummy; } ;


 struct drbg_state* FUNC_0 (struct crypto_rng*) ;
 struct crypto_tfm* FUNC_1 (struct crypto_rng*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (struct drbg_state*,struct drbg_string*,int,int) ;
 int FUNC_5 (struct drbg_string*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_rng *VAR_0,
      const u8 *VAR_1, unsigned int VAR_2)
{
 struct drbg_state *VAR_3 = FUNC_0(VAR_0);
 struct crypto_tfm *VAR_4 = FUNC_1(VAR_0);
 bool VAR_5 = 0;
 struct drbg_string VAR_6;
 struct drbg_string *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_3(FUNC_2(VAR_4), &VAR_8,
         &VAR_5);
 if (0 < VAR_2) {
  FUNC_5(&VAR_6, VAR_1, VAR_2);
  VAR_7 = &VAR_6;
 }

 return FUNC_4(VAR_3, VAR_7, VAR_8, VAR_5);
}

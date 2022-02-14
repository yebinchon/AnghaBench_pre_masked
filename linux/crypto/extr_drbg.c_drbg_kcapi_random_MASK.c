
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drbg_string {int dummy; } ;
struct drbg_state {int dummy; } ;
struct crypto_rng {int dummy; } ;


 struct drbg_state* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (struct drbg_state*,int *,unsigned int,struct drbg_string*) ;
 int FUNC_2 (struct drbg_string*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_rng *VAR_0,
        const u8 *VAR_1, unsigned int VAR_2,
        u8 *VAR_3, unsigned int VAR_4)
{
 struct drbg_state *VAR_5 = FUNC_0(VAR_0);
 struct drbg_string *VAR_6 = ((void*)0);
 struct drbg_string VAR_7;

 if (VAR_2) {

  FUNC_2(&VAR_7, VAR_1, VAR_2);
  VAR_6 = &VAR_7;
 }

 return FUNC_1(VAR_5, VAR_3, VAR_4, VAR_6);
}

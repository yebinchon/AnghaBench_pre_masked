
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drbg_state {int drbg_mutex; int test_data; } ;
struct crypto_rng {int dummy; } ;


 struct drbg_state* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (int *,int const*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct crypto_rng *VAR_0,
       const u8 *VAR_1, unsigned int VAR_2)
{
 struct drbg_state *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->drbg_mutex);
 FUNC_1(&VAR_3->test_data, VAR_1, VAR_2);
 FUNC_3(&VAR_3->drbg_mutex);
}

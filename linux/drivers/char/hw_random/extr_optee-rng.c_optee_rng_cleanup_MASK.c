
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_rng_private {int entropy_shm_pool; } ;
struct hwrng {int dummy; } ;


 int FUNC_0 (int ) ;
 struct optee_rng_private* FUNC_1 (struct hwrng*) ;

__attribute__((used)) static void FUNC_2(struct hwrng *VAR_0)
{
 struct optee_rng_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->entropy_shm_pool);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_shm {int dummy; } ;
struct optee_rng_private {struct tee_shm* entropy_shm_pool; int dev; int ctx; } ;
struct hwrng {int dummy; } ;


 scalar_t__ FUNC_0 (struct tee_shm*) ;
 int VAR_0 ;
 int FUNC_1 (struct tee_shm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 struct tee_shm* FUNC_3 (int ,int ,int) ;
 struct optee_rng_private* FUNC_4 (struct hwrng*) ;

__attribute__((used)) static int FUNC_5(struct hwrng *VAR_3)
{
 struct optee_rng_private *VAR_4 = FUNC_4(VAR_3);
 struct tee_shm *VAR_5 = ((void*)0);

 VAR_5 = FUNC_3(VAR_4->ctx, VAR_0,
      VAR_2 | VAR_1);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4->dev, "tee_shm_alloc failed\n");
  return FUNC_1(VAR_5);
 }

 VAR_4->entropy_shm_pool = VAR_5;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jitterentropy {int jent_lock; int entropy_collector; } ;
struct crypto_rng {int dummy; } ;


 struct jitterentropy* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct crypto_rng *VAR_0,
        const u8 *VAR_1, unsigned int VAR_2,
        u8 *VAR_3, unsigned int VAR_4)
{
 struct jitterentropy *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = 0;

 FUNC_2(&VAR_5->jent_lock);
 VAR_6 = FUNC_1(VAR_5->entropy_collector, VAR_3, VAR_4);
 FUNC_3(&VAR_5->jent_lock);

 return VAR_6;
}

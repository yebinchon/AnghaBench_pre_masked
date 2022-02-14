
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jitterentropy {int jent_lock; int * entropy_collector; } ;
struct crypto_tfm {int dummy; } ;


 struct jitterentropy* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct crypto_tfm *VAR_0)
{
 struct jitterentropy *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->jent_lock);
 if (VAR_1->entropy_collector)
  FUNC_1(VAR_1->entropy_collector);
 VAR_1->entropy_collector = ((void*)0);
 FUNC_3(&VAR_1->jent_lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jitterentropy {int jent_lock; int entropy_collector; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 struct jitterentropy* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct jitterentropy *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 VAR_2->entropy_collector = FUNC_1(1, 0);
 if (!VAR_2->entropy_collector)
  VAR_3 = -VAR_0;

 FUNC_2(&VAR_2->jent_lock);
 return VAR_3;
}

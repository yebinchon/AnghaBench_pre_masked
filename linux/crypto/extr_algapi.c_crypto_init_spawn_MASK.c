
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_spawn {struct crypto_alg* alg; int list; int mask; struct crypto_instance* inst; } ;
struct crypto_instance {int dummy; } ;
struct crypto_alg {int cra_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct crypto_alg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct crypto_spawn *VAR_3, struct crypto_alg *VAR_4,
        struct crypto_instance *VAR_5, u32 VAR_6)
{
 int VAR_7 = -VAR_0;

 if (FUNC_0(VAR_5 == ((void*)0)))
  return -VAR_1;

 VAR_3->inst = VAR_5;
 VAR_3->mask = VAR_6;

 FUNC_2(&VAR_2);
 if (!FUNC_1(VAR_4)) {
  FUNC_3(&VAR_3->list, &VAR_4->cra_users);
  VAR_3->alg = VAR_4;
  VAR_7 = 0;
 }
 FUNC_4(&VAR_2);

 return VAR_7;
}

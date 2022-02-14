
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; } ;
struct drbg_state {TYPE_1__* d_ops; int * jent; int seed_work; TYPE_2__ random_ready; } ;
struct TYPE_3__ {int (* crypto_fini ) (struct drbg_state*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct drbg_state*) ;
 int FUNC_4 (struct drbg_state*) ;

__attribute__((used)) static int FUNC_5(struct drbg_state *VAR_0)
{
 if (VAR_0->random_ready.func) {
  FUNC_2(&VAR_0->random_ready);
  FUNC_0(&VAR_0->seed_work);
  FUNC_1(VAR_0->jent);
  VAR_0->jent = ((void*)0);
 }

 if (VAR_0->d_ops)
  VAR_0->d_ops->crypto_fini(VAR_0);
 FUNC_3(VAR_0);

 return 0;
}

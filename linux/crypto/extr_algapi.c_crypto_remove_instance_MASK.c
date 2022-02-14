
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct crypto_template {int dummy; } ;
struct TYPE_2__ {int cra_users; int cra_destroy; int cra_list; int cra_flags; } ;
struct crypto_instance {TYPE_1__ alg; int list; struct crypto_template* tmpl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct crypto_template*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_7(struct crypto_instance *VAR_2,
       struct list_head *VAR_3)
{
 struct crypto_template *VAR_4 = VAR_2->tmpl;

 if (FUNC_1(&VAR_2->alg))
  return;

 VAR_2->alg.cra_flags |= VAR_0;
 if (FUNC_4(&VAR_2->list))
  return;

 if (!VAR_4 || !FUNC_2(VAR_4))
  return;

 FUNC_6(&VAR_2->alg.cra_list, VAR_3);
 FUNC_3(&VAR_2->list);
 VAR_2->alg.cra_destroy = VAR_1;

 FUNC_0(!FUNC_5(&VAR_2->alg.cra_users));
}

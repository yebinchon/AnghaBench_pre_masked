
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct crypto_alg {int cra_list; int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_alg*,struct list_head*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_alg *VAR_2, struct list_head *VAR_3)
{
 if (FUNC_3(FUNC_2(&VAR_2->cra_list)))
  return -VAR_1;

 VAR_2->cra_flags |= VAR_0;

 FUNC_1(&VAR_2->cra_list);
 FUNC_0(VAR_2, VAR_3, ((void*)0));

 return 0;
}

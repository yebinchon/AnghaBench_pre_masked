
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {scalar_t__ ppl_page; } ;
struct kmem_cache {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct kmem_cache*,struct stripe_head*) ;

__attribute__((used)) static void FUNC_2(struct kmem_cache *VAR_0, struct stripe_head *VAR_1)
{
 if (VAR_1->ppl_page)
  FUNC_0(VAR_1->ppl_page);
 FUNC_1(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int * entry_dtor; int * flush_cb; int * fq; int fq_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iova_domain*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iova_domain*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iova_domain *VAR_0)
{
 if (!FUNC_3(VAR_0))
  return;

 if (FUNC_4(&VAR_0->fq_timer))
  FUNC_0(&VAR_0->fq_timer);

 FUNC_1(VAR_0);

 FUNC_2(VAR_0->fq);

 VAR_0->fq = ((void*)0);
 VAR_0->flush_cb = ((void*)0);
 VAR_0->entry_dtor = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* freelist; } ;
struct dmar_domain {int * pgd; int gaw; int agaw; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (struct dmar_domain*,int ,int *,int ,unsigned long,unsigned long,int *) ;
 int FUNC_4 (struct dmar_domain*,unsigned long) ;
 struct page* FUNC_5 (int *) ;

__attribute__((used)) static struct page *FUNC_6(struct dmar_domain *VAR_0,
     unsigned long VAR_1,
     unsigned long VAR_2)
{
 struct page *VAR_3;

 FUNC_0(!FUNC_4(VAR_0, VAR_1));
 FUNC_0(!FUNC_4(VAR_0, VAR_2));
 FUNC_0(VAR_1 > VAR_2);


 VAR_3 = FUNC_3(VAR_0, FUNC_2(VAR_0->agaw),
           VAR_0->pgd, 0, VAR_1, VAR_2, ((void*)0));


 if (VAR_1 == 0 && VAR_2 == FUNC_1(VAR_0->gaw)) {
  struct page *VAR_4 = FUNC_5(VAR_0->pgd);
  VAR_4->freelist = VAR_3;
  VAR_3 = VAR_4;

  VAR_0->pgd = ((void*)0);
 }

 return VAR_3;
}

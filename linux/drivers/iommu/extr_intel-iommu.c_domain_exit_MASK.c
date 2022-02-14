
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dmar_domain {int gaw; scalar_t__ pgd; int iovad; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct dmar_domain*) ;
 struct page* FUNC_3 (struct dmar_domain*,int ,int ) ;
 int FUNC_4 (struct dmar_domain*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dmar_domain *VAR_0)
{


 FUNC_2(VAR_0);


 FUNC_5(&VAR_0->iovad);

 if (VAR_0->pgd) {
  struct page *VAR_1;

  VAR_1 = FUNC_3(VAR_0, 0, FUNC_0(VAR_0->gaw));
  FUNC_1(VAR_1);
 }

 FUNC_4(VAR_0);
}

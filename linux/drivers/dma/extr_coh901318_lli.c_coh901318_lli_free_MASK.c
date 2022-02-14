
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901318_pool {int lock; int dmapool; } ;
struct coh901318_lli {int phy_this; struct coh901318_lli* virt_link_addr; scalar_t__ link_addr; } ;


 int FUNC_0 (struct coh901318_pool*,int) ;
 int FUNC_1 (int ,struct coh901318_lli*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct coh901318_pool *VAR_0,
   struct coh901318_lli **VAR_1)
{
 struct coh901318_lli *VAR_2;
 struct coh901318_lli *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = *VAR_1;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_0->lock);

 while (VAR_2->link_addr) {
  VAR_3 = VAR_2->virt_link_addr;
  FUNC_1(VAR_0->dmapool, VAR_2, VAR_2->phy_this);
  FUNC_0(VAR_0, -1);
  VAR_2 = VAR_3;
 }
 FUNC_1(VAR_0->dmapool, VAR_2, VAR_2->phy_this);
 FUNC_0(VAR_0, -1);

 FUNC_3(&VAR_0->lock);
 *VAR_1 = ((void*)0);
}

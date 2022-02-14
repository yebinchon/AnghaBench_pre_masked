
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coh901318_pool {int lock; int dmapool; } ;
struct coh901318_lli {int link_addr; struct coh901318_lli* virt_link_addr; void* phy_this; } ;
typedef void* dma_addr_t ;


 int FUNC_0 (struct coh901318_pool*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct coh901318_pool*,struct coh901318_lli**) ;
 struct coh901318_lli* FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct coh901318_lli *
FUNC_5(struct coh901318_pool *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct coh901318_lli *VAR_4;
 struct coh901318_lli *VAR_5;
 struct coh901318_lli *VAR_6;
 dma_addr_t VAR_7;

 if (VAR_2 == 0)
  return ((void*)0);

 FUNC_3(&VAR_1->lock);

 VAR_4 = FUNC_2(VAR_1->dmapool, VAR_0, &VAR_7);

 if (VAR_4 == ((void*)0))
  goto err;

 FUNC_0(VAR_1, 1);

 VAR_5 = VAR_4;
 VAR_5->phy_this = VAR_7;
 VAR_5->link_addr = 0x00000000;
 VAR_5->virt_link_addr = ((void*)0);

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  VAR_6 = VAR_5;

  VAR_5 = FUNC_2(VAR_1->dmapool, VAR_0, &VAR_7);

  if (VAR_5 == ((void*)0))
   goto err_clean_up;

  FUNC_0(VAR_1, 1);
  VAR_5->phy_this = VAR_7;
  VAR_5->link_addr = 0x00000000;
  VAR_5->virt_link_addr = ((void*)0);

  VAR_6->link_addr = VAR_7;
  VAR_6->virt_link_addr = VAR_5;
 }

 FUNC_4(&VAR_1->lock);

 return VAR_4;

 err:
 FUNC_4(&VAR_1->lock);
 return ((void*)0);

 err_clean_up:
 VAR_6->link_addr = 0x00000000U;
 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_1, &VAR_4);
 return ((void*)0);
}

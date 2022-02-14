
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bounce_page {int dummy; } ;
typedef TYPE_1__* bus_dmamap_t ;
typedef TYPE_2__* bus_dma_tag_t ;
struct TYPE_7__ {int iommu_cookie; scalar_t__ iommu; } ;
struct TYPE_6__ {int bpages; scalar_t__ nsegs; int segments; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;
 struct bounce_page* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,struct bounce_page*) ;
 int VAR_0 ;

void
FUNC_4(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2)
{
 struct bounce_page *VAR_3;

 if (VAR_1->iommu) {
  FUNC_0(VAR_1->iommu, VAR_2->segments, VAR_2->nsegs, VAR_1->iommu_cookie);
  VAR_2->nsegs = 0;
 }

 while ((VAR_3 = FUNC_1(&VAR_2->bpages)) != ((void*)0)) {
  FUNC_2(&VAR_2->bpages, VAR_0);
  FUNC_3(VAR_1, VAR_3);
 }
}

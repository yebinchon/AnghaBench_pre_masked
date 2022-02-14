
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_domain {int dummy; } ;
struct bus_dmamap_dmar {int map_entries; } ;
struct bus_dma_tag_dmar {int map_count; TYPE_1__* ctx; } ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
struct TYPE_2__ {struct dmar_domain* domain; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bus_dmamap_dmar*,int ) ;

__attribute__((used)) static int
FUNC_4(bus_dma_tag_t VAR_2, bus_dmamap_t VAR_3)
{
 struct bus_dma_tag_dmar *VAR_4;
 struct bus_dmamap_dmar *VAR_5;
 struct dmar_domain *VAR_6;

 VAR_4 = (struct bus_dma_tag_dmar *)VAR_2;
 VAR_5 = (struct bus_dmamap_dmar *)VAR_3;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = VAR_4->ctx->domain;
  FUNC_0(VAR_6);
  if (!FUNC_2(&VAR_5->map_entries)) {
   FUNC_1(VAR_6);
   return (VAR_0);
  }
  FUNC_1(VAR_6);
  FUNC_3(VAR_5, VAR_1);
 }
 VAR_4->map_count--;
 return (0);
}

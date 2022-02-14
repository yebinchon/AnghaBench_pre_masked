
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmar_map_entries_tailq {int dummy; } ;
struct dmar_domain {int unload_task; TYPE_1__* dmar; struct dmar_map_entries_tailq unload_entries; } ;
struct dmar_ctx {int unloads; struct dmar_domain* domain; } ;
struct bus_dmamap_dmar {int map_entries; } ;
struct bus_dma_tag_dmar {struct dmar_ctx* ctx; } ;
typedef scalar_t__ bus_dmamap_t ;
typedef scalar_t__ bus_dma_tag_t ;
struct TYPE_2__ {int delayed_taskqueue; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dmar_map_entries_tailq*,int *,int ) ;
 int FUNC_4 (struct dmar_map_entries_tailq*) ;
 int FUNC_5 (struct dmar_map_entries_tailq*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;
 int FUNC_9 (struct dmar_domain*,struct dmar_map_entries_tailq*,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2)
{
 struct bus_dma_tag_dmar *VAR_3;
 struct bus_dmamap_dmar *VAR_4;
 struct dmar_ctx *VAR_5;
 struct dmar_domain *VAR_6;

 struct dmar_map_entries_tailq VAR_7;


 VAR_3 = (struct bus_dma_tag_dmar *)VAR_1;
 VAR_4 = (struct bus_dmamap_dmar *)VAR_2;
 VAR_5 = VAR_3->ctx;
 VAR_6 = VAR_5->domain;
 FUNC_8(&VAR_5->unloads, 1);
 FUNC_5(&VAR_7);
 FUNC_0(VAR_6);
 FUNC_3(&VAR_7, &VAR_4->map_entries, VAR_0);
 FUNC_1(VAR_6);
 FUNC_6();
 FUNC_9(VAR_6, &VAR_7, 0);
 FUNC_7();
 FUNC_2(FUNC_4(&VAR_7), ("lazy dmar_ctx_unload %p", VAR_5));

}

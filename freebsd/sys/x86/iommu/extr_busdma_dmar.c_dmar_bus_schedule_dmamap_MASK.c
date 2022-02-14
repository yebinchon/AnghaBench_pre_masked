
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int dmamap_load_task; int delayed_taskqueue; int delayed_maps; } ;
struct bus_dmamap_dmar {int locked; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int *,struct bus_dmamap_dmar*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct dmar_unit *VAR_1, struct bus_dmamap_dmar *VAR_2)
{

 VAR_2->locked = 0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->delayed_maps, VAR_2, VAR_0);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->delayed_taskqueue, &VAR_1->dmamap_load_task);
}

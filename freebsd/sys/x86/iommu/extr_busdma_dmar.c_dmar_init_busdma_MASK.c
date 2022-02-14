
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int dma_enabled; int unit; int delayed_taskqueue; int dmamap_load_task; int delayed_maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct dmar_unit*) ;
 int FUNC_2 (char*,int*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ,int *) ;
 int FUNC_4 (int *,int,int ,char*,int ) ;
 int VAR_3 ;

int
FUNC_5(struct dmar_unit *VAR_4)
{

 VAR_4->dma_enabled = 1;
 FUNC_2("hw.dmar.dma", &VAR_4->dma_enabled);
 FUNC_0(&VAR_4->delayed_maps);
 FUNC_1(&VAR_4->dmamap_load_task, 0, VAR_2, VAR_4);
 VAR_4->delayed_taskqueue = FUNC_3("dmar", VAR_0,
     VAR_3, &VAR_4->delayed_taskqueue);
 FUNC_4(&VAR_4->delayed_taskqueue, 1, VAR_1,
     "dmar%d busdma taskq", VAR_4->unit);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int * delayed_taskqueue; int dmamap_load_task; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct dmar_unit *VAR_0)
{

 if (VAR_0->delayed_taskqueue == ((void*)0))
  return;

 FUNC_0(VAR_0->delayed_taskqueue, &VAR_0->dmamap_load_task);
 FUNC_1(VAR_0->delayed_taskqueue);
 VAR_0->delayed_taskqueue = ((void*)0);
}

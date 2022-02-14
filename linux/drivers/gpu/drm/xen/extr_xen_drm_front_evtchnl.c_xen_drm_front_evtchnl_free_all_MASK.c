
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_drm_front_info {int num_evt_pairs; TYPE_1__* evt_pairs; } ;
struct TYPE_2__ {int evt; int req; } ;


 int FUNC_0 (struct xen_drm_front_info*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct xen_drm_front_info *VAR_0)
{
 int VAR_1;

 if (!VAR_0->evt_pairs)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_evt_pairs; VAR_1++) {
  FUNC_0(VAR_0, &VAR_0->evt_pairs[VAR_1].req);
  FUNC_0(VAR_0, &VAR_0->evt_pairs[VAR_1].evt);
 }

 FUNC_1(VAR_0->evt_pairs);
 VAR_0->evt_pairs = ((void*)0);
}

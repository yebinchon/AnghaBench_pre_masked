
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_sideband_msg_tx {int seqno; TYPE_1__* dst; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {int ** tx_slots; } ;


 unsigned int FUNC_0 (int **) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*,int) ;

__attribute__((used)) static void FUNC_4(struct drm_dp_mst_topology_mgr *VAR_0,
           struct drm_dp_sideband_msg_tx *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_3(VAR_0, VAR_1, 1);

 if (VAR_2 != 1)
  FUNC_1("failed to send msg in q %d\n", VAR_2);

 if (VAR_1->seqno != -1) {
  FUNC_2((unsigned int)VAR_1->seqno >
   FUNC_0(VAR_1->dst->tx_slots));
  VAR_1->dst->tx_slots[VAR_1->seqno] = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_rx {int curchunk_len; int curchunk_hdrlen; } ;
struct drm_dp_mst_topology_mgr {int aux; int max_dpcd_transaction_bytes; struct drm_dp_sideband_msg_rx down_rep_recv; struct drm_dp_sideband_msg_rx up_req_recv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (struct drm_dp_sideband_msg_rx*,int *,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_dp_mst_topology_mgr *VAR_2, bool VAR_3)
{
 int VAR_4;
 u8 VAR_5[32];
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;
 struct drm_dp_sideband_msg_rx *VAR_10;
 int VAR_11 = VAR_3 ? VAR_1 : VAR_0;
 VAR_10 = VAR_3 ? &VAR_2->up_req_recv : &VAR_2->down_rep_recv;

 VAR_4 = FUNC_3(VAR_2->max_dpcd_transaction_bytes, 16);
 VAR_9 = FUNC_1(VAR_2->aux, VAR_11,
          VAR_5, VAR_4);
 if (VAR_9 != VAR_4) {
  FUNC_0("failed to read DPCD down rep %d %d\n", VAR_4, VAR_9);
  return 0;
 }
 VAR_9 = FUNC_2(VAR_10, VAR_5, VAR_4, 1);
 if (!VAR_9) {
  FUNC_0("sideband msg build failed %d\n", VAR_5[0]);
  return 0;
 }
 VAR_6 = VAR_10->curchunk_len + VAR_10->curchunk_hdrlen;

 VAR_7 = VAR_6;
 VAR_6 -= VAR_4;
 VAR_8 = VAR_4;
 while (VAR_6 > 0) {
  VAR_4 = FUNC_4(VAR_6, VAR_2->max_dpcd_transaction_bytes, 16);
  VAR_9 = FUNC_1(VAR_2->aux, VAR_11 + VAR_8,
        VAR_5, VAR_4);
  if (VAR_9 != VAR_4) {
   FUNC_0("failed to read a chunk (len %d, ret %d)\n",
          VAR_4, VAR_9);
   return 0;
  }

  VAR_9 = FUNC_2(VAR_10, VAR_5, VAR_4, 0);
  if (!VAR_9) {
   FUNC_0("failed to build sideband msg\n");
   return 0;
  }

  VAR_8 += VAR_4;
  VAR_6 -= VAR_4;
 }
 return 1;
}

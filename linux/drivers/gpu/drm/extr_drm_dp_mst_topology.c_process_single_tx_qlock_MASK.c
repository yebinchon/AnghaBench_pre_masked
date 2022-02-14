
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_tx {scalar_t__ state; int seqno; int cur_len; int cur_offset; int * msg; } ;
struct drm_dp_sideband_msg_hdr {int somt; int eomt; int msg_len; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct drm_dp_sideband_msg_hdr*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct drm_dp_sideband_msg_hdr*,int *,int*) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,int,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct drm_dp_sideband_msg_hdr*,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct drm_dp_sideband_msg_hdr*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_9(struct drm_dp_mst_topology_mgr *VAR_3,
       struct drm_dp_sideband_msg_tx *VAR_4,
       bool VAR_5)
{
 u8 VAR_6[48];
 struct drm_dp_sideband_msg_hdr VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 FUNC_6(&VAR_7, 0, sizeof(struct drm_dp_sideband_msg_hdr));

 if (VAR_4->state == VAR_0) {
  VAR_4->seqno = -1;
  VAR_4->state = VAR_2;
 }



 VAR_12 = FUNC_8(&VAR_7, VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_8 = VAR_4->cur_len - VAR_4->cur_offset;


 VAR_9 = 48 - 1 - FUNC_1(&VAR_7);

 VAR_11 = FUNC_7(VAR_8, VAR_9);
 if (VAR_8 == VAR_4->cur_len)
  VAR_7.somt = 1;
 if (VAR_9 >= VAR_8)
  VAR_7.eomt = 1;


 VAR_7.msg_len = VAR_11 + 1;
 FUNC_3(&VAR_7, VAR_6, &VAR_10);
 FUNC_5(&VAR_6[VAR_10], &VAR_4->msg[VAR_4->cur_offset], VAR_11);

 FUNC_2(&VAR_6[VAR_10], VAR_11);
 VAR_10 += VAR_11 + 1;

 VAR_12 = FUNC_4(VAR_3, VAR_5, VAR_6, VAR_10);
 if (VAR_12) {
  FUNC_0("sideband msg failed to send\n");
  return VAR_12;
 }

 VAR_4->cur_offset += VAR_11;
 if (VAR_4->cur_offset == VAR_4->cur_len) {
  VAR_4->state = VAR_1;
  return 1;
 }
 return 0;
}

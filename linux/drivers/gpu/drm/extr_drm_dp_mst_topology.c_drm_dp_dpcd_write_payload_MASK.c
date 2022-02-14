
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_payload {int start_slot; int num_slots; } ;
struct drm_dp_mst_topology_mgr {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct drm_dp_mst_topology_mgr *VAR_4,
         int VAR_5, struct drm_dp_payload *VAR_6)
{
 u8 VAR_7[3], VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_3(VAR_4->aux, VAR_2,
      VAR_1);

 VAR_7[0] = VAR_5;
 VAR_7[1] = VAR_6->start_slot;
 VAR_7[2] = VAR_6->num_slots;

 VAR_9 = FUNC_2(VAR_4->aux, VAR_0, VAR_7, 3);
 if (VAR_9 != 3) {
  FUNC_0("failed to write payload allocation %d\n", VAR_9);
  goto fail;
 }

retry:
 VAR_9 = FUNC_1(VAR_4->aux, VAR_2, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0("failed to read payload table status %d\n", VAR_9);
  goto fail;
 }

 if (!(VAR_8 & VAR_1)) {
  VAR_10++;
  if (VAR_10 < 20) {
   FUNC_4(10000, 20000);
   goto retry;
  }
  FUNC_0("status not set after read payload table status %d\n", VAR_8);
  VAR_9 = -VAR_3;
  goto fail;
 }
 VAR_9 = 0;
fail:
 return VAR_9;
}

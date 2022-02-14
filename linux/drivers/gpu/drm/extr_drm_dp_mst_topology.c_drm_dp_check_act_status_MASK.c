
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_mst_topology_mgr {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct drm_dp_mst_topology_mgr *VAR_3)
{
 u8 VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 do {
  VAR_5 = FUNC_1(VAR_3->aux, VAR_1, &VAR_4);

  if (VAR_5 < 0) {
   FUNC_0("failed to read payload table status %d\n", VAR_5);
   goto fail;
  }

  if (VAR_4 & VAR_0)
   break;
  VAR_6++;
  FUNC_2(100);

 } while (VAR_6 < 30);

 if (!(VAR_4 & VAR_0)) {
  FUNC_0("failed to get ACT bit %d after %d retries\n", VAR_4, VAR_6);
  VAR_5 = -VAR_2;
  goto fail;
 }
 return 0;
fail:
 return VAR_5;
}

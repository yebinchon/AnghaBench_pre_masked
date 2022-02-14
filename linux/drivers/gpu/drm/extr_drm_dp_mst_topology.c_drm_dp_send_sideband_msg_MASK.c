
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_mst_topology_mgr {int aux; int max_dpcd_transaction_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_mst_topology_mgr *VAR_3,
        bool VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_4 ? VAR_1 : VAR_0;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;

retry:
 VAR_10 = VAR_6;
 VAR_11 = 0;
 do {
  VAR_9 = FUNC_2(VAR_3->max_dpcd_transaction_bytes, 16, VAR_10);

  VAR_7 = FUNC_1(VAR_3->aux, VAR_8 + VAR_11,
     &VAR_5[VAR_11],
     VAR_9);
  if (VAR_7 != VAR_9) {
   if (VAR_7 == -VAR_2 && VAR_12 < 5) {
    VAR_12++;
    goto retry;
   }
   FUNC_0("failed to dpcd write %d %d\n", VAR_9, VAR_7);

   return -VAR_2;
  }
  VAR_11 += VAR_9;
  VAR_10 -= VAR_9;
 } while (VAR_10 > 0);
 return 0;
}

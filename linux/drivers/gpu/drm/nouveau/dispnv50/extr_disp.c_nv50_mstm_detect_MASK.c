
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mst_state; int lock; struct drm_dp_aux* aux; } ;
struct nv50_mstm {TYPE_1__ mgr; } ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nv50_mstm*,int,int) ;

int
FUNC_6(struct nv50_mstm *VAR_4, u8 VAR_5[8], int VAR_6)
{
 struct drm_dp_aux *VAR_7;
 int VAR_8;
 bool VAR_9, VAR_10;
 u8 VAR_11;

 if (!VAR_4)
  return 0;

 FUNC_3(&VAR_4->mgr.lock);

 VAR_9 = VAR_4->mgr.mst_state;
 VAR_10 = VAR_9;
 VAR_7 = VAR_4->mgr.aux;

 if (VAR_9) {

  VAR_8 = FUNC_1(VAR_7, VAR_1, &VAR_11);
  if (VAR_8 < 0 || !(VAR_11 & VAR_3)) {
   FUNC_0("Hub gone, disabling MST topology\n");
   VAR_10 = 0;
  }
 } else if (VAR_5[0] >= 0x12) {
  VAR_8 = FUNC_1(VAR_7, VAR_0, &VAR_5[1]);
  if (VAR_8 < 0)
   goto probe_error;

  if (!(VAR_5[1] & VAR_2))
   VAR_5[0] = 0x11;
  else
   VAR_10 = VAR_6;
 }

 if (VAR_10 == VAR_9) {
  FUNC_4(&VAR_4->mgr.lock);
  return VAR_10;
 }

 VAR_8 = FUNC_5(VAR_4, VAR_5[0], VAR_10);
 if (VAR_8)
  goto probe_error;

 FUNC_4(&VAR_4->mgr.lock);

 VAR_8 = FUNC_2(&VAR_4->mgr, VAR_10);
 if (VAR_8)
  return FUNC_5(VAR_4, VAR_5[0], 0);

 return VAR_10;

probe_error:
 FUNC_4(&VAR_4->mgr.lock);
 return VAR_8;
}

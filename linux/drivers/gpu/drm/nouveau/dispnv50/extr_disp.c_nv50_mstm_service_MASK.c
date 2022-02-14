
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct drm_dp_aux* aux; } ;
struct nv50_mstm {TYPE_1__ mgr; } ;
struct drm_dp_aux {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_dp_aux*,scalar_t__,int *,int) ;
 int FUNC_1 (struct drm_dp_aux*,scalar_t__,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void
FUNC_4(struct nv50_mstm *VAR_1)
{
 struct drm_dp_aux *VAR_2 = VAR_1 ? VAR_1->mgr.aux : ((void*)0);
 bool VAR_3 = 1;
 int VAR_4;
 u8 VAR_5[8] = {};

 if (!VAR_2)
  return;

 while (VAR_3) {
  VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_5, 8);
  if (VAR_4 != 8) {
   FUNC_3(&VAR_1->mgr, 0);
   return;
  }

  FUNC_2(&VAR_1->mgr, VAR_5, &VAR_3);
  if (!VAR_3)
   break;

  FUNC_1(VAR_2, VAR_0 + 1, &VAR_5[1], 3);
 }
}

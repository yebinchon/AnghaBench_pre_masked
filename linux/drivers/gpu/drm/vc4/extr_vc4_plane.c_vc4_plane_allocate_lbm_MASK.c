
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ size; int start; int allocated; } ;
struct vc4_plane_state {size_t lbm_offset; TYPE_3__ lbm; int * dlist; } ;
struct vc4_dev {TYPE_2__* hvs; } ;
struct drm_plane_state {TYPE_1__* plane; } ;
struct TYPE_5__ {int mm_lock; int lbm_mm; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_3__*,scalar_t__,int,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vc4_dev* FUNC_5 (int ) ;
 struct vc4_plane_state* FUNC_6 (struct drm_plane_state*) ;
 scalar_t__ FUNC_7 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_8(struct drm_plane_state *VAR_1)
{
 struct vc4_dev *VAR_2 = FUNC_5(VAR_1->plane->dev);
 struct vc4_plane_state *VAR_3 = FUNC_6(VAR_1);
 unsigned long VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_7(VAR_1);
 if (!VAR_5)
  return 0;

 if (FUNC_0(!VAR_3->lbm_offset))
  return -VAR_0;




 if (!VAR_3->lbm.allocated) {
  int VAR_6;

  FUNC_3(&VAR_2->hvs->mm_lock, VAR_4);
  VAR_6 = FUNC_2(&VAR_2->hvs->lbm_mm,
       &VAR_3->lbm,
       VAR_5, 32, 0, 0);
  FUNC_4(&VAR_2->hvs->mm_lock, VAR_4);

  if (VAR_6)
   return VAR_6;
 } else {
  FUNC_1(VAR_5 != VAR_3->lbm.size);
 }

 VAR_3->dlist[VAR_3->lbm_offset] = VAR_3->lbm.start;

 return 0;
}

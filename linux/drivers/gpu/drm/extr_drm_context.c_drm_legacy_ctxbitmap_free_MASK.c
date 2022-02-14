
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; int ctx_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_device * VAR_2, int VAR_3)
{
 if (!FUNC_0(VAR_2, VAR_0) &&
     !FUNC_0(VAR_2, VAR_1))
  return;

 FUNC_2(&VAR_2->struct_mutex);
 FUNC_1(&VAR_2->ctx_idr, VAR_3);
 FUNC_3(&VAR_2->struct_mutex);
}

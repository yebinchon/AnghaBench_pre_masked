
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_device {int venc_lock; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct venc_device* FUNC_1 (struct omap_dss_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct venc_device*) ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_0)
{
 struct venc_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("venc_display_enable\n");

 FUNC_2(&VAR_1->venc_lock);

 FUNC_4(VAR_1);

 FUNC_3(&VAR_1->venc_lock);
}

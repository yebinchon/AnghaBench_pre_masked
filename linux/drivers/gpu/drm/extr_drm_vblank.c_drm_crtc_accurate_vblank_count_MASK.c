
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct drm_device {int vblank_time_lock; TYPE_1__* driver; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {int get_vblank_timestamp; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (struct drm_crtc*) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*,unsigned int,int) ;
 int FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

u64 FUNC_6(struct drm_crtc *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 unsigned int VAR_4 = FUNC_1(VAR_2);
 u64 VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_1 & VAR_0 && !VAR_3->driver->get_vblank_timestamp,
    "This function requires support for accurate vblank timestamps.");

 FUNC_4(&VAR_3->vblank_time_lock, VAR_6);

 FUNC_2(VAR_3, VAR_4, 0);
 VAR_5 = FUNC_3(VAR_3, VAR_4);

 FUNC_5(&VAR_3->vblank_time_lock, VAR_6);

 return VAR_5;
}

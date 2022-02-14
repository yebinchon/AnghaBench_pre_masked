
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int dummy; } ;
struct drm_device {unsigned int driver_features; int struct_mutex; int filelist_mutex; int clientlist_mutex; int master_mutex; int dev; int anon_inode; int event_lock; int vblank_event_list; int clientlist; int filelist_internal; int filelist; struct drm_driver* driver; int ref; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct drm_device*,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct drm_device*,int ) ;
 int FUNC_19 (struct drm_device*,int ) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;

int FUNC_26(struct drm_device *VAR_6,
   struct drm_driver *VAR_7,
   struct device *VAR_8)
{
 int VAR_9;

 if (!VAR_5) {
  FUNC_1("DRM core is not initialized\n");
  return -VAR_4;
 }

 FUNC_0(!VAR_8);

 FUNC_21(&VAR_6->ref);
 VAR_6->dev = FUNC_20(VAR_8);
 VAR_6->driver = VAR_7;


 VAR_6->driver_features = ~0u;

 FUNC_16(VAR_6);
 FUNC_2(&VAR_6->filelist);
 FUNC_2(&VAR_6->filelist_internal);
 FUNC_2(&VAR_6->clientlist);
 FUNC_2(&VAR_6->vblank_event_list);

 FUNC_25(&VAR_6->event_lock);
 FUNC_23(&VAR_6->struct_mutex);
 FUNC_23(&VAR_6->filelist_mutex);
 FUNC_23(&VAR_6->clientlist_mutex);
 FUNC_23(&VAR_6->master_mutex);

 VAR_6->anon_inode = FUNC_9();
 if (FUNC_3(VAR_6->anon_inode)) {
  VAR_9 = FUNC_4(VAR_6->anon_inode);
  FUNC_1("Cannot allocate anonymous inode: %d\n", VAR_9);
  goto err_free;
 }

 if (FUNC_6(VAR_6, VAR_1)) {
  VAR_9 = FUNC_18(VAR_6, VAR_3);
  if (VAR_9)
   goto err_minors;
 }

 VAR_9 = FUNC_18(VAR_6, VAR_2);
 if (VAR_9)
  goto err_minors;

 VAR_9 = FUNC_12(VAR_6);
 if (VAR_9)
  goto err_minors;

 FUNC_14(VAR_6);

 if (FUNC_6(VAR_6, VAR_0)) {
  VAR_9 = FUNC_11(VAR_6);
  if (VAR_9) {
   FUNC_1("Cannot initialize graphics execution manager (GEM)\n");
   goto err_ctxbitmap;
  }
 }

 VAR_9 = FUNC_7(VAR_6, FUNC_5(VAR_8));
 if (VAR_9)
  goto err_setunique;

 return 0;

err_setunique:
 if (FUNC_6(VAR_6, VAR_0))
  FUNC_10(VAR_6);
err_ctxbitmap:
 FUNC_13(VAR_6);
 FUNC_17(VAR_6);
err_minors:
 FUNC_19(VAR_6, VAR_2);
 FUNC_19(VAR_6, VAR_3);
 FUNC_8(VAR_6->anon_inode);
err_free:
 FUNC_24(VAR_6->dev);
 FUNC_22(&VAR_6->master_mutex);
 FUNC_22(&VAR_6->clientlist_mutex);
 FUNC_22(&VAR_6->filelist_mutex);
 FUNC_22(&VAR_6->struct_mutex);
 FUNC_15(VAR_6);
 return VAR_9;
}

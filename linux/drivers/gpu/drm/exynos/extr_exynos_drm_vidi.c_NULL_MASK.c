
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidi_context {int connected; int drm_dev; struct edid* raw_edid; int dev; } ;
struct edid {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_exynos_vidi_connection {int connection; scalar_t__ edid; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vidi_context* FUNC_1 (int ) ;
 struct edid* FUNC_2 (struct edid*) ;
 int FUNC_3 (struct edid*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct edid*) ;

int FUNC_6(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 struct vidi_context *VAR_6 = FUNC_1(VAR_3->dev);
 struct drm_exynos_vidi_connection *VAR_7 = VAR_4;

 if (!VAR_7) {
  FUNC_0(VAR_6->dev,
      "user data for vidi is null.\n");
  return -VAR_0;
 }

 if (VAR_7->connection > 1) {
  FUNC_0(VAR_6->dev,
      "connection should be 0 or 1.\n");
  return -VAR_0;
 }

 if (VAR_6->connected == VAR_7->connection) {
  FUNC_0(VAR_6->dev,
      "same connection request.\n");
  return -VAR_0;
 }

 if (VAR_7->connection) {
  struct edid *VAR_8;

  VAR_8 = (struct edid *)(unsigned long)VAR_7->edid;
  if (!FUNC_3(VAR_8)) {
   FUNC_0(VAR_6->dev,
       "edid data is invalid.\n");
   return -VAR_0;
  }
  VAR_6->raw_edid = FUNC_2(VAR_8);
  if (!VAR_6->raw_edid) {
   FUNC_0(VAR_6->dev,
       "failed to allocate raw_edid.\n");
   return -VAR_1;
  }
 } else {




  if (VAR_6->raw_edid && VAR_6->raw_edid !=
    (struct edid *)VAR_2) {
   FUNC_5(VAR_6->raw_edid);
   VAR_6->raw_edid = ((void*)0);
  }
 }

 VAR_6->connected = VAR_7->connection;
 FUNC_4(VAR_6->drm_dev);

 return 0;
}

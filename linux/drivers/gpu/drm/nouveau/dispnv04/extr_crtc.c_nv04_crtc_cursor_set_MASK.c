
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int chipset; } ;
struct TYPE_9__ {TYPE_1__ info; } ;
struct TYPE_10__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; struct drm_device* dev; } ;
struct TYPE_12__ {int (* show ) (struct nouveau_crtc*,int) ;int offset; int (* set_offset ) (struct nouveau_crtc*,int ) ;TYPE_6__* nvbo; int (* hide ) (struct nouveau_crtc*,int) ;} ;
struct nouveau_crtc {TYPE_5__ cursor; } ;
struct nouveau_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dev; } ;
struct TYPE_11__ {int offset; } ;
struct TYPE_13__ {TYPE_4__ bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct nouveau_bo*) ;
 int FUNC_3 (struct nouveau_bo*) ;
 struct nouveau_crtc* FUNC_4 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_5 (int ) ;
 struct nouveau_bo* FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct drm_device*,struct nouveau_bo*,TYPE_6__*) ;
 int FUNC_8 (struct drm_device*,struct nouveau_bo*,TYPE_6__*) ;
 int FUNC_9 (struct nouveau_crtc*,int) ;
 int FUNC_10 (struct nouveau_crtc*,int ) ;
 int FUNC_11 (struct nouveau_crtc*,int) ;

__attribute__((used)) static int
FUNC_12(struct drm_crtc *VAR_2, struct drm_file *VAR_3,
       uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_5(VAR_2->dev);
 struct drm_device *VAR_8 = VAR_7->dev;
 struct nouveau_crtc *VAR_9 = FUNC_4(VAR_2);
 struct nouveau_bo *VAR_10 = ((void*)0);
 struct drm_gem_object *VAR_11;
 int VAR_12 = 0;

 if (!VAR_4) {
  VAR_9->cursor.hide(VAR_9, 1);
  return 0;
 }

 if (VAR_5 != 64 || VAR_6 != 64)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_11)
  return -VAR_1;
 VAR_10 = FUNC_6(VAR_11);

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  goto out;

 if (VAR_7->client.device.info.chipset >= 0x11)
  FUNC_8(VAR_8, VAR_10, VAR_9->cursor.nvbo);
 else
  FUNC_7(VAR_8, VAR_10, VAR_9->cursor.nvbo);

 FUNC_3(VAR_10);
 VAR_9->cursor.offset = VAR_9->cursor.nvbo->bo.offset;
 VAR_9->cursor.set_offset(VAR_9, VAR_9->cursor.offset);
 VAR_9->cursor.show(VAR_9, 1);
out:
 FUNC_1(VAR_11);
 return VAR_12;
}

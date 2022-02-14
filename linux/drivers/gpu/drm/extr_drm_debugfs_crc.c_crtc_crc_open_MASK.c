
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct drm_crtc* i_private; } ;
struct file {int dummy; } ;
struct drm_crtc_crc_entry {int dummy; } ;
struct drm_crtc_crc {int opened; size_t values_cnt; int lock; int source; struct drm_crtc_crc_entry* entries; } ;
struct drm_crtc {TYPE_2__* funcs; int mutex; TYPE_1__* state; int dev; struct drm_crtc_crc crc; } ;
struct TYPE_4__ {int (* verify_crc_source ) (struct drm_crtc*,int ,size_t*) ;int (* set_crc_source ) (struct drm_crtc*,int ) ;} ;
struct TYPE_3__ {int active; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc_crc*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct drm_crtc_crc_entry* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct drm_crtc_crc_entry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_crtc*,int ,size_t*) ;
 int FUNC_10 (struct drm_crtc*,int ) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct file *VAR_8)
{
 struct drm_crtc *VAR_9 = VAR_7->i_private;
 struct drm_crtc_crc *VAR_10 = &VAR_9->crc;
 struct drm_crtc_crc_entry *VAR_11 = ((void*)0);
 size_t VAR_12;
 int VAR_13 = 0;

 if (FUNC_2(VAR_9->dev)) {
  VAR_13 = FUNC_3(&VAR_9->mutex);
  if (VAR_13)
   return VAR_13;

  if (!VAR_9->state->active)
   VAR_13 = -VAR_4;
  FUNC_4(&VAR_9->mutex);

  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = VAR_9->funcs->verify_crc_source(VAR_9, VAR_10->source, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (FUNC_0(VAR_12 > VAR_1))
  return -VAR_3;

 if (FUNC_0(VAR_12 == 0))
  return -VAR_3;

 VAR_11 = FUNC_5(VAR_0, sizeof(*VAR_11), VAR_6);
 if (!VAR_11)
  return -VAR_5;

 FUNC_7(&VAR_10->lock);
 if (!VAR_10->opened) {
  VAR_10->opened = 1;
  VAR_10->entries = VAR_11;
  VAR_10->values_cnt = VAR_12;
 } else {
  VAR_13 = -VAR_2;
 }
 FUNC_8(&VAR_10->lock);

 if (VAR_13) {
  FUNC_6(VAR_11);
  return VAR_13;
 }

 VAR_13 = VAR_9->funcs->set_crc_source(VAR_9, VAR_10->source);
 if (VAR_13)
  goto err;

 return 0;

err:
 FUNC_7(&VAR_10->lock);
 FUNC_1(VAR_10);
 FUNC_8(&VAR_10->lock);
 return VAR_13;
}

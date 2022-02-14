
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct virtio_gpu_output {TYPE_2__ info; scalar_t__ edid; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dev; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_connector*,scalar_t__) ;
 int FUNC_2 (struct drm_connector*,int ,int ) ;
 struct virtio_gpu_output* FUNC_3 (struct drm_connector*) ;
 struct drm_display_mode* FUNC_4 (int ,int,int,int,int,int,int) ;
 int FUNC_5 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_6 (struct drm_connector*,int,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct drm_connector *VAR_5)
{
 struct virtio_gpu_output *VAR_6 =
  FUNC_3(VAR_5);
 struct drm_display_mode *VAR_7 = ((void*)0);
 int VAR_8, VAR_9, VAR_10;

 if (VAR_6->edid) {
  VAR_8 = FUNC_1(VAR_5, VAR_6->edid);
  if (VAR_8)
   return VAR_8;
 }

 VAR_9 = FUNC_7(VAR_6->info.r.width);
 VAR_10 = FUNC_7(VAR_6->info.r.height);
 VAR_8 = FUNC_2(VAR_5, VAR_2, VAR_4);

 if (VAR_9 == 0 || VAR_10 == 0) {
  VAR_9 = VAR_1;
  VAR_10 = VAR_3;
  FUNC_6(VAR_5, VAR_1, VAR_3);
 } else {
  FUNC_0("add mode: %dx%d\n", VAR_9, VAR_10);
  VAR_7 = FUNC_4(VAR_5->dev, VAR_9, VAR_10, 60,
        0, 0, 0);
  VAR_7->type |= VAR_0;
  FUNC_5(VAR_5, VAR_7);
  VAR_8++;
 }

 return VAR_8;
}

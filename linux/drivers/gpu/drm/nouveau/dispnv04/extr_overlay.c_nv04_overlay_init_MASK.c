
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int base; } ;
struct TYPE_5__ {void* brightness; void* colorkey; } ;
struct nouveau_plane {int colorkey; int brightness; TYPE_2__ base; TYPE_1__ props; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct drm_device*,TYPE_2__*,int,int *,int ,int,int) ;
 void* FUNC_5 (struct drm_device*,int ,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_6 (struct nouveau_plane*) ;
 struct nouveau_plane* FUNC_7 (int,int ) ;
 struct nouveau_drm* FUNC_8 (struct drm_device*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_8(VAR_3);
 struct nouveau_plane *VAR_5 = FUNC_7(sizeof(struct nouveau_plane), VAR_0);
 int VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = FUNC_4(VAR_3, &VAR_5->base, 1 ,
        &VAR_2,
        VAR_1, 2, 0);
 if (VAR_6)
  goto err;


 VAR_5->props.colorkey = FUNC_5(
   VAR_3, 0, "colorkey", 0, 0x01ffffff);
 VAR_5->props.brightness = FUNC_5(
   VAR_3, 0, "brightness", 0, 1024);
 if (!VAR_5->props.colorkey ||
     !VAR_5->props.brightness)
  goto cleanup;

 VAR_5->colorkey = 0;
 FUNC_1(&VAR_5->base.base,
       VAR_5->props.colorkey, VAR_5->colorkey);

 VAR_5->brightness = 512;
 FUNC_1(&VAR_5->base.base,
       VAR_5->props.brightness, VAR_5->brightness);

 FUNC_3(&VAR_5->base);
 return;
cleanup:
 FUNC_2(&VAR_5->base);
err:
 FUNC_6(VAR_5);
 FUNC_0(VAR_4, "Failed to create plane\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_encoder {TYPE_1__ base; scalar_t__ possible_clones; int possible_crtcs; } ;
struct drm_device {int dev; } ;
struct drm_bridge {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_encoder* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_6, struct drm_bridge *VAR_7)
{
 struct drm_encoder *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->possible_crtcs = VAR_0;
 VAR_8->possible_clones = 0;

 FUNC_4(VAR_6, VAR_8, &VAR_5,
    VAR_1, ((void*)0));

 VAR_9 = FUNC_2(VAR_8, VAR_7, ((void*)0));
 if (VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_2;
 }

 FUNC_0("Bridge encoder:%d created\n", VAR_8->base.id);

 return 0;
}

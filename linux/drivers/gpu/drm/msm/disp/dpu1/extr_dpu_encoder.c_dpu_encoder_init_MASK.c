
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_device {int dev; } ;
struct dpu_encoder_virt {int enabled; struct drm_encoder base; int enc_spinlock; } ;


 int VAR_0 ;
 struct drm_encoder* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct dpu_encoder_virt*) ;
 struct dpu_encoder_virt* FUNC_2 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int,int *) ;
 int FUNC_5 (int *) ;

struct drm_encoder *FUNC_6(struct drm_device *VAR_4,
  int VAR_5)
{
 struct dpu_encoder_virt *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(VAR_0);

 VAR_7 = FUNC_4(VAR_4, &VAR_6->base, &VAR_2,
   VAR_5, ((void*)0));
 if (VAR_7) {
  FUNC_1(VAR_4->dev, VAR_6);
  return FUNC_0(VAR_7);
 }

 FUNC_3(&VAR_6->base, &VAR_3);

 FUNC_5(&VAR_6->enc_spinlock);
 VAR_6->enabled = 0;

 return &VAR_6->base;
}

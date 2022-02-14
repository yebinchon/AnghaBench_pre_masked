
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; } ;
struct sti_tvout_encoder {struct drm_encoder encoder; struct sti_tvout* tvout; } ;
struct sti_tvout {int dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sti_tvout_encoder* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct drm_encoder *
FUNC_3(struct drm_device *VAR_5,
        struct sti_tvout *VAR_6)
{
 struct sti_tvout_encoder *VAR_7;
 struct drm_encoder *VAR_8;

 VAR_7 = FUNC_0(VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->tvout = VAR_6;

 VAR_8 = &VAR_7->encoder;

 VAR_8->possible_crtcs = VAR_1;

 FUNC_2(VAR_5, VAR_8,
    &VAR_4, VAR_0,
    ((void*)0));

 FUNC_1(VAR_8, &VAR_3);

 return VAR_8;
}

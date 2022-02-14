
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output; } ;
struct nouveau_encoder {int last_dpms; TYPE_1__ restore; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_encoder* FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_2)
{
 struct nouveau_encoder *VAR_3 = FUNC_1(VAR_2);
 struct drm_device *VAR_4 = VAR_2->dev;

 if (FUNC_3(VAR_4))
  FUNC_0(VAR_4, 0, VAR_1 + FUNC_2(VAR_2),
         VAR_3->restore.output);

 VAR_3->last_dpms = VAR_0;
}

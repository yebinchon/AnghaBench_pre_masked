
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output; } ;
struct nouveau_encoder {TYPE_1__ restore; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct nouveau_encoder* FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_1)
{
 struct nouveau_encoder *VAR_2 = FUNC_1(VAR_1);
 struct drm_device *VAR_3 = VAR_1->dev;

 if (FUNC_3(VAR_3))
  VAR_2->restore.output = FUNC_0(VAR_3, 0, VAR_0 +
         FUNC_2(VAR_1));
}

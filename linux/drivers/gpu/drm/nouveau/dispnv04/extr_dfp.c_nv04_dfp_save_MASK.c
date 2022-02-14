
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct nouveau_encoder {int dcb; TYPE_1__ restore; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 struct nouveau_encoder* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_device*,int ) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0)
{
 struct nouveau_encoder *VAR_1 = FUNC_0(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;

 if (FUNC_2(VAR_2))
  VAR_1->restore.head =
   FUNC_1(VAR_2, VAR_1->dcb);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct nouveau_cli {int head; int mutex; scalar_t__ abi16; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (struct nouveau_cli*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 struct nouveau_cli* FUNC_5 (struct drm_file*) ;
 int FUNC_6 (struct nouveau_cli*) ;
 struct nouveau_drm* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct nouveau_cli *VAR_2 = FUNC_5(VAR_1);
 struct nouveau_drm *VAR_3 = FUNC_7(VAR_0);

 FUNC_8(VAR_0->dev);

 FUNC_2(&VAR_2->mutex);
 if (VAR_2->abi16)
  FUNC_4(VAR_2->abi16);
 FUNC_3(&VAR_2->mutex);

 FUNC_2(&VAR_3->client.mutex);
 FUNC_1(&VAR_2->head);
 FUNC_3(&VAR_3->client.mutex);

 FUNC_6(VAR_2);
 FUNC_0(VAR_2);
 FUNC_9(VAR_0->dev);
 FUNC_10(VAR_0->dev);
}

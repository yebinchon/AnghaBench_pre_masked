
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct TYPE_4__ {scalar_t__ family; int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; struct nvif_object object; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct nouveau_drm* FUNC_0 (void*) ;
 int FUNC_1 (struct nvif_object*,int,int) ;

__attribute__((used)) static unsigned int
FUNC_2(void *VAR_5, bool VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_5);
 struct nvif_object *VAR_8 = &VAR_7->client.device.object;

 if (VAR_7->client.device.info.family == VAR_0 &&
     VAR_7->client.device.info.chipset >= 0x4c)
  FUNC_1(VAR_8, 0x088060, VAR_6);
 else
 if (VAR_7->client.device.info.chipset >= 0x40)
  FUNC_1(VAR_8, 0x088054, VAR_6);
 else
  FUNC_1(VAR_8, 0x001854, VAR_6);

 if (VAR_6)
  return VAR_1 | VAR_2 |
         VAR_3 | VAR_4;
 else
  return VAR_3 | VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ family; int chipset; } ;
struct nvif_device {TYPE_1__ info; } ;
struct TYPE_4__ {struct nvif_device device; } ;
struct nouveau_drm {int cechan; TYPE_2__ client; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,struct nvif_device*,int ,int ,int,int *) ;
 int FUNC_2 (struct nvif_device*) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_drm *VAR_3)
{
 struct nvif_device *VAR_4 = &VAR_3->client.device;
 int VAR_5 = 0;




 if (VAR_4->info.family >= VAR_0) {
  VAR_5 = FUNC_1(VAR_3, VAR_4,
       FUNC_2(VAR_4), 0,
       1, &VAR_3->cechan);
 } else
 if (VAR_4->info.chipset >= 0xa3 &&
     VAR_4->info.chipset != 0xaa &&
     VAR_4->info.chipset != 0xac) {





  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1, VAR_2, 0,
       &VAR_3->cechan);
 }

 if (VAR_5)
  FUNC_0(VAR_3, "failed to create ce channel, %d\n", VAR_5);
}

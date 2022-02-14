
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_falcon {int user; scalar_t__ addr; TYPE_1__* owner; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;


 int FUNC_0 (struct nvkm_falcon*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct nvkm_falcon*,int,int) ;
 int FUNC_3 (struct nvkm_device*,int,scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_falcon *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->owner->device;
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1, 10, VAR_0->addr + 0x10c, 0x6, 0x0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0->user, "Falcon mem scrubbing timeout\n");
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;


 FUNC_2(VAR_0, 0x010, 0xff);

 return 0;
}

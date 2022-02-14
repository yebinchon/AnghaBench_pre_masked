
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_udevice {struct nvkm_device* device; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int mutex; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_device*) ;
 struct nvkm_udevice* FUNC_3 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_0)
{
 struct nvkm_udevice *VAR_1 = FUNC_3(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->device;
 int VAR_3 = 0;

 FUNC_0(&VAR_2->mutex);
 if (!VAR_2->refcount++) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
   VAR_2->refcount--;
   goto done;
  }
 }

done:
 FUNC_1(&VAR_2->mutex);
 return VAR_3;
}

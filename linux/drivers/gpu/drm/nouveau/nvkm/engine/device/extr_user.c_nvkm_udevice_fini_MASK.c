
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_udevice {struct nvkm_device* device; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int mutex; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 struct nvkm_udevice* FUNC_3 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_0, bool VAR_1)
{
 struct nvkm_udevice *VAR_2 = FUNC_3(VAR_0);
 struct nvkm_device *VAR_3 = VAR_2->device;
 int VAR_4 = 0;

 FUNC_0(&VAR_3->mutex);
 if (!--VAR_3->refcount) {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (VAR_4 && VAR_1) {
   VAR_3->refcount++;
   goto done;
  }
 }

done:
 FUNC_1(&VAR_3->mutex);
 return VAR_4;
}

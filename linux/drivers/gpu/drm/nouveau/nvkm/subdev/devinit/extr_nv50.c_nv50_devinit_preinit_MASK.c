
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_devinit {int post; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*) ;
 unsigned long long FUNC_1 (struct nvkm_devinit*) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

void
FUNC_3(struct nvkm_devinit *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;





 if (!VAR_1->post) {
  u64 VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 & (1ULL << VAR_0))
   VAR_1->post = 1;
 }




 if (!VAR_1->post) {
  if (!FUNC_2(VAR_3, 0, 0x00) &&
      !FUNC_2(VAR_3, 0, 0x1a)) {
   FUNC_0(VAR_2, "adaptor not initialised\n");
   VAR_1->post = 1;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_secboot {scalar_t__ wpr_size; int wpr_addr; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
struct acr_r352 {TYPE_1__* ls_blob; } ;
struct TYPE_2__ {int addr; int size; } ;


 int FUNC_0 (struct nvkm_device const*,int) ;
 int FUNC_1 (struct nvkm_device const*,int,int) ;

__attribute__((used)) static bool
FUNC_2(const struct acr_r352 *VAR_0, const struct nvkm_secboot *VAR_1)
{
 const struct nvkm_subdev *VAR_2 = &VAR_1->subdev;
 const struct nvkm_device *VAR_3 = VAR_2->device;
 u64 VAR_4, VAR_5;
 u64 VAR_6, VAR_7;

 FUNC_1(VAR_3, 0x100cd4, 0x2);
 VAR_4 = (FUNC_0(VAR_3, 0x100cd4) & ~0xff);
 VAR_4 <<= 8;
 FUNC_1(VAR_3, 0x100cd4, 0x3);
 VAR_5 = (FUNC_0(VAR_3, 0x100cd4) & ~0xff);
 VAR_5 <<= 8;

 if (VAR_1->wpr_size != 0) {
  VAR_6 = VAR_1->wpr_addr;
  VAR_7 = VAR_6 + VAR_1->wpr_size;
 } else {
  VAR_6 = VAR_0->ls_blob->addr;
  VAR_7 = VAR_6 + VAR_0->ls_blob->size;
 }

 return (VAR_4 >= VAR_6 && VAR_4 < VAR_7 &&
  VAR_5 > VAR_6 && VAR_5 <= VAR_7);
}

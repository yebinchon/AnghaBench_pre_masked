
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_devinit {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_devinit {int r001540; TYPE_2__ base; } ;


 int* VAR_0 ;
 int FUNC_0 (int) ;
 struct nv50_devinit* FUNC_1 (struct nvkm_devinit*) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nvkm_devinit *VAR_1, u32 VAR_2)
{
 struct nv50_devinit *VAR_3 = FUNC_1(VAR_1);
 struct nvkm_device *VAR_4 = VAR_3->base.subdev.device;
 u32 *VAR_5 = VAR_0;
 while (VAR_5[0]) {
  if (VAR_2 >= VAR_5[0] && VAR_2 <= VAR_5[1]) {
   u32 VAR_6 = (VAR_2 / VAR_5[2]) & 7;
   if (!VAR_3->r001540)
    VAR_3->r001540 = FUNC_2(VAR_4, 0x001540);
   if (VAR_6 >= FUNC_0((VAR_3->r001540 >> 16) & 0xff))
    return ~0;
   return VAR_2;
  }
  VAR_5 += 3;
 }

 return VAR_2;
}

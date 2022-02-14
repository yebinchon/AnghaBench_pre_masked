
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int chipset; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nv50_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nv50_clk*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nv50_clk *VAR_1, u32 VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_1->base.subdev.device;
 u32 VAR_4 = FUNC_1(VAR_3, 0x00c040);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_2 + 0);
 u32 VAR_6 = FUNC_1(VAR_3, VAR_2 + 4);
 u32 VAR_7 = FUNC_2(VAR_1, VAR_2);
 u32 VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_2 == 0x004028 && (VAR_4 & 0x00100000)) {

  if (VAR_3->chipset != 0xa0)
   return FUNC_0(&VAR_1->base, VAR_0);
 }

 VAR_10 = (VAR_6 & 0xff000000) >> 24;
 VAR_12 = (VAR_6 & 0x00ff0000) >> 16;
 VAR_9 = (VAR_6 & 0x0000ff00) >> 8;
 VAR_11 = (VAR_6 & 0x000000ff);
 if ((VAR_5 & 0x80000000) && VAR_11) {
  VAR_8 = VAR_7 * VAR_9 / VAR_11;
  if ((VAR_5 & 0x40000100) == 0x40000000) {
   if (VAR_12)
    VAR_8 = VAR_8 * VAR_10 / VAR_12;
   else
    VAR_8 = 0;
  }
 }

 return VAR_8;
}

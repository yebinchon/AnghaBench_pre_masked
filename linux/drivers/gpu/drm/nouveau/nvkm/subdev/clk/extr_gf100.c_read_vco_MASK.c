
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gf100_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct gf100_clk *VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->base.subdev.device;
 u32 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (!(VAR_5 & 0x00000100))
  return FUNC_0(&VAR_2->base, VAR_0);
 return FUNC_0(&VAR_2->base, VAR_1);
}


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
struct gk20a_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_device*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct gk20a_clk *VAR_2)
{
 struct nvkm_device *VAR_3 = VAR_2->base.subdev.device;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 return VAR_4 & VAR_1;
}

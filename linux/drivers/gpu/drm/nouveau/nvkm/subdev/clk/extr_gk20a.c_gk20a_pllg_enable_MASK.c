
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct nvkm_device*,int ,int ,int ) ;
 int FUNC_2 (struct nvkm_device*,int ) ;
 scalar_t__ FUNC_3 (struct nvkm_device*,int,int ,int ,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct gk20a_clk *VAR_7)
{
 struct nvkm_device *VAR_8 = VAR_7->base.subdev.device;
 u32 VAR_9;

 FUNC_1(VAR_8, VAR_1, VAR_2, VAR_2);
 FUNC_2(VAR_8, VAR_1);


 VAR_9 = FUNC_2(VAR_8, VAR_1);
 if (VAR_9 & VAR_4) {
  VAR_9 &= ~VAR_4;
  FUNC_4(VAR_8, VAR_1, VAR_9);
 }


 if (FUNC_3(VAR_8, 300, VAR_1, VAR_3,
      VAR_3) < 0)
  return -VAR_0;


 FUNC_1(VAR_8, VAR_5, FUNC_0(VAR_6),
  FUNC_0(VAR_6));

 return 0;
}

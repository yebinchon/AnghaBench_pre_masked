
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct gk20a_pll {int m; int n; int pl; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct gk20a_clk {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_device*,int ,int) ;

void
FUNC_2(struct gk20a_clk *VAR_7, const struct gk20a_pll *VAR_8)
{
 struct nvkm_device *VAR_9 = VAR_7->base.subdev.device;
 u32 VAR_10;

 VAR_10 = (VAR_8->m & FUNC_0(VAR_2)) << VAR_1;
 VAR_10 |= (VAR_8->n & FUNC_0(VAR_4)) << VAR_3;
 VAR_10 |= (VAR_8->pl & FUNC_0(VAR_6)) << VAR_5;
 FUNC_1(VAR_9, VAR_0, VAR_10);
}

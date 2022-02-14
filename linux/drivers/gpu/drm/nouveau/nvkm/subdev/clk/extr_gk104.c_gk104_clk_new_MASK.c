
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct gk104_clk {struct nvkm_clk base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gk104_clk* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,struct nvkm_clk*) ;

int
FUNC_2(struct nvkm_device *VAR_3, int VAR_4, struct nvkm_clk **VAR_5)
{
 struct gk104_clk *VAR_6;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 *VAR_5 = &VAR_6->base;

 return FUNC_1(&VAR_2, VAR_3, VAR_4, 1, &VAR_6->base);
}

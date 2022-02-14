
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct gk20a_clk {int div_to_pl; int pl_to_div; struct nvkm_clk base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_device*,int,int *,int *,struct gk20a_clk*) ;
 int VAR_4 ;
 struct gk20a_clk* FUNC_1 (int,int ) ;
 int VAR_5 ;

int
FUNC_2(struct nvkm_device *VAR_6, int VAR_7, struct nvkm_clk **VAR_8)
{
 struct gk20a_clk *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 *VAR_8 = &VAR_9->base;

 VAR_10 = FUNC_0(VAR_6, VAR_7, &VAR_3, &VAR_4,
         VAR_9);

 VAR_9->pl_to_div = VAR_5;
 VAR_9->div_to_pl = VAR_2;

 return VAR_10;
}

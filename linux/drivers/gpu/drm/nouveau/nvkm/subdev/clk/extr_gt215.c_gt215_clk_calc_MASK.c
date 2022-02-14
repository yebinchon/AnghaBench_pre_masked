
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_cstate {int * domain; } ;
struct nvkm_clk {int dummy; } ;
struct gt215_clk_info {scalar_t__ pll; } ;
struct gt215_clk {struct gt215_clk_info* eng; int base; } ;


 int FUNC_0 (struct gt215_clk*,struct nvkm_cstate*,int,int,size_t) ;
 int FUNC_1 (struct gt215_clk*,struct nvkm_cstate*) ;
 struct gt215_clk* FUNC_2 (struct nvkm_clk*) ;
 int FUNC_3 (int *,int,int ,struct gt215_clk_info*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct nvkm_clk *VAR_5, struct nvkm_cstate *VAR_6)
{
 struct gt215_clk *VAR_7 = FUNC_2(VAR_5);
 struct gt215_clk_info *VAR_8 = &VAR_7->eng[VAR_0];
 int VAR_9;

 if ((VAR_9 = FUNC_0(VAR_7, VAR_6, 0x10, 0x4200, VAR_0)) ||
     (VAR_9 = FUNC_0(VAR_7, VAR_6, 0x11, 0x4220, VAR_3)) ||
     (VAR_9 = FUNC_0(VAR_7, VAR_6, 0x20, 0x0000, VAR_2)) ||
     (VAR_9 = FUNC_0(VAR_7, VAR_6, 0x21, 0x0000, VAR_4)) ||
     (VAR_9 = FUNC_1(VAR_7, VAR_6)))
  return VAR_9;



 if (VAR_8->pll) {
  VAR_9 = FUNC_3(&VAR_7->base, 0x10,
         VAR_6->domain[VAR_1],
         &VAR_7->eng[VAR_1]);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}

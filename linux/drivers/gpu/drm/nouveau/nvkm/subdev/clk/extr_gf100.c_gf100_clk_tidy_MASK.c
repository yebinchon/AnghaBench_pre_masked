
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int dummy; } ;
struct gf100_clk {int eng; } ;


 struct gf100_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_clk *VAR_0)
{
 struct gf100_clk *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->eng, 0x00, sizeof(VAR_1->eng));
}

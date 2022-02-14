
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_device {int dummy; } ;
struct nvkm_clk {int pll_prog; int pll_calc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct nvkm_device*,int,int,struct nvkm_clk**) ;

int
FUNC_1(struct nvkm_device *VAR_3, int VAR_4, struct nvkm_clk **VAR_5)
{
 int VAR_6 = FUNC_0(&VAR_0, VAR_3, VAR_4, 0, VAR_5);
 if (VAR_6 == 0) {
  (*VAR_5)->pll_calc = VAR_1;
  (*VAR_5)->pll_prog = VAR_2;
 }
 return VAR_6;
}

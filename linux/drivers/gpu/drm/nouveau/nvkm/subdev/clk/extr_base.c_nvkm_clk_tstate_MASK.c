
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nvkm_clk {scalar_t__ temp; } ;


 int FUNC_0 (struct nvkm_clk*,int) ;

int
FUNC_1(struct nvkm_clk *VAR_0, u8 VAR_1)
{
 if (VAR_0->temp == VAR_1)
  return 0;
 VAR_0->temp = VAR_1;
 return FUNC_0(VAR_0, 0);
}

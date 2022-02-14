
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_cstate {int * domain; } ;
struct gt215_clk {int * eng; int base; } ;


 int FUNC_0 (int *,int,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct gt215_clk *VAR_0, struct nvkm_cstate *VAR_1,
  int VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(&VAR_0->base, VAR_2, VAR_3, VAR_1->domain[VAR_4],
     &VAR_0->eng[VAR_4]);
 if (VAR_5 >= 0)
  return 0;
 return VAR_5;
}

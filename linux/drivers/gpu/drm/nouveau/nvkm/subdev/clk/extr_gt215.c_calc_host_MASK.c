
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_cstate {int* domain; } ;
struct gt215_clk_info {int host_out; scalar_t__ clk; } ;
struct gt215_clk {int base; struct gt215_clk_info* eng; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,struct gt215_clk_info*) ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct gt215_clk *VAR_3, struct nvkm_cstate *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = VAR_4->domain[VAR_2];
 struct gt215_clk_info *VAR_7 = &VAR_3->eng[VAR_2];

 if (VAR_6 == 277000) {
  VAR_7->clk = 0;
  VAR_7->host_out = VAR_0;
  return 0;
 }

 VAR_7->host_out = VAR_1;

 VAR_5 = FUNC_0(&VAR_3->base, 0x1d, VAR_6, VAR_7);
 if (VAR_5 >= 0)
  return 0;

 return VAR_5;
}

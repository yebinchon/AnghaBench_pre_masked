
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_cstate {int* domain; } ;
struct nvkm_clk {int dummy; } ;
struct nv40_clk {int npll_ctrl; int npll_coef; int spll; int ctrl; } ;


 struct nv40_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (struct nv40_clk*,int,int,int*,int*,int*,int*,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_clk *VAR_2, struct nvkm_cstate *VAR_3)
{
 struct nv40_clk *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_3->domain[VAR_0];
 int VAR_6 = VAR_3->domain[VAR_1];
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;


 VAR_12 = FUNC_1(VAR_4, 0x004000, VAR_5,
    &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_9 == VAR_10) {
  VAR_4->npll_ctrl = 0x80000100 | (VAR_11 << 16);
  VAR_4->npll_coef = (VAR_7 << 8) | VAR_8;
 } else {
  VAR_4->npll_ctrl = 0xc0000000 | (VAR_11 << 16);
  VAR_4->npll_coef = (VAR_9 << 24) | (VAR_10 << 16) | (VAR_7 << 8) | VAR_8;
 }


 if (VAR_6 && VAR_6 != VAR_5) {
  VAR_12 = FUNC_1(VAR_4, 0x004008, VAR_6,
     &VAR_7, &VAR_8, ((void*)0), ((void*)0), &VAR_11);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_4->spll = 0xc0000000 | (VAR_11 << 16) | (VAR_7 << 8) | VAR_8;
  VAR_4->ctrl = 0x00000223;
 } else {
  VAR_4->spll = 0x00000000;
  VAR_4->ctrl = 0x00000333;
 }

 return 0;
}

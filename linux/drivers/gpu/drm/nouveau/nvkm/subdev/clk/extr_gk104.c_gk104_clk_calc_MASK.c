
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_cstate {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct gk104_clk {int dummy; } ;


 int FUNC_0 (struct gk104_clk*,struct nvkm_cstate*,int,int ) ;
 struct gk104_clk* FUNC_1 (struct nvkm_clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_clk *VAR_7, struct nvkm_cstate *VAR_8)
{
 struct gk104_clk *VAR_9 = FUNC_1(VAR_7);
 int VAR_10;

 if ((VAR_10 = FUNC_0(VAR_9, VAR_8, 0x00, VAR_0)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x01, VAR_5)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x02, VAR_3)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x07, VAR_2)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x08, VAR_1)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x0c, VAR_4)) ||
     (VAR_10 = FUNC_0(VAR_9, VAR_8, 0x0e, VAR_6)))
  return VAR_10;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_cstate {int dummy; } ;
struct nvkm_clk {int dummy; } ;
struct gf100_clk {int dummy; } ;


 int FUNC_0 (struct gf100_clk*,struct nvkm_cstate*,int,int ) ;
 struct gf100_clk* FUNC_1 (struct nvkm_clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_clk *VAR_8, struct nvkm_cstate *VAR_9)
{
 struct gf100_clk *VAR_10 = FUNC_1(VAR_8);
 int VAR_11;

 if ((VAR_11 = FUNC_0(VAR_10, VAR_9, 0x00, VAR_1)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x01, VAR_6)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x02, VAR_4)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x07, VAR_3)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x08, VAR_2)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x09, VAR_0)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x0c, VAR_5)) ||
     (VAR_11 = FUNC_0(VAR_10, VAR_9, 0x0e, VAR_7)))
  return VAR_11;

 return 0;
}

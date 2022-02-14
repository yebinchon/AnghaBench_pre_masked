
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_cstate {scalar_t__* domain; } ;
struct gk104_clk_info {int dsrc; int ddiv; int mdiv; int ssel; scalar_t__ freq; int coef; } ;
struct gk104_clk {struct gk104_clk_info* eng; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct gk104_clk*,int,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct gk104_clk*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (struct gk104_clk*,int,scalar_t__,scalar_t__*,scalar_t__*) ;
 size_t VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct gk104_clk *VAR_1,
  struct nvkm_cstate *VAR_2, int VAR_3, int VAR_4)
{
 struct gk104_clk_info *VAR_5 = &VAR_1->eng[VAR_3];
 u32 VAR_6 = VAR_2->domain[VAR_4];
 u32 VAR_7, VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12 = 0;


 if (!VAR_6)
  return 0;


 VAR_11 = FUNC_3(VAR_1, VAR_3, VAR_6, &VAR_7, &VAR_8);
 VAR_11 = FUNC_1(VAR_1, VAR_3, VAR_11, VAR_6, &VAR_9);


 if (VAR_11 != VAR_6 && (0x0000ff87 & (1 << VAR_3))) {
  if (VAR_3 <= 7)
   VAR_12 = FUNC_2(VAR_1, VAR_3, VAR_6, &VAR_5->coef);
  else
   VAR_12 = VAR_2->domain[VAR_0];
  VAR_12 = FUNC_1(VAR_1, VAR_3, VAR_12, VAR_6, &VAR_10);
 }


 if (FUNC_0((int)VAR_6 - VAR_11) <= FUNC_0((int)VAR_6 - VAR_12)) {
  VAR_5->dsrc = VAR_7;
  if (VAR_8) {
   VAR_5->ddiv |= 0x80000000;
   VAR_5->ddiv |= VAR_8;
  }
  if (VAR_9) {
   VAR_5->mdiv |= 0x80000000;
   VAR_5->mdiv |= VAR_9;
  }
  VAR_5->ssel = 0;
  VAR_5->freq = VAR_11;
 } else {
  if (VAR_10) {
   VAR_5->mdiv |= 0x80000000;
   VAR_5->mdiv |= VAR_10 << 8;
  }
  VAR_5->ssel = (1 << VAR_3);
  VAR_5->dsrc = 0x40000100;
  VAR_5->freq = VAR_12;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dpll_hw_state {int cfgcr2; int cfgcr1; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct intel_dpll_hw_state *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_5->cfgcr2 & VAR_3;
 VAR_8 = VAR_5->cfgcr2 & VAR_2;

 if (VAR_5->cfgcr2 & FUNC_0(1))
  VAR_7 = (VAR_5->cfgcr2 & VAR_4) >> 8;
 else
  VAR_7 = 1;


 switch (VAR_6) {
 case 131:
  VAR_6 = 1;
  break;
 case 130:
  VAR_6 = 2;
  break;
 case 129:
  VAR_6 = 3;
  break;
 case 128:
  VAR_6 = 7;
  break;
 }

 switch (VAR_8) {
 case 132:
  VAR_8 = 5;
  break;
 case 134:
  VAR_8 = 2;
  break;
 case 133:
  VAR_8 = 3;
  break;
 case 135:
  VAR_8 = 1;
  break;
 }

 VAR_9 = (VAR_5->cfgcr1 & VAR_1)
  * 24 * 1000;

 VAR_9 += (((VAR_5->cfgcr1 & VAR_0) >> 9)
       * 24 * 1000) / 0x8000;

 if (FUNC_1(VAR_6 == 0 || VAR_7 == 0 || VAR_8 == 0))
  return 0;

 return VAR_9 / (VAR_6 * VAR_7 * VAR_8 * 5);
}

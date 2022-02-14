
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
typedef int u16 ;
struct clk_hw_omap {TYPE_1__* dpll_data; } ;
struct TYPE_2__ {int clk_ref; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long) ;

__attribute__((used)) static u16 FUNC_2(struct clk_hw_omap *VAR_0, u8 VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_0->dpll_data->clk_ref) / VAR_1;

 FUNC_1("clock: fint is %lu\n", VAR_2);

 if (VAR_2 >= 750000 && VAR_2 <= 1000000)
  VAR_3 = 0x3;
 else if (VAR_2 > 1000000 && VAR_2 <= 1250000)
  VAR_3 = 0x4;
 else if (VAR_2 > 1250000 && VAR_2 <= 1500000)
  VAR_3 = 0x5;
 else if (VAR_2 > 1500000 && VAR_2 <= 1750000)
  VAR_3 = 0x6;
 else if (VAR_2 > 1750000 && VAR_2 <= 2100000)
  VAR_3 = 0x7;
 else if (VAR_2 > 7500000 && VAR_2 <= 10000000)
  VAR_3 = 0xB;
 else if (VAR_2 > 10000000 && VAR_2 <= 12500000)
  VAR_3 = 0xC;
 else if (VAR_2 > 12500000 && VAR_2 <= 15000000)
  VAR_3 = 0xD;
 else if (VAR_2 > 15000000 && VAR_2 <= 17500000)
  VAR_3 = 0xE;
 else if (VAR_2 > 17500000 && VAR_2 <= 21000000)
  VAR_3 = 0xF;
 else
  FUNC_1("clock: unknown freqsel setting for %d\n", VAR_1);

 return VAR_3;
}

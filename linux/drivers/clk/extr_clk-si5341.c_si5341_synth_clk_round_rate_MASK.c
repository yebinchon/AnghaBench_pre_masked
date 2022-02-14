
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct clk_si5341_synth {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long freq_vco; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 struct clk_si5341_synth* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long *VAR_4)
{
 struct clk_si5341_synth *VAR_5 = FUNC_1(VAR_2);
 u64 VAR_6;


 VAR_6 = VAR_5->data->freq_vco;
 FUNC_0(VAR_6, VAR_0);
 if (VAR_3 < VAR_6)
  return VAR_6;

 VAR_6 = VAR_5->data->freq_vco;
 FUNC_0(VAR_6, VAR_1);
 if (VAR_3 > VAR_6)
  return VAR_6;

 return VAR_3;
}

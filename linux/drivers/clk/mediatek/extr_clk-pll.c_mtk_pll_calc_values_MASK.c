
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct mtk_pll_div_table {scalar_t__ freq; } ;
struct mtk_clk_pll {TYPE_1__* data; } ;
struct TYPE_2__ {long fmin; scalar_t__ fmax; int pcwibits; int pcwbits; struct mtk_pll_div_table* div_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mtk_clk_pll *VAR_2, u32 *VAR_3, u32 *VAR_4,
  u32 VAR_5, u32 VAR_6)
{
 unsigned long VAR_7 = VAR_2->data->fmin ? VAR_2->data->fmin : (1000 * VAR_1);
 const struct mtk_pll_div_table *VAR_8 = VAR_2->data->div_table;
 u64 VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (VAR_5 > VAR_2->data->fmax)
  VAR_5 = VAR_2->data->fmax;

 if (VAR_8) {
  if (VAR_5 > VAR_8[0].freq)
   VAR_5 = VAR_8[0].freq;

  for (VAR_11 = 0; VAR_8[VAR_11 + 1].freq != 0; VAR_11++) {
   if (VAR_5 > VAR_8[VAR_11 + 1].freq)
    break;
  }
  *VAR_4 = 1 << VAR_11;
 } else {
  for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
   *VAR_4 = 1 << VAR_11;
   if ((u64)VAR_5 * *VAR_4 >= VAR_7)
    break;
  }
 }


 VAR_10 = VAR_2->data->pcwibits ? VAR_2->data->pcwibits : VAR_0;
 VAR_9 = ((u64)VAR_5 << VAR_11) << (VAR_2->data->pcwbits - VAR_10);
 FUNC_0(VAR_9, VAR_6);

 *VAR_3 = (u32)VAR_9;
}

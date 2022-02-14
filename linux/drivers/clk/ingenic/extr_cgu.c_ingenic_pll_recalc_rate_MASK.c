
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct ingenic_cgu_pll_info {unsigned int m_shift; unsigned int n_shift; unsigned int od_shift; unsigned int od_max; unsigned int* od_encoding; int bypass_bit; int no_bypass_bit; scalar_t__ od_bits; scalar_t__ n_offset; scalar_t__ n_bits; scalar_t__ m_offset; scalar_t__ m_bits; scalar_t__ reg; } ;
struct ingenic_cgu_clk_info {scalar_t__ type; struct ingenic_cgu_pll_info pll; } ;
struct ingenic_cgu {int lock; scalar_t__ base; struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (scalar_t__,int ) ;
 unsigned long FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ingenic_clk* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_8(struct clk_hw *VAR_1, unsigned long VAR_2)
{
 struct ingenic_clk *VAR_3 = FUNC_7(VAR_1);
 struct ingenic_cgu *VAR_4 = VAR_3->cgu;
 const struct ingenic_cgu_clk_info *VAR_5;
 const struct ingenic_cgu_pll_info *VAR_6;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11;
 unsigned long VAR_12;
 u32 VAR_13;

 VAR_5 = &VAR_4->clock_info[VAR_3->idx];
 FUNC_1(VAR_5->type != VAR_0);
 VAR_6 = &VAR_5->pll;

 FUNC_5(&VAR_4->lock, VAR_12);
 VAR_13 = FUNC_4(VAR_4->base + VAR_6->reg);
 FUNC_6(&VAR_4->lock, VAR_12);

 VAR_7 = (VAR_13 >> VAR_6->m_shift) & FUNC_2(VAR_6->m_bits - 1, 0);
 VAR_7 += VAR_6->m_offset;
 VAR_8 = (VAR_13 >> VAR_6->n_shift) & FUNC_2(VAR_6->n_bits - 1, 0);
 VAR_8 += VAR_6->n_offset;
 VAR_9 = VAR_13 >> VAR_6->od_shift;
 VAR_9 &= FUNC_2(VAR_6->od_bits - 1, 0);
 VAR_11 = !VAR_6->no_bypass_bit &&
   !!(VAR_13 & FUNC_0(VAR_6->bypass_bit));

 if (VAR_11)
  return VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_6->od_max; VAR_10++) {
  if (VAR_6->od_encoding[VAR_10] == VAR_9)
   break;
 }
 FUNC_1(VAR_10 == VAR_6->od_max);
 VAR_10++;

 return FUNC_3((u64)VAR_2 * VAR_7, VAR_8 * VAR_10);
}

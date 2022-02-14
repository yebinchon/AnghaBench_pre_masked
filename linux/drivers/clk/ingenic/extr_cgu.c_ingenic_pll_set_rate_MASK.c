
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ingenic_clk {struct ingenic_cgu* cgu; } ;
struct ingenic_cgu_pll_info {unsigned int m_shift; unsigned int m_offset; unsigned int n_shift; unsigned int n_offset; unsigned int od_shift; unsigned int* od_encoding; scalar_t__ reg; scalar_t__ od_bits; scalar_t__ n_bits; scalar_t__ m_bits; } ;
struct ingenic_cgu_clk_info {int name; struct ingenic_cgu_pll_info pll; } ;
struct ingenic_cgu {int lock; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 unsigned long FUNC_1 (struct ingenic_cgu_clk_info const*,unsigned long,unsigned long,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (char*,int ,unsigned long,unsigned long) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ingenic_cgu_clk_info* FUNC_6 (struct ingenic_clk*) ;
 struct ingenic_clk* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 struct ingenic_clk *VAR_3 = FUNC_7(VAR_0);
 struct ingenic_cgu *VAR_4 = VAR_3->cgu;
 const struct ingenic_cgu_clk_info *VAR_5 = FUNC_6(VAR_3);
 const struct ingenic_cgu_pll_info *VAR_6 = &VAR_5->pll;
 unsigned long VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_2,
          &VAR_9, &VAR_10, &VAR_11);
 if (VAR_7 != VAR_1)
  FUNC_2("ingenic-cgu: request '%s' rate %luHz, actual %luHz\n",
   VAR_5->name, VAR_1, VAR_7);

 FUNC_4(&VAR_4->lock, VAR_8);
 VAR_12 = FUNC_3(VAR_4->base + VAR_6->reg);

 VAR_12 &= ~(FUNC_0(VAR_6->m_bits - 1, 0) << VAR_6->m_shift);
 VAR_12 |= (VAR_9 - VAR_6->m_offset) << VAR_6->m_shift;

 VAR_12 &= ~(FUNC_0(VAR_6->n_bits - 1, 0) << VAR_6->n_shift);
 VAR_12 |= (VAR_10 - VAR_6->n_offset) << VAR_6->n_shift;

 VAR_12 &= ~(FUNC_0(VAR_6->od_bits - 1, 0) << VAR_6->od_shift);
 VAR_12 |= VAR_6->od_encoding[VAR_11 - 1] << VAR_6->od_shift;

 FUNC_8(VAR_12, VAR_4->base + VAR_6->reg);
 FUNC_5(&VAR_4->lock, VAR_8);

 return 0;
}

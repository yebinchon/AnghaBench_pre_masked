
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_corediv_soc_desc {int ratio_reload; scalar_t__ ratio_offset; } ;
struct clk_corediv_desc {int mask; int offset; int fieldbit; } ;
struct clk_corediv {int lock; scalar_t__ reg; struct clk_corediv_desc* desc; struct clk_corediv_soc_desc* soc_desc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct clk_corediv* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct clk_corediv *VAR_4 = FUNC_4(VAR_1);
 const struct clk_corediv_soc_desc *VAR_5 = VAR_4->soc_desc;
 const struct clk_corediv_desc *VAR_6 = VAR_4->desc;
 unsigned long VAR_7 = 0;
 u32 VAR_8, VAR_9;

 VAR_9 = VAR_3 / VAR_2;

 FUNC_2(&VAR_4->lock, VAR_7);


 VAR_8 = FUNC_1(VAR_4->reg + VAR_5->ratio_offset);
 VAR_8 &= ~(VAR_6->mask << VAR_6->offset);
 VAR_8 |= (VAR_9 & VAR_6->mask) << VAR_6->offset;
 FUNC_6(VAR_8, VAR_4->reg + VAR_5->ratio_offset);


 VAR_8 = FUNC_1(VAR_4->reg) | FUNC_0(VAR_6->fieldbit);
 FUNC_6(VAR_8, VAR_4->reg);


 VAR_8 = FUNC_1(VAR_4->reg) | VAR_5->ratio_reload;
 FUNC_6(VAR_8, VAR_4->reg);





 FUNC_5(1000);
 VAR_8 &= ~(VAR_0 | VAR_5->ratio_reload);
 FUNC_6(VAR_8, VAR_4->reg);
 FUNC_5(1000);

 FUNC_3(&VAR_4->lock, VAR_7);

 return 0;
}

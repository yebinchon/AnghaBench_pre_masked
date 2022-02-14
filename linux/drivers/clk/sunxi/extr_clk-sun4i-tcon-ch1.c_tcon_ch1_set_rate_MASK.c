
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tcon_ch1_clk {int lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcon_ch1_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,int*,int*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_2, unsigned long VAR_3,
        unsigned long VAR_4)
{
 struct tcon_ch1_clk *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 bool VAR_7;
 u8 VAR_8;
 u32 VAR_9;

 FUNC_4(VAR_3, VAR_4, &VAR_8, &VAR_7);

 FUNC_2(&VAR_5->lock, VAR_6);
 VAR_9 = FUNC_1(VAR_5->reg);
 VAR_9 &= ~(VAR_1 | VAR_0);
 VAR_9 |= (VAR_8 - 1) & VAR_1;

 if (VAR_7)
  VAR_9 |= VAR_0;

 FUNC_5(VAR_9, VAR_5->reg);
 FUNC_3(&VAR_5->lock, VAR_6);

 return 0;
}

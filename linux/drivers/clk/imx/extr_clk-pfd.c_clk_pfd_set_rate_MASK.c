
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_pfd {int idx; scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,unsigned long) ;
 struct clk_pfd* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4)
{
 struct clk_pfd *VAR_5 = FUNC_1(VAR_2);
 u64 VAR_6 = VAR_4;
 u8 VAR_7;

 VAR_6 = VAR_6 * 18 + VAR_3 / 2;
 FUNC_0(VAR_6, VAR_3);
 VAR_7 = VAR_6;
 if (VAR_7 < 12)
  VAR_7 = 12;
 else if (VAR_7 > 35)
  VAR_7 = 35;

 FUNC_2(0x3f << (VAR_5->idx * 8), VAR_5->reg + VAR_0);
 FUNC_2(VAR_7 << (VAR_5->idx * 8), VAR_5->reg + VAR_1);

 return 0;
}

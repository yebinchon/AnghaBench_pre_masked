
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct hdmi_pll_8996 {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct hdmi_pll_8996*,int ) ;
 struct hdmi_pll_8996* FUNC_2 (struct clk_hw*) ;
 unsigned long FUNC_3 (int,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_3,
            unsigned long VAR_4)
{
 struct hdmi_pll_8996 *VAR_5 = FUNC_2(VAR_3);
 u64 VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 VAR_8 = FUNC_1(VAR_5, VAR_1);
 VAR_9 = FUNC_1(VAR_5, VAR_2);

 VAR_10 = VAR_7 | (VAR_8 << 8) | (VAR_9 << 16);

 VAR_6 = FUNC_3(VAR_10 + 1, VAR_4);

 FUNC_0(VAR_6, 10);

 return VAR_6;
}

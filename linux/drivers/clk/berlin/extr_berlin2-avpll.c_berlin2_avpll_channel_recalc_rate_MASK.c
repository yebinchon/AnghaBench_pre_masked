
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_avpll_channel {int index; int flags; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__) ;
 struct berlin2_avpll_channel* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_6(struct clk_hw *VAR_12, unsigned long VAR_13)
{
 struct berlin2_avpll_channel *VAR_14 = FUNC_5(VAR_12);
 u32 VAR_15, VAR_16, VAR_17, VAR_18 = 1;
 u64 VAR_19 = VAR_13;

 VAR_15 = FUNC_4(VAR_14->base + VAR_6);
 if ((VAR_15 & (VAR_7 << VAR_14->index)) == 0)
  goto skip_div;






 VAR_15 = FUNC_4(VAR_14->base + FUNC_1(VAR_14->index));

 if (VAR_14->flags & VAR_0 && VAR_14->index == 0)
  VAR_15 >>= 4;
 VAR_18 = VAR_15 & VAR_8;

 VAR_15 = FUNC_4(VAR_14->base + FUNC_2(VAR_14->index));
 VAR_19 *= VAR_15 & VAR_9;


 if (VAR_14->index == 7)
  goto skip_div;





 VAR_15 = FUNC_4(VAR_14->base + VAR_1) >> 7;
 VAR_15 = (VAR_15 >> (VAR_14->index * 3));
 if (VAR_15 & FUNC_0(2))
  VAR_18 *= VAR_11[VAR_15 & 0x3];





 if (VAR_14->index == 0) {
  VAR_15 = FUNC_4(VAR_14->base + VAR_1);
  VAR_15 >>= 28;
 } else {
  VAR_15 = FUNC_4(VAR_14->base + VAR_2);
  VAR_15 >>= (VAR_14->index-1) * 3;
 }
 if (VAR_15 & FUNC_0(2))
  VAR_18 *= VAR_10[VAR_15 & 0x3];





 if (VAR_14->index < 2) {
  VAR_15 = FUNC_4(VAR_14->base + VAR_2);
  VAR_15 >>= 18 + (VAR_14->index * 7);
 } else if (VAR_14->index < 7) {
  VAR_15 = FUNC_4(VAR_14->base + VAR_3);
  VAR_15 >>= (VAR_14->index - 2) * 7;
 } else {
  VAR_15 = FUNC_4(VAR_14->base + VAR_4);
 }
 VAR_16 = VAR_15 & 0x7f;
 if (VAR_16)
  VAR_18 *= VAR_16;






 if (VAR_14->index < 6) {
  VAR_15 = FUNC_4(VAR_14->base + VAR_4);
  VAR_15 >>= 7 + (VAR_14->index * 4);
 } else {
  VAR_15 = FUNC_4(VAR_14->base + VAR_5);
 }
 VAR_17 = VAR_15 & 0xf;
 if (VAR_16 && VAR_17)
  VAR_19 *= 2;

skip_div:
 FUNC_3(VAR_19, VAR_18);
 return (unsigned long)VAR_19;
}

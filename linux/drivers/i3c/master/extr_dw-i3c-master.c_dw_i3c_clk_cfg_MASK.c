
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dw_i3c_master {scalar_t__ regs; int core_clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct dw_i3c_master *VAR_15)
{
 unsigned long VAR_16, VAR_17;
 u32 VAR_18;
 u8 VAR_19, VAR_20;

 VAR_16 = FUNC_8(VAR_15->core_clk);
 if (!VAR_16)
  return -VAR_3;

 VAR_17 = FUNC_1(1000000000, VAR_16);

 VAR_19 = FUNC_1(VAR_8, VAR_17) - 1;
 if (VAR_19 < VAR_14)
  VAR_19 = VAR_14;

 VAR_20 = FUNC_1(VAR_16, VAR_10) - VAR_19;
 if (VAR_20 < VAR_14)
  VAR_20 = VAR_14;

 VAR_18 = FUNC_6(VAR_19) | FUNC_7(VAR_20);
 FUNC_10(VAR_18, VAR_15->regs + VAR_13);

 if (!(FUNC_9(VAR_15->regs + VAR_1) & VAR_2))
  FUNC_10(FUNC_0(VAR_20), VAR_15->regs + VAR_0);

 VAR_20 = FUNC_1(VAR_9, VAR_17);
 VAR_18 = FUNC_6(VAR_19) | FUNC_7(VAR_20);
 FUNC_10(VAR_18, VAR_15->regs + VAR_12);

 VAR_20 = FUNC_1(VAR_16, VAR_4) - VAR_19;
 VAR_18 = FUNC_2(VAR_20);
 VAR_20 = FUNC_1(VAR_16, VAR_5) - VAR_19;
 VAR_18 |= FUNC_3(VAR_20);
 VAR_20 = FUNC_1(VAR_16, VAR_6) - VAR_19;
 VAR_18 |= FUNC_4(VAR_20);
 VAR_20 = FUNC_1(VAR_16, VAR_7) - VAR_19;
 VAR_18 |= FUNC_5(VAR_20);
 FUNC_10(VAR_18, VAR_15->regs + VAR_11);

 return 0;
}

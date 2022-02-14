
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned long u16 ;
struct dw_i3c_master {scalar_t__ regs; int core_clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct dw_i3c_master *VAR_10)
{
 unsigned long VAR_11, VAR_12;
 u16 VAR_13, VAR_14;
 u32 VAR_15;

 VAR_11 = FUNC_6(VAR_10->core_clk);
 if (!VAR_11)
  return -VAR_3;

 VAR_12 = FUNC_1(1000000000, VAR_11);

 VAR_14 = FUNC_1(VAR_4, VAR_12);
 VAR_13 = FUNC_1(VAR_11, VAR_5) - VAR_14;
 VAR_15 = FUNC_2(VAR_13) |
       FUNC_3(VAR_14);
 FUNC_8(VAR_15, VAR_10->regs + VAR_8);

 VAR_14 = FUNC_1(VAR_7, VAR_12);
 VAR_13 = FUNC_1(VAR_11, VAR_6) - VAR_14;
 VAR_15 = FUNC_4(VAR_13) |
       FUNC_5(VAR_14);
 FUNC_8(VAR_15, VAR_10->regs + VAR_9);

 FUNC_8(FUNC_0(VAR_14), VAR_10->regs + VAR_0);
 FUNC_8(FUNC_7(VAR_10->regs + VAR_1) | VAR_2,
        VAR_10->regs + VAR_1);

 return 0;
}

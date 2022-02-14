
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct clk_hw {int dummy; } ;
struct axi_clkgen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct axi_clkgen*,int ,int,int) ;
 struct axi_clkgen* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_11,
 unsigned long VAR_12, unsigned long VAR_13)
{
 struct axi_clkgen *VAR_14 = FUNC_5(VAR_11);
 unsigned int VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 uint32_t VAR_22;
 uint32_t VAR_23;

 if (VAR_13 == 0 || VAR_12 == 0)
  return -VAR_0;

 FUNC_1(VAR_13, VAR_12, &VAR_15, &VAR_16, &VAR_17);

 if (VAR_15 == 0 || VAR_17 == 0 || VAR_16 == 0)
  return -VAR_0;

 VAR_22 = FUNC_2(VAR_16 - 1);
 VAR_23 = FUNC_3(VAR_16 - 1);

 FUNC_0(VAR_17, &VAR_21, &VAR_19, &VAR_20, &VAR_18);
 FUNC_4(VAR_14, VAR_1,
  (VAR_19 << 6) | VAR_21, 0xefff);
 FUNC_4(VAR_14, VAR_2,
  (VAR_20 << 7) | (VAR_18 << 6), 0x03ff);

 FUNC_0(VAR_15, &VAR_21, &VAR_19, &VAR_20, &VAR_18);
 FUNC_4(VAR_14, VAR_3,
  (VAR_20 << 13) | (VAR_18 << 12) | (VAR_19 << 6) | VAR_21, 0x3fff);

 FUNC_0(VAR_16, &VAR_21, &VAR_19, &VAR_20, &VAR_18);
 FUNC_4(VAR_14, VAR_4,
  (VAR_19 << 6) | VAR_21, 0xefff);
 FUNC_4(VAR_14, VAR_5,
  (VAR_20 << 7) | (VAR_18 << 6), 0x03ff);

 FUNC_4(VAR_14, VAR_8, VAR_23 & 0x3ff, 0x3ff);
 FUNC_4(VAR_14, VAR_9,
  (((VAR_23 >> 16) & 0x1f) << 10) | 0x1, 0x7fff);
 FUNC_4(VAR_14, VAR_10,
  (((VAR_23 >> 24) & 0x1f) << 10) | 0x3e9, 0x7fff);
 FUNC_4(VAR_14, VAR_6, VAR_22 >> 16, 0x9900);
 FUNC_4(VAR_14, VAR_7, VAR_22, 0x9900);

 return 0;
}

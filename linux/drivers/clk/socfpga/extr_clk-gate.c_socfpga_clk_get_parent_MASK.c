
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (struct clk_hw*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 const char *VAR_11 = FUNC_0(VAR_8);

 if (FUNC_2(VAR_11, VAR_2)) {
  VAR_9 = FUNC_1(VAR_7 + VAR_0);
  return VAR_9 &= 0x1;
 }
 if (FUNC_2(VAR_11, VAR_3)) {
  VAR_9 = FUNC_1(VAR_7 + VAR_0);
  return !!(VAR_9 & 2);
 }

 VAR_10 = FUNC_1(VAR_7 + VAR_1);
 if (FUNC_2(VAR_11, VAR_4))
  return VAR_10 &= 0x3;
 if (FUNC_2(VAR_11, VAR_5) ||
     FUNC_2(VAR_11, VAR_6))
  return (VAR_10 >> 2) & 3;


 return (VAR_10 >> 4) & 3;

}

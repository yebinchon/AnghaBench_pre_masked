
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dss_pll {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dss_pll *VAR_2, u32 VAR_3)
{
 int VAR_4 = 100;

 while (VAR_4-- > 0) {
  u32 VAR_5 = FUNC_0(VAR_2->base + VAR_1);
  VAR_5 &= VAR_3;
  if (VAR_5 == VAR_3)
   return 0;
 }

 return -VAR_0;
}

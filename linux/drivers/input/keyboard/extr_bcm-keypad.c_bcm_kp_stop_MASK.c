
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_kp {scalar_t__ clk; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const struct bcm_kp *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6->base + VAR_1);
 VAR_7 &= ~VAR_0;
 FUNC_2(0, VAR_6->base + VAR_1);
 FUNC_2(0, VAR_6->base + VAR_4);
 FUNC_2(0, VAR_6->base + VAR_5);
 FUNC_2(0xFFFFFFFF, VAR_6->base + VAR_2);
 FUNC_2(0xFFFFFFFF, VAR_6->base + VAR_3);

 if (VAR_6->clk)
  FUNC_0(VAR_6->clk);
}

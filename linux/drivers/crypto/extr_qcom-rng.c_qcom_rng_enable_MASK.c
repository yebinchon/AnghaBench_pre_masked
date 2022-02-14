
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_rng {int clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct qcom_rng *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5->clk);
 if (VAR_7)
  return VAR_7;


 VAR_6 = FUNC_2(VAR_5->base + VAR_0);
 if (VAR_6 & VAR_1)
  goto already_enabled;

 VAR_6 = FUNC_2(VAR_5->base + VAR_2);
 VAR_6 &= ~VAR_4;
 VAR_6 |= VAR_3;
 FUNC_3(VAR_6, VAR_5->base + VAR_2);

 VAR_6 = FUNC_2(VAR_5->base + VAR_0);
 VAR_6 |= VAR_1;
 FUNC_3(VAR_6, VAR_5->base + VAR_0);

already_enabled:
 FUNC_0(VAR_5->clk);

 return 0;
}

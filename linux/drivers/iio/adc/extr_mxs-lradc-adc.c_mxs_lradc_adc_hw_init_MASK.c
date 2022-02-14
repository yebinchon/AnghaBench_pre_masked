
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_lradc_adc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mxs_lradc_adc *VAR_4)
{

 const u32 VAR_5 =
  (1 << (VAR_3 + 0)) |
  (VAR_2 << VAR_1);


 FUNC_1(VAR_5, VAR_4->base + FUNC_0(0));






 FUNC_1(0, VAR_4->base + VAR_0);
}

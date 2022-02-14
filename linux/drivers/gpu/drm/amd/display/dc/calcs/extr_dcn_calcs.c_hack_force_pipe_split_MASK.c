
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn_bw_internal_vars {float* max_dppclk; } ;



__attribute__((used)) static void FUNC_0(struct dcn_bw_internal_vars *VAR_0,
  unsigned int VAR_1)
{
 float VAR_2 = VAR_1 / 10000;





 if (VAR_2 < VAR_0->max_dppclk[0])
  VAR_0->max_dppclk[0] = VAR_2;
}

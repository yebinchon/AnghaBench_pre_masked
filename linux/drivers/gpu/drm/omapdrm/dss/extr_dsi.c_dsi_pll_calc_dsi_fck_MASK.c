
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll_clock_info {int* mX; int clkdco; int* clkout; } ;
struct dsi_data {TYPE_1__* data; } ;
struct TYPE_2__ {unsigned long max_fck_freq; } ;


 int FUNC_0 (int,unsigned long) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(struct dsi_data *VAR_1,
     struct dss_pll_clock_info *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = VAR_1->data->max_fck_freq;

 VAR_2->mX[VAR_0] = FUNC_0(VAR_2->clkdco, VAR_3);
 VAR_2->clkout[VAR_0] = VAR_2->clkdco / VAR_2->mX[VAR_0];
}

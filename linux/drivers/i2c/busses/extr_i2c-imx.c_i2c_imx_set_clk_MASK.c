
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct imx_i2c_struct {unsigned int cur_clk; unsigned int bitrate; unsigned int ifdr; unsigned int disable_delay; TYPE_2__ adapter; TYPE_1__* hwdata; } ;
struct imx_i2c_clk_pair {unsigned int div; unsigned int val; } ;
struct TYPE_3__ {int ndivs; struct imx_i2c_clk_pair* clk_div; } ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct imx_i2c_struct *VAR_0,
       unsigned int VAR_1)
{
 struct imx_i2c_clk_pair *VAR_2 = VAR_0->hwdata->clk_div;
 unsigned int VAR_3;
 int VAR_4;


 if (VAR_0->cur_clk == VAR_1)
  return;

 VAR_0->cur_clk = VAR_1;

 VAR_3 = (VAR_1 + VAR_0->bitrate - 1) / VAR_0->bitrate;
 if (VAR_3 < VAR_2[0].div)
  VAR_4 = 0;
 else if (VAR_3 > VAR_2[VAR_0->hwdata->ndivs - 1].div)
  VAR_4 = VAR_0->hwdata->ndivs - 1;
 else
  for (VAR_4 = 0; VAR_2[VAR_4].div < VAR_3; VAR_4++)
   ;


 VAR_0->ifdr = VAR_2[VAR_4].val;







 VAR_0->disable_delay = (500000U * VAR_2[VAR_4].div
  + (VAR_1 / 2) - 1) / (VAR_1 / 2);







}

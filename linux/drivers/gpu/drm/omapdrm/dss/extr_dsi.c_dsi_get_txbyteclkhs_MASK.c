
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clkdco; } ;
struct TYPE_4__ {TYPE_1__ cinfo; } ;
struct dsi_data {TYPE_2__ pll; } ;



__attribute__((used)) static unsigned long FUNC_0(struct dsi_data *VAR_0)
{
 return VAR_0->pll.cinfo.clkdco / 16;
}

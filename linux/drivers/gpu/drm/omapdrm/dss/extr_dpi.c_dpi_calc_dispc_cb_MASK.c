
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct dpi_clk_calc_ctx {int pck_min; TYPE_1__ dispc_cinfo; } ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 struct dpi_clk_calc_ctx *VAR_5 = VAR_4;






 if (VAR_5->pck_min >= 100000000) {
  if (VAR_0 > 1 && VAR_0 % 2 != 0)
   return 0;

  if (VAR_1 > 1 && VAR_1 % 2 != 0)
   return 0;
 }

 VAR_5->dispc_cinfo.lck_div = VAR_0;
 VAR_5->dispc_cinfo.pck_div = VAR_1;
 VAR_5->dispc_cinfo.lck = VAR_2;
 VAR_5->dispc_cinfo.pck = VAR_3;

 return 1;
}

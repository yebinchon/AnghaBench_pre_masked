
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lck_div; int pck_div; unsigned long lck; unsigned long pck; } ;
struct sdi_clk_calc_ctx {TYPE_1__ dispc_cinfo; } ;



__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, void *VAR_4)
{
 struct sdi_clk_calc_ctx *VAR_5 = VAR_4;

 VAR_5->dispc_cinfo.lck_div = VAR_0;
 VAR_5->dispc_cinfo.pck_div = VAR_1;
 VAR_5->dispc_cinfo.lck = VAR_2;
 VAR_5->dispc_cinfo.pck = VAR_3;

 return 1;
}

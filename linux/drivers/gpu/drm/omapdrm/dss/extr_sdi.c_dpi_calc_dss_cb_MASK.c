
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdi_clk_calc_ctx {unsigned long fck; int pck_max; int pck_min; TYPE_2__* sdi; } ;
struct TYPE_4__ {TYPE_1__* dss; } ;
struct TYPE_3__ {int dispc; } ;


 int FUNC_0 (int ,unsigned long,int ,int ,int ,struct sdi_clk_calc_ctx*) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_1, void *VAR_2)
{
 struct sdi_clk_calc_ctx *VAR_3 = VAR_2;

 VAR_3->fck = VAR_1;

 return FUNC_0(VAR_3->sdi->dss->dispc, VAR_1,
         VAR_3->pck_min, VAR_3->pck_max,
         VAR_0, VAR_3);
}

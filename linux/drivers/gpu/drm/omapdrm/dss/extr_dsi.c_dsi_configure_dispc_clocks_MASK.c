
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dispc_clock_info {int pck_div; int lck_div; } ;
struct TYPE_4__ {struct dispc_clock_info clock_info; } ;
struct TYPE_5__ {int pck_div; int lck_div; } ;
struct dsi_data {TYPE_1__ mgr_config; TYPE_3__* dss; TYPE_2__ user_dispc_cinfo; } ;
struct TYPE_6__ {int dispc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned long,struct dispc_clock_info*) ;
 unsigned long FUNC_2 (struct dsi_data*) ;

__attribute__((used)) static int FUNC_3(struct dsi_data *VAR_0)
{
 struct dispc_clock_info VAR_1;
 int VAR_2;
 unsigned long VAR_3;

 VAR_3 = FUNC_2(VAR_0);

 VAR_1.lck_div = VAR_0->user_dispc_cinfo.lck_div;
 VAR_1.pck_div = VAR_0->user_dispc_cinfo.pck_div;

 VAR_2 = FUNC_1(VAR_0->dss->dispc, VAR_3, &VAR_1);
 if (VAR_2) {
  FUNC_0("Failed to calc dispc clocks\n");
  return VAR_2;
 }

 VAR_0->mgr_config.clock_info = VAR_1;

 return 0;
}

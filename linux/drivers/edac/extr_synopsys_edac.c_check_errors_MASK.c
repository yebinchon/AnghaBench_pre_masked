
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synps_platform_data {int (* get_error_info ) (struct synps_edac_priv*) ;} ;
struct TYPE_2__ {scalar_t__ ue_cnt; scalar_t__ ce_cnt; } ;
struct synps_edac_priv {int ue_cnt; int ce_cnt; TYPE_1__ stat; struct synps_platform_data* p_data; } ;
struct mem_ctl_info {struct synps_edac_priv* pvt_info; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct mem_ctl_info*,TYPE_1__*) ;
 int FUNC_2 (struct synps_edac_priv*) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_0)
{
 const struct synps_platform_data *VAR_1;
 struct synps_edac_priv *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->pvt_info;
 VAR_1 = VAR_2->p_data;

 VAR_3 = VAR_1->get_error_info(VAR_2);
 if (VAR_3)
  return;

 VAR_2->ce_cnt += VAR_2->stat.ce_cnt;
 VAR_2->ue_cnt += VAR_2->stat.ue_cnt;
 FUNC_1(VAR_0, &VAR_2->stat);

 FUNC_0(3, "Total error count CE %d UE %d\n",
   VAR_2->ce_cnt, VAR_2->ue_cnt);
}

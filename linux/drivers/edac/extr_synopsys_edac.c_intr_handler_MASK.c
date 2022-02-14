
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synps_platform_data {int (* get_error_info ) (struct synps_edac_priv*) ;} ;
struct TYPE_2__ {scalar_t__ ue_cnt; scalar_t__ ce_cnt; } ;
struct synps_edac_priv {scalar_t__ baseaddr; int ue_cnt; int ce_cnt; TYPE_1__ stat; struct synps_platform_data* p_data; } ;
struct mem_ctl_info {struct synps_edac_priv* pvt_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct mem_ctl_info*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct synps_edac_priv*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 const struct synps_platform_data *VAR_8;
 struct mem_ctl_info *VAR_9 = VAR_7;
 struct synps_edac_priv *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = VAR_9->pvt_info;
 VAR_8 = VAR_10->p_data;

 VAR_12 = FUNC_2(VAR_10->baseaddr + VAR_2);
 VAR_12 &= (VAR_0 | VAR_1);
 if (!(VAR_12 & VAR_3))
  return VAR_5;

 VAR_11 = VAR_8->get_error_info(VAR_10);
 if (VAR_11)
  return VAR_5;

 VAR_10->ce_cnt += VAR_10->stat.ce_cnt;
 VAR_10->ue_cnt += VAR_10->stat.ue_cnt;
 FUNC_1(VAR_9, &VAR_10->stat);

 FUNC_0(3, "Total error count CE %d UE %d\n",
   VAR_10->ce_cnt, VAR_10->ue_cnt);
 FUNC_4(VAR_12, VAR_10->baseaddr + VAR_2);
 return VAR_4;
}

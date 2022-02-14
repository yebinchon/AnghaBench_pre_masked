
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_edac_dev_ctx {int edac_idx; TYPE_1__* edac; } ;
struct edac_device_ctl_info {struct xgene_edac_dev_ctx* pvt_info; } ;
struct dentry {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int dfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,struct dentry*,struct edac_device_ctl_info*,int *) ;
 struct dentry* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct edac_device_ctl_info *VAR_3)
{
 struct xgene_edac_dev_ctx *VAR_4 = VAR_3->pvt_info;
 struct dentry *VAR_5;
 char VAR_6[10];

 if (!FUNC_0(VAR_0) || !VAR_4->edac->dfs)
  return;

 FUNC_3(VAR_6, sizeof(VAR_6), "l3c%d", VAR_4->edac_idx);
 VAR_5 = FUNC_2(VAR_6, VAR_4->edac->dfs);
 if (!VAR_5)
  return;

 FUNC_1("l3_inject_ctrl", VAR_1, VAR_5, VAR_3,
       &VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {int id; int debugfs; int active; TYPE_1__* gvt; } ;
struct TYPE_2__ {int debugfs_root; } ;


 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,struct intel_vgpu*,int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct intel_vgpu *VAR_2)
{
 char VAR_3[16] = "";

 FUNC_3(VAR_3, 16, "vgpu%d", VAR_2->id);
 VAR_2->debugfs = FUNC_1(VAR_3, VAR_2->gvt->debugfs_root);

 FUNC_0("active", 0444, VAR_2->debugfs, &VAR_2->active);
 FUNC_2("mmio_diff", 0444, VAR_2->debugfs, VAR_2,
       &VAR_0);
 FUNC_2("scan_nonprivbb", 0644, VAR_2->debugfs, VAR_2,
       &VAR_1);
}

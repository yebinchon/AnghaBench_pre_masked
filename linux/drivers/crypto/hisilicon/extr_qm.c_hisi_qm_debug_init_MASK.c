
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* qm_d; int debug_root; } ;
struct hisi_qm {scalar_t__ fun_type; TYPE_1__ debug; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_3 ;
 struct dentry* FUNC_1 (char*,int ) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct hisi_qm*,int *) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct hisi_qm*,int) ;
 int VAR_4 ;

int FUNC_5(struct hisi_qm *VAR_5)
{
 struct dentry *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_1("qm", VAR_5->debug.debug_root);
 if (FUNC_0(VAR_6))
  return -VAR_2;
 VAR_5->debug.qm_d = VAR_6;


 if (VAR_5->fun_type == VAR_3)
  for (VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++)
   if (FUNC_4(VAR_5, VAR_8)) {
    VAR_9 = -VAR_2;
    goto failed_to_create;
   }

 VAR_7 = FUNC_2("qm_regs", 0444, VAR_5->debug.qm_d, VAR_5,
          &VAR_4);
 if (FUNC_0(VAR_7)) {
  VAR_9 = -VAR_2;
  goto failed_to_create;
 }

 return 0;

failed_to_create:
 FUNC_3(VAR_6);
 return VAR_9;
}

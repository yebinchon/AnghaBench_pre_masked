
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct adf_etr_bank_data {int bank_number; int bank_debug_dir; int bank_debug_cfg; struct adf_accel_dev* accel_dev; } ;
struct adf_accel_dev {TYPE_1__* transport; } ;
typedef int name ;
struct TYPE_2__ {struct dentry* debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int ,int ,struct adf_etr_bank_data*,int *) ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct adf_etr_bank_data *VAR_2)
{
 struct adf_accel_dev *VAR_3 = VAR_2->accel_dev;
 struct dentry *VAR_4 = VAR_3->transport->debug;
 char VAR_5[8];

 FUNC_2(VAR_5, sizeof(VAR_5), "bank_%02d", VAR_2->bank_number);
 VAR_2->bank_debug_dir = FUNC_0(VAR_5, VAR_4);
 VAR_2->bank_debug_cfg = FUNC_1("config", VAR_0,
         VAR_2->bank_debug_dir, VAR_2,
         &VAR_1);
 return 0;
}

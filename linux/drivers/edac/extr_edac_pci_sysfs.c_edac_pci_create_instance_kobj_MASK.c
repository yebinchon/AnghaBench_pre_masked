
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_pci_ctl_info {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 struct kobject* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct edac_pci_ctl_info *VAR_4, int VAR_5)
{
 struct kobject *VAR_6;
 int VAR_7;

 FUNC_0(0, "\n");





 VAR_6 = FUNC_1(VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto error_out;
 }


 VAR_7 = FUNC_2(&VAR_4->kobj, &VAR_3,
       VAR_2, "pci%d", VAR_5);
 if (VAR_7 != 0) {
  FUNC_0(2, "failed to register instance pci%d\n", VAR_5);
  FUNC_3(VAR_2);
  goto error_out;
 }

 FUNC_4(&VAR_4->kobj, VAR_1);
 FUNC_0(1, "Register instance 'pci%d' kobject\n", VAR_5);

 return 0;


error_out:
 return VAR_7;
}

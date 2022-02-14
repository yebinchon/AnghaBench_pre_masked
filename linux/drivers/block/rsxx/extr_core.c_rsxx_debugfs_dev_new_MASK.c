
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsxx_cardinfo {struct dentry* debugfs_dir; TYPE_1__* gendisk; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int disk_name; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ,int *) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct rsxx_cardinfo*,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct dentry*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct rsxx_cardinfo *VAR_3)
{
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 struct dentry *VAR_6;

 VAR_3->debugfs_dir = FUNC_1(VAR_3->gendisk->disk_name, ((void*)0));
 if (FUNC_0(VAR_3->debugfs_dir))
  goto failed_debugfs_dir;

 VAR_4 = FUNC_2("stats", 0444,
         VAR_3->debugfs_dir, VAR_3,
         &VAR_2);
 if (FUNC_0(VAR_4))
  goto failed_debugfs_stats;

 VAR_5 = FUNC_2("pci_regs", 0444,
            VAR_3->debugfs_dir, VAR_3,
            &VAR_1);
 if (FUNC_0(VAR_5))
  goto failed_debugfs_pci_regs;

 VAR_6 = FUNC_2("cram", 0644,
        VAR_3->debugfs_dir, VAR_3,
        &VAR_0);
 if (FUNC_0(VAR_6))
  goto failed_debugfs_cram;

 return;
failed_debugfs_cram:
 FUNC_3(VAR_5);
failed_debugfs_pci_regs:
 FUNC_3(VAR_4);
failed_debugfs_stats:
 FUNC_3(VAR_3->debugfs_dir);
failed_debugfs_dir:
 VAR_3->debugfs_dir = ((void*)0);
}

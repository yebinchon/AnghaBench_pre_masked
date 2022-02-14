
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cfg_sysfs_entry {int select; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct fw_cfg_sysfs_entry *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->select);
}

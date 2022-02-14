
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc {int * pwrmon_rails; int debugfs_dentry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gb_svc *VAR_0)
{
 FUNC_0(VAR_0->debugfs_dentry);
 FUNC_1(VAR_0->pwrmon_rails);
 VAR_0->pwrmon_rails = ((void*)0);
}

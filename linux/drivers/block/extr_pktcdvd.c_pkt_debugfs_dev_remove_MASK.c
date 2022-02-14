
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int * dfs_d_root; int * dfs_f_info; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct pktcdvd_device *VAR_1)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_1->dfs_f_info);
 FUNC_0(VAR_1->dfs_d_root);
 VAR_1->dfs_f_info = ((void*)0);
 VAR_1->dfs_d_root = ((void*)0);
}

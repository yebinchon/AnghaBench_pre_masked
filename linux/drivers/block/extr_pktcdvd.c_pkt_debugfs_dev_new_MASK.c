
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dfs_d_root; int dfs_f_info; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,struct pktcdvd_device*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct pktcdvd_device *VAR_2)
{
 if (!VAR_1)
  return;
 VAR_2->dfs_d_root = FUNC_0(VAR_2->name, VAR_1);
 if (!VAR_2->dfs_d_root)
  return;

 VAR_2->dfs_f_info = FUNC_1("info", 0444,
          VAR_2->dfs_d_root, VAR_2, &VAR_0);
}

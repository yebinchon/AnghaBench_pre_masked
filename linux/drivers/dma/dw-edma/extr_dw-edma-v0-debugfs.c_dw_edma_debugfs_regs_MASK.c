
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct debugfs_entries {int dummy; } ;


 int FUNC_0 (struct debugfs_entries const*) ;
 struct debugfs_entries const FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct debugfs_entries const*,int,struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;

__attribute__((used)) static void FUNC_6(void)
{
 const struct debugfs_entries VAR_4[] = {
  FUNC_1(VAR_3),
  FUNC_1(VAR_2),
 };
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_0(VAR_4);
 FUNC_3(VAR_4, VAR_6, VAR_5);

 FUNC_5(VAR_5);
 FUNC_4(VAR_5);
}

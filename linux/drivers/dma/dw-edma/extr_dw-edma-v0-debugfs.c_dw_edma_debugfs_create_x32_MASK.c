
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct debugfs_entries {int reg; int name; } ;


 int FUNC_0 (int ,int,struct dentry*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const struct debugfs_entries VAR_1[],
           int VAR_2, struct dentry *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_0(VAR_1[VAR_4].name, 0444, VAR_3,
      VAR_1[VAR_4].reg, &VAR_0))
   break;
 }
}

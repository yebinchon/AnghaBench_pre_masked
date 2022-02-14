
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct debugfs_entry {int fops; int mode; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (int ,int ,struct dentry*,void*,int *) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2,
       struct debugfs_entry *VAR_3[],
       void *VAR_4,
       size_t VAR_5)
{
 int VAR_6;
 struct dentry *VAR_7;

 if (!FUNC_0(VAR_0))
  return 0;

 if (!VAR_2)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_1(VAR_3[VAR_6]->name, VAR_3[VAR_6]->mode,
            VAR_2, VAR_4, &VAR_3[VAR_6]->fops);

  if (!VAR_7)
   break;
 }

 return VAR_6;
}

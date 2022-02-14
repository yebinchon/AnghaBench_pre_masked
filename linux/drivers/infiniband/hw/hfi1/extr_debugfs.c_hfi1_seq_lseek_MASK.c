
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct file*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;

loff_t FUNC_4(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct dentry *VAR_3 = VAR_0->f_path.dentry;
 loff_t VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_3(VAR_4))
  return VAR_4;
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3);
 return VAR_4;
}

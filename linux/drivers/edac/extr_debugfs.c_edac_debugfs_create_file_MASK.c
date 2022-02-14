
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char const*,int ,struct dentry*,void*,struct file_operations const*) ;
 struct dentry* VAR_0 ;

struct dentry *
FUNC_1(const char *VAR_1, umode_t VAR_2, struct dentry *VAR_3,
    void *VAR_4, const struct file_operations *VAR_5)
{
 if (!VAR_3)
  VAR_3 = VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}

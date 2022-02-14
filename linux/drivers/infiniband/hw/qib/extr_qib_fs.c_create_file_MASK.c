
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct dentry* FUNC_5 (char const*,struct dentry*,int ) ;
 int FUNC_6 (int ,struct dentry*,int ,struct file_operations const*,void*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, umode_t VAR_1,
         struct dentry *VAR_2, struct dentry **VAR_3,
         const struct file_operations *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_3(FUNC_2(VAR_2));
 *VAR_3 = FUNC_5(VAR_0, VAR_2, FUNC_7(VAR_0));
 if (!FUNC_0(*VAR_3))
  VAR_6 = FUNC_6(FUNC_2(VAR_2), *VAR_3,
        VAR_1, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_1(*VAR_3);
 FUNC_4(FUNC_2(VAR_2));

 return VAR_6;
}

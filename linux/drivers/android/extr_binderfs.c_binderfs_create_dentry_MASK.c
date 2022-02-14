
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (char const*,struct dentry*,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry *VAR_1,
          const char *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1, FUNC_5(VAR_2));
 if (FUNC_1(VAR_3))
  return VAR_3;


 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}

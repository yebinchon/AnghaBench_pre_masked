
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 struct dentry* VAR_0 ;
 int VAR_1 ;

void FUNC_3(void)
{
 struct dentry *VAR_2;
 VAR_2 = FUNC_1("smsdvb", VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_2("Couldn't create sysfs node for smsdvb\n");
  return;
 }
 VAR_0 = VAR_2;
}

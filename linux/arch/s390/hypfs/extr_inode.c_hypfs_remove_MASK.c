
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {struct dentry* d_parent; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,struct dentry*) ;
 int FUNC_8 (int ,struct dentry*) ;

__attribute__((used)) static void FUNC_9(struct dentry *VAR_0)
{
 struct dentry *VAR_1;

 VAR_1 = VAR_0->d_parent;
 FUNC_4(FUNC_1(VAR_1));
 if (FUNC_6(VAR_0)) {
  if (FUNC_2(VAR_0))
   FUNC_7(FUNC_1(VAR_1), VAR_0);
  else
   FUNC_8(FUNC_1(VAR_1), VAR_0);
 }
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 FUNC_5(FUNC_1(VAR_1));
}

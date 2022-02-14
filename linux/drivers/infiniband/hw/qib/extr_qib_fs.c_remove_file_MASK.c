
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (char*,struct dentry*,int ) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,struct dentry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_0, char *VAR_1)
{
 struct dentry *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_1, VAR_0, FUNC_10(VAR_1));

 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  goto bail;
 }

 FUNC_8(&VAR_2->d_lock);
 if (FUNC_6(VAR_2)) {
  FUNC_2(VAR_2);
  FUNC_9(&VAR_2->d_lock);
  FUNC_7(FUNC_3(VAR_0), VAR_2);
 } else {
  FUNC_9(&VAR_2->d_lock);
 }
 FUNC_4(VAR_2);

 VAR_3 = 0;
bail:




 return VAR_3;
}

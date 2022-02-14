
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(void)
{
 FUNC_0("onbranch", "master", 1);
 FUNC_0("onbranch", "m*", 1);
 FUNC_0("onbranch", "*", 1);
 FUNC_0("onbranch", "master/", 0);
 FUNC_0("onbranch", "foo", 0);

 FUNC_1(VAR_0, "foo");
 FUNC_0("onbranch", "master", 0);
 FUNC_0("onbranch", "foo", 1);
 FUNC_0("onbranch", "f*o", 1);

 FUNC_1(VAR_0, "dir/ref");
 FUNC_0("onbranch", "dir/ref", 1);
 FUNC_0("onbranch", "dir/", 1);
 FUNC_0("onbranch", "dir/*", 1);
 FUNC_0("onbranch", "dir/**", 1);
 FUNC_0("onbranch", "**", 1);
 FUNC_0("onbranch", "dir", 0);
 FUNC_0("onbranch", "dir*", 0);

 FUNC_1(VAR_0, "dir/subdir/ref");
 FUNC_0("onbranch", "dir/subdir/", 1);
 FUNC_0("onbranch", "dir/subdir/*", 1);
 FUNC_0("onbranch", "dir/subdir/ref", 1);
 FUNC_0("onbranch", "dir/", 1);
 FUNC_0("onbranch", "dir/**", 1);
 FUNC_0("onbranch", "**", 1);
 FUNC_0("onbranch", "dir", 0);
 FUNC_0("onbranch", "dir*", 0);
 FUNC_0("onbranch", "dir/*", 0);
}

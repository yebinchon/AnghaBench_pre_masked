
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x {struct dentry* debugfs; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,struct dentry*,struct host1x*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct host1x*,struct dentry*) ;

__attribute__((used)) static void FUNC_4(struct host1x *VAR_8)
{
 struct dentry *VAR_9 = FUNC_0("tegra-host1x", ((void*)0));


 VAR_8->debugfs = VAR_9;

 FUNC_1("status", VAR_0, VAR_9, VAR_8, &VAR_3);
 FUNC_1("status_all", VAR_0, VAR_9, VAR_8,
       &VAR_2);

 FUNC_2("trace_cmdbuf", VAR_0|VAR_1, VAR_9,
      &VAR_7);

 FUNC_3(VAR_8, VAR_9);

 FUNC_2("force_timeout_pid", VAR_0|VAR_1, VAR_9,
      &VAR_5);
 FUNC_2("force_timeout_val", VAR_0|VAR_1, VAR_9,
      &VAR_6);
 FUNC_2("force_timeout_channel", VAR_0|VAR_1, VAR_9,
      &VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vas_window {int winid; int * dbgname; struct dentry* dbgdir; TYPE_1__* vinst; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int dbgdir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int *,int ) ;
 struct dentry* FUNC_2 (char*,int,struct dentry*,struct vas_window*,int *) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int,char*,int) ;

void FUNC_7(struct vas_window *VAR_3)
{
 struct dentry *VAR_4, *VAR_5;

 if (!VAR_3->vinst->dbgdir)
  return;

 VAR_3->dbgname = FUNC_5(16, VAR_0);
 if (!VAR_3->dbgname)
  return;

 FUNC_6(VAR_3->dbgname, 16, "w%d", VAR_3->winid);

 VAR_5 = FUNC_1(VAR_3->dbgname, VAR_3->vinst->dbgdir);
 if (FUNC_0(VAR_5))
  goto free_name;

 VAR_3->dbgdir = VAR_5;

 VAR_4 = FUNC_2("info", 0444, VAR_5, VAR_3, &VAR_2);
 if (FUNC_0(VAR_4))
  goto remove_dir;

 VAR_4 = FUNC_2("hvwc", 0444, VAR_5, VAR_3, &VAR_1);
 if (FUNC_0(VAR_4))
  goto remove_dir;

 return;

remove_dir:
 FUNC_3(VAR_3->dbgdir);
 VAR_3->dbgdir = ((void*)0);

free_name:
 FUNC_4(VAR_3->dbgname);
 VAR_3->dbgname = ((void*)0);
}

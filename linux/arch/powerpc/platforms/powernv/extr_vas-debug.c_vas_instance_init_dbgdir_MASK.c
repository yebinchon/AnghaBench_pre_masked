
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_instance {int vas_id; struct dentry* dbgdir; int * dbgname; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int,char*,int) ;
 int VAR_1 ;
 int FUNC_5 () ;

void FUNC_6(struct vas_instance *VAR_2)
{
 struct dentry *VAR_3;

 FUNC_5();
 if (!VAR_1)
  return;

 VAR_2->dbgname = FUNC_3(16, VAR_0);
 if (!VAR_2->dbgname)
  return;

 FUNC_4(VAR_2->dbgname, 16, "v%d", VAR_2->vas_id);

 VAR_3 = FUNC_1(VAR_2->dbgname, VAR_1);
 if (FUNC_0(VAR_3))
  goto free_name;

 VAR_2->dbgdir = VAR_3;
 return;

free_name:
 FUNC_2(VAR_2->dbgname);
 VAR_2->dbgname = ((void*)0);
 VAR_2->dbgdir = ((void*)0);
}

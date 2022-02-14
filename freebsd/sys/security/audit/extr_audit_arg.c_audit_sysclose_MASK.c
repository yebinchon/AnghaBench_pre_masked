
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct kaudit_record {int dummy; } ;
struct file {struct vnode* f_vnode; } ;
typedef int cap_rights_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (int *) ;
 struct kaudit_record* FUNC_5 () ;
 int FUNC_6 (struct file*,struct thread*) ;
 scalar_t__ FUNC_7 (struct thread*,int,int ,struct file**) ;
 int FUNC_8 (struct vnode*,int) ;

void
FUNC_9(struct thread *VAR_2, int VAR_3)
{
 cap_rights_t VAR_4;
 struct kaudit_record *VAR_5;
 struct vnode *VAR_6;
 struct file *VAR_7;

 FUNC_0(VAR_2 != ((void*)0), ("audit_sysclose: td == NULL"));

 VAR_5 = FUNC_5();
 if (VAR_5 == ((void*)0))
  return;

 FUNC_2(VAR_3);

 if (FUNC_7(VAR_2, VAR_3, FUNC_4(&VAR_4), &VAR_7) != 0)
  return;

 VAR_6 = VAR_7->f_vnode;
 FUNC_8(VAR_6, VAR_1 | VAR_0);
 FUNC_3(VAR_6);
 FUNC_1(VAR_6, 0);
 FUNC_6(VAR_7, VAR_2);
}

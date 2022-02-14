
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct binder_proc* private_data; } ;
struct binder_thread {int wait; int proc; int looper; } ;
struct binder_proc {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct binder_thread*) ;
 struct binder_thread* FUNC_1 (struct binder_proc*) ;
 scalar_t__ FUNC_2 (struct binder_thread*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_3,
    struct poll_table_struct *VAR_4)
{
 struct binder_proc *VAR_5 = VAR_3->private_data;
 struct binder_thread *VAR_6 = ((void*)0);
 bool VAR_7;

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return VAR_2;

 FUNC_3(VAR_6->proc);
 VAR_6->looper |= VAR_0;
 VAR_7 = FUNC_0(VAR_6);

 FUNC_4(VAR_6->proc);

 FUNC_5(VAR_3, &VAR_6->wait, VAR_4);

 if (FUNC_2(VAR_6, VAR_7))
  return VAR_1;

 return 0;
}

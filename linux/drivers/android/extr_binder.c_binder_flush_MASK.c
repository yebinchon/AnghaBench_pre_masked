
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct binder_proc* private_data; } ;
struct binder_proc {int dummy; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int FUNC_0 (struct binder_proc*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct binder_proc *VAR_3 = VAR_1->private_data;

 FUNC_0(VAR_3, VAR_0);

 return 0;
}

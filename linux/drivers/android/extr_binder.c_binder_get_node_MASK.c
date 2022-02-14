
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_proc {int dummy; } ;
struct binder_node {int dummy; } ;
typedef int binder_uintptr_t ;


 struct binder_node* FUNC_0 (struct binder_proc*,int ) ;
 int FUNC_1 (struct binder_proc*) ;
 int FUNC_2 (struct binder_proc*) ;

__attribute__((used)) static struct binder_node *FUNC_3(struct binder_proc *VAR_0,
        binder_uintptr_t VAR_1)
{
 struct binder_node *VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
 return VAR_2;
}

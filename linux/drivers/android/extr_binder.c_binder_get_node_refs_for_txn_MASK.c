
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct binder_proc {int tmp_ref; } ;
struct binder_node {struct binder_proc* proc; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_node*,int,int ,int *) ;
 int FUNC_1 (struct binder_node*) ;
 int FUNC_2 (struct binder_node*) ;
 int FUNC_3 (struct binder_node*) ;

__attribute__((used)) static struct binder_node *FUNC_4(
  struct binder_node *VAR_1,
  struct binder_proc **VAR_2,
  uint32_t *VAR_3)
{
 struct binder_node *VAR_4 = ((void*)0);

 FUNC_2(VAR_1);
 if (VAR_1->proc) {
  VAR_4 = VAR_1;
  FUNC_0(VAR_1, 1, 0, ((void*)0));
  FUNC_1(VAR_1);
  VAR_1->proc->tmp_ref++;
  *VAR_2 = VAR_1->proc;
 } else
  *VAR_3 = VAR_0;
 FUNC_3(VAR_1);

 return VAR_4;
}

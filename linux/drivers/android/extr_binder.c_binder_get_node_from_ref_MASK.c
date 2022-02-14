
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct binder_ref_data {int dummy; } ;
struct binder_ref {struct binder_ref_data data; struct binder_node* node; } ;
struct binder_proc {int dummy; } ;
struct binder_node {int dummy; } ;


 struct binder_ref* FUNC_0 (struct binder_proc*,int ,int) ;
 int FUNC_1 (struct binder_node*) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_proc*) ;

__attribute__((used)) static struct binder_node *FUNC_4(
  struct binder_proc *VAR_0,
  u32 VAR_1, bool VAR_2,
  struct binder_ref_data *VAR_3)
{
 struct binder_node *VAR_4;
 struct binder_ref *VAR_5;

 FUNC_2(VAR_0);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_5)
  goto err_no_ref;
 VAR_4 = VAR_5->node;




 FUNC_1(VAR_4);
 if (VAR_3)
  *VAR_3 = VAR_5->data;
 FUNC_3(VAR_0);

 return VAR_4;

err_no_ref:
 FUNC_3(VAR_0);
 return ((void*)0);
}

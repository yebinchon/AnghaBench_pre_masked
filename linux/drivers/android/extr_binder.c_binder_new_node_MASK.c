
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flat_binder_object {int dummy; } ;
struct binder_proc {int dummy; } ;
struct binder_node {int dummy; } ;


 int VAR_0 ;
 struct binder_node* FUNC_0 (struct binder_proc*,struct binder_node*,struct flat_binder_object*) ;
 int FUNC_1 (struct binder_proc*) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_node*) ;
 struct binder_node* FUNC_4 (int,int ) ;

__attribute__((used)) static struct binder_node *FUNC_5(struct binder_proc *VAR_1,
        struct flat_binder_object *VAR_2)
{
 struct binder_node *VAR_3;
 struct binder_node *VAR_4 = FUNC_4(sizeof(*VAR_3), VAR_0);

 if (!VAR_4)
  return ((void*)0);
 FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_2);
 FUNC_2(VAR_1);
 if (VAR_3 != VAR_4)



  FUNC_3(VAR_4);

 return VAR_3;
}

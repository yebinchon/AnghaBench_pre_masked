
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct binder_ref_data {int dummy; } ;
struct binder_ref {struct binder_ref_data data; } ;
struct binder_proc {int dummy; } ;
struct binder_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct binder_ref* FUNC_0 (struct binder_proc*,struct binder_node*,struct binder_ref*) ;
 int FUNC_1 (struct binder_ref*,int,struct list_head*) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_proc*) ;
 int FUNC_4 (struct binder_ref*) ;
 struct binder_ref* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct binder_proc *VAR_2,
   struct binder_node *VAR_3,
   bool VAR_4,
   struct list_head *VAR_5,
   struct binder_ref_data *VAR_6)
{
 struct binder_ref *VAR_7;
 struct binder_ref *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_2(VAR_2);
 VAR_7 = FUNC_0(VAR_2, VAR_3, ((void*)0));
 if (!VAR_7) {
  FUNC_3(VAR_2);
  VAR_8 = FUNC_5(sizeof(*VAR_7), VAR_1);
  if (!VAR_8)
   return -VAR_0;
  FUNC_2(VAR_2);
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_8);
 }
 VAR_9 = FUNC_1(VAR_7, VAR_4, VAR_5);
 *VAR_6 = VAR_7->data;
 FUNC_3(VAR_2);
 if (VAR_8 && VAR_7 != VAR_8)




  FUNC_4(VAR_8);
 return VAR_9;
}

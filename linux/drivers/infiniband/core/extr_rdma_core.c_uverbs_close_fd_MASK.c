
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {struct ib_uverbs_file* ufile; int context; } ;
struct ib_uverbs_file {int ref; int hw_destroy_rwsem; } ;
struct ib_uobject {int context; struct ib_uverbs_file* ufile; } ;
struct file {struct ib_uobject* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_uobject*,int ,struct uverbs_attr_bundle*) ;
 int FUNC_5 (struct ib_uobject*,int ) ;
 int FUNC_6 (struct ib_uobject*) ;

void FUNC_7(struct file *VAR_3)
{
 struct ib_uobject *VAR_4 = VAR_3->private_data;
 struct ib_uverbs_file *VAR_5 = VAR_4->ufile;
 struct uverbs_attr_bundle VAR_6 = {
  .context = VAR_4->context,
  .ufile = VAR_5,
 };

 if (FUNC_1(&VAR_5->hw_destroy_rwsem)) {






  FUNC_0(FUNC_5(VAR_4, VAR_1));
  FUNC_4(VAR_4, VAR_0, &VAR_6);
  FUNC_3(&VAR_5->hw_destroy_rwsem);
 }


 FUNC_2(&VAR_5->ref, VAR_2);


 FUNC_6(VAR_4);
}

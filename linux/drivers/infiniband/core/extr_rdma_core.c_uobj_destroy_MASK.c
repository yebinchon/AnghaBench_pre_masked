
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {struct ib_uverbs_file* ufile; } ;
struct ib_uverbs_file {int hw_destroy_rwsem; } ;
struct ib_uobject {int usecnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_uobject*,int ,struct uverbs_attr_bundle*) ;
 int FUNC_4 (struct ib_uobject*,int ) ;

int FUNC_5(struct ib_uobject *VAR_2, struct uverbs_attr_bundle *VAR_3)
{
 struct ib_uverbs_file *VAR_4 = VAR_3->ufile;
 int VAR_5;

 FUNC_1(&VAR_4->hw_destroy_rwsem);

 VAR_5 = FUNC_4(VAR_2, VAR_1);
 if (VAR_5)
  goto out_unlock;

 VAR_5 = FUNC_3(VAR_2, VAR_0, VAR_3);
 if (VAR_5) {
  FUNC_0(&VAR_2->usecnt, 0);
  goto out_unlock;
 }

out_unlock:
 FUNC_2(&VAR_4->hw_destroy_rwsem);
 return VAR_5;
}

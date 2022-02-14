
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_work {int dummy; } ;
struct bt_work {struct policy_work work; int list; } ;
struct background_tracker {int queued; int issued; int work_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct background_tracker*,struct bt_work*) ;
 struct bt_work* FUNC_1 (struct background_tracker*) ;
 int FUNC_2 (int ,struct bt_work*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct policy_work*,struct policy_work*,int) ;
 int FUNC_5 (struct background_tracker*,struct policy_work*,int) ;

int FUNC_6(struct background_tracker *VAR_2,
     struct policy_work *VAR_3,
     struct policy_work **VAR_4)
{
 struct bt_work *VAR_5;

 if (VAR_4)
  *VAR_4 = ((void*)0);

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4(&VAR_5->work, VAR_3, sizeof(*VAR_3));

 if (!FUNC_0(VAR_2, VAR_5)) {




  FUNC_2(VAR_2->work_cache, VAR_5);
  return -VAR_0;
 }

 if (VAR_4) {
  *VAR_4 = &VAR_5->work;
  FUNC_3(&VAR_5->list, &VAR_2->issued);
 } else
  FUNC_3(&VAR_5->list, &VAR_2->queued);
 FUNC_5(VAR_2, &VAR_5->work, 1);

 return 0;
}

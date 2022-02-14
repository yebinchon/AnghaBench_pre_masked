
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_work {int dummy; } ;
struct background_tracker {int work_cache; } ;


 int VAR_0 ;
 struct bt_work* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct background_tracker*) ;

__attribute__((used)) static struct bt_work *FUNC_2(struct background_tracker *VAR_1)
{
 if (FUNC_1(VAR_1))
  return ((void*)0);

 return FUNC_0(VAR_1->work_cache, VAR_0);
}

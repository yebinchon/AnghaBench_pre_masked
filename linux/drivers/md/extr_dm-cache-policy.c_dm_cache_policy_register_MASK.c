
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {int hint_size; unsigned long long name; int list; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long long) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dm_cache_policy_type *VAR_3)
{
 int VAR_4;


 if (VAR_3->hint_size != 0 && VAR_3->hint_size != 4) {
  FUNC_0("hint size must be 0 or 4 but %llu supplied.", (unsigned long long) VAR_3->hint_size);
  return -VAR_0;
 }

 FUNC_3(&VAR_2);
 if (FUNC_1(VAR_3->name)) {
  FUNC_0("attempt to register policy under duplicate name %s", VAR_3->name);
  VAR_4 = -VAR_0;
 } else {
  FUNC_2(&VAR_3->list, &VAR_1);
  VAR_4 = 0;
 }
 FUNC_4(&VAR_2);

 return VAR_4;
}

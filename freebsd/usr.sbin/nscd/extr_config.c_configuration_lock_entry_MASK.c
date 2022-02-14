
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int mp_cache_lock; int negative_cache_lock; int positive_cache_lock; } ;
typedef enum config_entry_lock_type { ____Placeholder_config_entry_lock_type } config_entry_lock_type ;





 int FUNC_0 (void (*) (struct configuration_entry*,int)) ;
 int FUNC_1 (void (*) (struct configuration_entry*,int)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct configuration_entry *VAR_0,
 enum config_entry_lock_type VAR_1)
{
 FUNC_0(FUNC_4);
 FUNC_2(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 128:
  FUNC_3(&VAR_0->positive_cache_lock);
  break;
 case 129:
  FUNC_3(&VAR_0->negative_cache_lock);
  break;
 case 130:
  FUNC_3(&VAR_0->mp_cache_lock);
  break;
 default:

  break;
 }
 FUNC_1(FUNC_4);
}

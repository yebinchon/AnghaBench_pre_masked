
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_dirty_log_type {int list; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dm_dirty_log_type *VAR_2)
{
 FUNC_2(&VAR_1);

 if (!FUNC_0(VAR_2->name)) {
  FUNC_3(&VAR_1);
  return -VAR_0;
 }

 FUNC_1(&VAR_2->list);

 FUNC_3(&VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_dirty_log_type {int module; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dm_dirty_log_type *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_2(&VAR_0);
 if (!FUNC_0(VAR_1->name))
  goto out;

 FUNC_1(VAR_1->module);

out:
 FUNC_3(&VAR_0);
}

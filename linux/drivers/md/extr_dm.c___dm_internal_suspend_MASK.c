
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; int map; int flags; int internal_suspend_count; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mapped_device*,struct dm_table*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct dm_table* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mapped_device *VAR_2, unsigned VAR_3)
{
 struct dm_table *VAR_4 = ((void*)0);

 FUNC_3(&VAR_2->suspend_lock);

 if (VAR_2->internal_suspend_count++)
  return;

 if (FUNC_1(VAR_2)) {
  FUNC_6(VAR_0, &VAR_2->flags);
  return;
 }

 VAR_4 = FUNC_5(VAR_2->map, FUNC_4(&VAR_2->suspend_lock));







 (void) FUNC_0(VAR_2, VAR_4, VAR_3, VAR_1,
       VAR_0);

 FUNC_2(VAR_4);
}

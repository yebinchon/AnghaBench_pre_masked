
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; int map; int flags; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mapped_device*,struct dm_table*,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 scalar_t__ FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct dm_table*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 struct dm_table* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;

int FUNC_9(struct mapped_device *VAR_5, unsigned VAR_6)
{
 struct dm_table *VAR_7 = ((void*)0);
 int VAR_8 = 0;

retry:
 FUNC_5(&VAR_5->suspend_lock, VAR_3);

 if (FUNC_2(VAR_5)) {
  VAR_8 = -VAR_2;
  goto out_unlock;
 }

 if (FUNC_1(VAR_5)) {

  FUNC_6(&VAR_5->suspend_lock);
  VAR_8 = FUNC_8(&VAR_5->flags, VAR_1, VAR_4);
  if (VAR_8)
   return VAR_8;
  goto retry;
 }

 VAR_7 = FUNC_7(VAR_5->map, FUNC_4(&VAR_5->suspend_lock));

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6, VAR_4, VAR_0);
 if (VAR_8)
  goto out_unlock;

 FUNC_3(VAR_7);

out_unlock:
 FUNC_6(&VAR_5->suspend_lock);
 return VAR_8;
}

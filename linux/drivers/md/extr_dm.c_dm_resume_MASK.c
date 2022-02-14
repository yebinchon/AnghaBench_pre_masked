
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; int flags; int map; } ;
struct dm_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mapped_device*,struct dm_table*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct dm_table*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 struct dm_table* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;

int FUNC_10(struct mapped_device *VAR_5)
{
 int VAR_6;
 struct dm_table *VAR_7 = ((void*)0);

retry:
 VAR_6 = -VAR_2;
 FUNC_6(&VAR_5->suspend_lock, VAR_3);

 if (!FUNC_3(VAR_5))
  goto out;

 if (FUNC_2(VAR_5)) {

  FUNC_7(&VAR_5->suspend_lock);
  VAR_6 = FUNC_9(&VAR_5->flags, VAR_1, VAR_4);
  if (VAR_6)
   return VAR_6;
  goto retry;
 }

 VAR_7 = FUNC_8(VAR_5->map, FUNC_5(&VAR_5->suspend_lock));
 if (!VAR_7 || !FUNC_4(VAR_7))
  goto out;

 VAR_6 = FUNC_0(VAR_5, VAR_7);
 if (VAR_6)
  goto out;

 FUNC_1(VAR_0, &VAR_5->flags);
out:
 FUNC_7(&VAR_5->suspend_lock);

 return VAR_6;
}

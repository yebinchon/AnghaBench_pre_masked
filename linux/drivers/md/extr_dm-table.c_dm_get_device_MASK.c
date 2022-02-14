
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_table* table; } ;
struct dm_table {int md; int devices; } ;
struct dm_dev_internal {struct dm_dev* dm_dev; int count; int list; } ;
struct dm_dev {int mode; } ;
typedef int fmode_t ;
typedef int dev_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ,int,struct dm_dev**) ;
 struct dm_dev_internal* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct dm_dev_internal*) ;
 struct dm_dev_internal* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct dm_dev_internal*,int,int ) ;

int FUNC_10(struct dm_target *VAR_3, const char *VAR_4, fmode_t VAR_5,
    struct dm_dev **VAR_6)
{
 int VAR_7;
 dev_t VAR_8;
 struct dm_dev_internal *VAR_9;
 struct dm_table *VAR_10 = VAR_3->table;

 FUNC_0(!VAR_10);

 VAR_8 = FUNC_1(VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(&VAR_10->devices, VAR_8);
 if (!VAR_9) {
  VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
  if (!VAR_9)
   return -VAR_1;

  if ((VAR_7 = FUNC_2(VAR_10->md, VAR_8, VAR_5, &VAR_9->dm_dev))) {
   FUNC_4(VAR_9);
   return VAR_7;
  }

  FUNC_8(&VAR_9->count, 1);
  FUNC_6(&VAR_9->list, &VAR_10->devices);
  goto out;

 } else if (VAR_9->dm_dev->mode != (VAR_5 | VAR_9->dm_dev->mode)) {
  VAR_7 = FUNC_9(VAR_9, VAR_5, VAR_10->md);
  if (VAR_7)
   return VAR_7;
 }
 FUNC_7(&VAR_9->count);
out:
 *VAR_6 = VAR_9->dm_dev;
 return 0;
}

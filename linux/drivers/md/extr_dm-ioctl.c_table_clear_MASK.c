
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {struct mapped_device* md; struct dm_table* new_map; } ;
struct file {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 struct hash_cell* FUNC_2 (struct dm_ioctl*) ;
 int VAR_2 ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct dm_table*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, struct dm_ioctl *VAR_4, size_t VAR_5)
{
 struct hash_cell *VAR_6;
 struct mapped_device *VAR_7;
 struct dm_table *VAR_8 = ((void*)0);

 FUNC_6(&VAR_2);

 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_0("device doesn't appear to be in the dev hash table.");
  FUNC_7(&VAR_2);
  return -VAR_1;
 }

 if (VAR_6->new_map) {
  VAR_8 = VAR_6->new_map;
  VAR_6->new_map = ((void*)0);
 }

 VAR_4->flags &= ~VAR_0;

 FUNC_1(VAR_6->md, VAR_4);
 VAR_7 = VAR_6->md;
 FUNC_7(&VAR_2);
 if (VAR_8) {
  FUNC_4(VAR_7);
  FUNC_5(VAR_8);
 }
 FUNC_3(VAR_7);

 return 0;
}

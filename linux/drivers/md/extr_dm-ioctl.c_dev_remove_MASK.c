
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {int name; struct mapped_device* md; } ;
struct file {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; int event_nr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hash_cell* FUNC_1 (struct dm_ioctl*) ;
 struct dm_table* FUNC_2 (struct hash_cell*) ;
 int VAR_5 ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*,int ,int ) ;
 int FUNC_5 (struct mapped_device*,int,int) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct mapped_device*) ;
 int FUNC_8 (struct dm_table*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_6, struct dm_ioctl *VAR_7, size_t VAR_8)
{
 struct hash_cell *VAR_9;
 struct mapped_device *VAR_10;
 int VAR_11;
 struct dm_table *VAR_12;

 FUNC_9(&VAR_5);
 VAR_9 = FUNC_1(VAR_7);

 if (!VAR_9) {
  FUNC_0("device doesn't appear to be in the dev hash table.");
  FUNC_10(&VAR_5);
  return -VAR_3;
 }

 VAR_10 = VAR_9->md;




 VAR_11 = FUNC_5(VAR_10, !!(VAR_7->flags & VAR_0), 0);
 if (VAR_11) {
  if (VAR_11 == -VAR_2 && VAR_7->flags & VAR_0) {
   FUNC_10(&VAR_5);
   FUNC_6(VAR_10);
   return 0;
  }
  FUNC_0("unable to remove open device %s", VAR_9->name);
  FUNC_10(&VAR_5);
  FUNC_6(VAR_10);
  return VAR_11;
 }

 VAR_12 = FUNC_2(VAR_9);
 FUNC_10(&VAR_5);

 if (VAR_12) {
  FUNC_7(VAR_10);
  FUNC_8(VAR_12);
 }

 VAR_7->flags &= ~VAR_0;

 if (!FUNC_4(VAR_10, VAR_4, VAR_7->event_nr))
  VAR_7->flags |= VAR_1;

 FUNC_6(VAR_10);
 FUNC_3(VAR_10);
 return 0;
}

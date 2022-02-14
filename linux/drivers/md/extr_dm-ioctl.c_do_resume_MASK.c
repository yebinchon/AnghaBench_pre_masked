
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {struct dm_table* new_map; struct mapped_device* md; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; int event_nr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct dm_table*) ;
 int VAR_8 ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct mapped_device*,struct dm_ioctl*) ;
 struct hash_cell* FUNC_4 (struct dm_ioctl*) ;
 int VAR_9 ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*,int ,int ) ;
 int FUNC_7 (struct mapped_device*) ;
 int FUNC_8 (struct mapped_device*) ;
 int FUNC_9 (struct mapped_device*,unsigned int) ;
 scalar_t__ FUNC_10 (struct mapped_device*) ;
 struct dm_table* FUNC_11 (struct mapped_device*,struct dm_table*) ;
 int FUNC_12 (struct mapped_device*) ;
 int FUNC_13 (struct dm_table*) ;
 int FUNC_14 (struct dm_table*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct dm_ioctl *VAR_10)
{
 int VAR_11 = 0;
 unsigned VAR_12 = VAR_3;
 struct hash_cell *VAR_13;
 struct mapped_device *VAR_14;
 struct dm_table *VAR_15, *VAR_16 = ((void*)0);

 FUNC_15(&VAR_9);

 VAR_13 = FUNC_4(VAR_10);
 if (!VAR_13) {
  FUNC_0("device doesn't appear to be in the dev hash table.");
  FUNC_17(&VAR_9);
  return -VAR_6;
 }

 VAR_14 = VAR_13->md;

 VAR_15 = VAR_13->new_map;
 VAR_13->new_map = ((void*)0);
 VAR_10->flags &= ~VAR_0;

 FUNC_17(&VAR_9);


 if (VAR_15) {

  if (VAR_10->flags & VAR_2)
   VAR_12 &= ~VAR_3;
  if (VAR_10->flags & VAR_1)
   VAR_12 |= VAR_4;
  if (!FUNC_10(VAR_14))
   FUNC_9(VAR_14, VAR_12);

  VAR_16 = FUNC_11(VAR_14, VAR_15);
  if (FUNC_1(VAR_16)) {
   FUNC_12(VAR_14);
   FUNC_13(VAR_15);
   FUNC_7(VAR_14);
   return FUNC_2(VAR_16);
  }

  if (FUNC_14(VAR_15) & VAR_7)
   FUNC_16(FUNC_5(VAR_14), 0);
  else
   FUNC_16(FUNC_5(VAR_14), 1);
 }

 if (FUNC_10(VAR_14)) {
  VAR_11 = FUNC_8(VAR_14);
  if (!VAR_11 && !FUNC_6(VAR_14, VAR_8, VAR_10->event_nr))
   VAR_10->flags |= VAR_5;
 }





 if (VAR_16)
  FUNC_13(VAR_16);

 if (!VAR_11)
  FUNC_3(VAR_14, VAR_10);

 FUNC_7(VAR_14);
 return VAR_11;
}

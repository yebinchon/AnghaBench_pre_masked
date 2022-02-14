
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int dummy; } ;
struct dm_clone_region_hydration {int dummy; } ;
struct clone {unsigned long nr_regions; int cmd; } ;
struct batch_info {int dummy; } ;


 int FUNC_0 (struct batch_info*,struct dm_clone_region_hydration*) ;
 int FUNC_1 (struct hash_table_bucket*,unsigned long) ;
 int FUNC_2 (struct hash_table_bucket*,struct dm_clone_region_hydration*) ;
 struct dm_clone_region_hydration* FUNC_3 (struct clone*) ;
 int FUNC_4 (struct hash_table_bucket*,unsigned long) ;
 int FUNC_5 (struct hash_table_bucket*,unsigned long) ;
 unsigned long FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct dm_clone_region_hydration*) ;
 struct hash_table_bucket* FUNC_9 (struct clone*,unsigned long) ;
 int FUNC_10 (struct dm_clone_region_hydration*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_11(struct clone *VAR_0,
         unsigned long VAR_1,
         struct batch_info *VAR_2)
{
 unsigned long VAR_3;
 struct hash_table_bucket *VAR_4;
 struct dm_clone_region_hydration *VAR_5;
 unsigned long VAR_6 = VAR_0->nr_regions;

 VAR_5 = FUNC_3(VAR_0);


 do {
  VAR_1 = FUNC_6(VAR_0->cmd, VAR_1);
  if (VAR_1 == VAR_6)
   break;

  VAR_4 = FUNC_9(VAR_0, VAR_1);
  FUNC_4(VAR_4, VAR_3);

  if (!FUNC_7(VAR_0->cmd, VAR_1) &&
      !FUNC_1(VAR_4, VAR_1)) {
   FUNC_10(VAR_5, VAR_1);
   FUNC_2(VAR_4, VAR_5);
   FUNC_5(VAR_4, VAR_3);


   FUNC_0(VAR_2, VAR_5);

   return (VAR_1 + 1);
  }

  FUNC_5(VAR_4, VAR_3);

 } while (++VAR_1 < VAR_6);

 if (VAR_5)
  FUNC_8(VAR_5);

 return VAR_1;
}

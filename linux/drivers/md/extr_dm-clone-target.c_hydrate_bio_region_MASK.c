
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table_bucket {int dummy; } ;
struct dm_clone_region_hydration {int deferred_bios; int h; } ;
struct clone {int cmd; } ;
struct bio {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct dm_clone_region_hydration* FUNC_0 (struct hash_table_bucket*,struct dm_clone_region_hydration*) ;
 struct dm_clone_region_hydration* FUNC_1 (struct hash_table_bucket*,unsigned long) ;
 struct dm_clone_region_hydration* FUNC_2 (struct clone*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (int *,struct bio*) ;
 unsigned long FUNC_5 (struct clone*,struct bio*) ;
 int FUNC_6 (struct hash_table_bucket*,unsigned long) ;
 int FUNC_7 (struct hash_table_bucket*,unsigned long) ;
 scalar_t__ FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct dm_clone_region_hydration*) ;
 scalar_t__ FUNC_10 (struct clone*) ;
 struct hash_table_bucket* FUNC_11 (struct clone*,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct dm_clone_region_hydration*,int) ;
 int FUNC_14 (struct dm_clone_region_hydration*,unsigned long) ;
 int FUNC_15 (struct dm_clone_region_hydration*,struct bio*) ;
 scalar_t__ FUNC_16 (struct clone*,struct bio*) ;
 int FUNC_17 (struct clone*,struct bio*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct clone *VAR_1, struct bio *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 struct hash_table_bucket *VAR_5;
 struct dm_clone_region_hydration *VAR_6, *VAR_7;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 VAR_5 = FUNC_11(VAR_1, VAR_4);

 FUNC_6(VAR_5, VAR_3);

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6) {

  FUNC_4(&VAR_6->deferred_bios, VAR_2);
  FUNC_7(VAR_5, VAR_3);
  return;
 }

 if (FUNC_8(VAR_1->cmd, VAR_4)) {

  FUNC_7(VAR_5, VAR_3);
  FUNC_17(VAR_1, VAR_2);
  return;
 }





 FUNC_7(VAR_5, VAR_3);

 VAR_6 = FUNC_2(VAR_1);
 FUNC_14(VAR_6, VAR_4);

 FUNC_6(VAR_5, VAR_3);


 if (FUNC_8(VAR_1->cmd, VAR_4)) {
  FUNC_7(VAR_5, VAR_3);
  FUNC_9(VAR_6);
  FUNC_17(VAR_1, VAR_2);
  return;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 != VAR_6) {

  FUNC_4(&VAR_7->deferred_bios, VAR_2);
  FUNC_7(VAR_5, VAR_3);
  FUNC_9(VAR_6);
  return;
 }






 if (FUNC_18(FUNC_10(VAR_1) >= VAR_0)) {
  FUNC_12(&VAR_6->h);
  FUNC_7(VAR_5, VAR_3);
  FUNC_9(VAR_6);
  FUNC_3(VAR_2);
  return;
 }
 if (FUNC_16(VAR_1, VAR_2)) {
  FUNC_7(VAR_5, VAR_3);
  FUNC_15(VAR_6, VAR_2);
 } else {
  FUNC_4(&VAR_6->deferred_bios, VAR_2);
  FUNC_7(VAR_5, VAR_3);
  FUNC_13(VAR_6, 1);
 }
}

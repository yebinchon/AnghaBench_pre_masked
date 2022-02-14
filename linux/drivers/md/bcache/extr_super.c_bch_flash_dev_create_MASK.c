
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
struct uuid_entry {int sectors; int last_reg; int first_reg; int label; int uuid; } ;
struct cache_set {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uuid_entry*,int) ;
 int FUNC_1 (struct cache_set*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cache_set*,struct uuid_entry*) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct uuid_entry* FUNC_9 (struct cache_set*) ;

int FUNC_10(struct cache_set *VAR_5, uint64_t VAR_6)
{
 struct uuid_entry *VAR_7;

 if (FUNC_8(VAR_1, &VAR_5->flags))
  return -VAR_2;

 if (!FUNC_8(VAR_0, &VAR_5->flags))
  return -VAR_4;

 VAR_7 = FUNC_9(VAR_5);
 if (!VAR_7) {
  FUNC_7("Can't create volume, no room for UUID");
  return -VAR_3;
 }

 FUNC_4(VAR_7->uuid, 16);
 FUNC_6(VAR_7->label, 0, 32);
 VAR_7->first_reg = VAR_7->last_reg = FUNC_2((u32)FUNC_5());

 FUNC_0(VAR_7, 1);
 VAR_7->sectors = VAR_6 >> 9;

 FUNC_1(VAR_5);

 return FUNC_3(VAR_5, VAR_7);
}

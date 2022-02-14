
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct cache* private; } ;
struct discard_load_info {int dummy; } ;
struct cache {int sized; scalar_t__ cache_size; int loaded_mappings; int loaded_discards; int cmd; int discard_nr_blocks; int discard_bitset; int policy; } ;
typedef scalar_t__ dm_cblock_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cache*,struct discard_load_info*) ;
 int FUNC_5 (int ,int ,struct discard_load_info*) ;
 int FUNC_6 (int ,int ,int ,struct cache*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct cache*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (struct cache*,char*,int) ;
 int FUNC_10 (struct cache*,scalar_t__) ;
 int FUNC_11 (struct discard_load_info*) ;

__attribute__((used)) static int FUNC_12(struct dm_target *VAR_3)
{
 int VAR_4 = 0;
 struct cache *VAR_5 = VAR_3->private;
 dm_cblock_t VAR_6 = FUNC_8(VAR_5);




 if (!VAR_5->sized) {
  VAR_4 = FUNC_10(VAR_5, VAR_6);
  if (VAR_4)
   return VAR_4;

  VAR_5->sized = 1;

 } else if (VAR_6 != VAR_5->cache_size) {
  if (!FUNC_2(VAR_5, VAR_6))
   return -VAR_0;

  VAR_4 = FUNC_10(VAR_5, VAR_6);
  if (VAR_4)
   return VAR_4;
 }

 if (!VAR_5->loaded_mappings) {
  VAR_4 = FUNC_6(VAR_5->cmd, VAR_5->policy,
        VAR_2, VAR_5);
  if (VAR_4) {
   FUNC_0("%s: could not load cache mappings", FUNC_1(VAR_5));
   FUNC_9(VAR_5, "dm_cache_load_mappings", VAR_4);
   return VAR_4;
  }

  VAR_5->loaded_mappings = 1;
 }

 if (!VAR_5->loaded_discards) {
  struct discard_load_info VAR_7;






  FUNC_3(VAR_5->discard_bitset, FUNC_7(VAR_5->discard_nr_blocks));

  FUNC_4(VAR_5, &VAR_7);
  VAR_4 = FUNC_5(VAR_5->cmd, VAR_1, &VAR_7);
  if (VAR_4) {
   FUNC_0("%s: could not load origin discards", FUNC_1(VAR_5));
   FUNC_9(VAR_5, "dm_cache_load_discards", VAR_4);
   return VAR_4;
  }
  FUNC_11(&VAR_7);

  VAR_5->loaded_discards = 1;
 }

 return VAR_4;
}

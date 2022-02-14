
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int cmd; int discard_nr_blocks; int discard_block_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cache*) ;
 unsigned int FUNC_2 (int ,int ,int ) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cache*) ;
 int FUNC_6 (struct cache*,int ) ;
 int FUNC_7 (struct cache*,char*,unsigned int) ;
 int FUNC_8 (unsigned int) ;

__attribute__((used)) static int FUNC_9(struct cache *VAR_2)
{
 unsigned VAR_3, VAR_4;

 if (FUNC_5(VAR_2) >= VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_2(VAR_2->cmd, VAR_2->discard_block_size,
        VAR_2->discard_nr_blocks);
 if (VAR_4) {
  FUNC_0("%s: could not resize on-disk discard bitset", FUNC_1(VAR_2));
  FUNC_7(VAR_2, "dm_cache_discard_bitset_resize", VAR_4);
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_2->discard_nr_blocks); VAR_3++) {
  VAR_4 = FUNC_3(VAR_2->cmd, FUNC_8(VAR_3),
      FUNC_6(VAR_2, FUNC_8(VAR_3)));
  if (VAR_4) {
   FUNC_7(VAR_2, "dm_cache_set_discard", VAR_4);
   return VAR_4;
  }
 }

 return 0;
}

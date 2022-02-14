
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_cache_metadata {int discard_block_size; int discard_nr_blocks; int discard_root; int discard_info; scalar_t__ clean_when_opened; } ;
struct dm_bitset_cursor {int dummy; } ;
typedef int (* load_discard_fn ) (void*,int ,int ,int) ;


 int FUNC_0 (int *,int ,int,struct dm_bitset_cursor*) ;
 int FUNC_1 (struct dm_bitset_cursor*) ;
 int FUNC_2 (struct dm_bitset_cursor*) ;
 int FUNC_3 (struct dm_bitset_cursor*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dm_cache_metadata *VAR_0,
      load_discard_fn VAR_1, void *VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4;
 struct dm_bitset_cursor VAR_5;

 if (FUNC_5(VAR_0->discard_nr_blocks) == 0)

  return 0;

 if (VAR_0->clean_when_opened) {
  VAR_3 = FUNC_4(&VAR_0->discard_info, VAR_0->discard_root, &VAR_0->discard_root);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_0(&VAR_0->discard_info, VAR_0->discard_root,
        FUNC_5(VAR_0->discard_nr_blocks), &VAR_5);
  if (VAR_3)
   return VAR_3;

  for (VAR_4 = 0; ; VAR_4++) {
   VAR_3 = VAR_1(VAR_2, VAR_0->discard_block_size, FUNC_6(VAR_4),
          FUNC_2(&VAR_5));
   if (VAR_3)
    break;

   if (VAR_4 >= (FUNC_5(VAR_0->discard_nr_blocks) - 1))
    break;

   VAR_3 = FUNC_3(&VAR_5);
   if (VAR_3)
    break;
  }

  FUNC_1(&VAR_5);

 } else {
  for (VAR_4 = 0; VAR_4 < FUNC_5(VAR_0->discard_nr_blocks); VAR_4++) {
   VAR_3 = VAR_1(VAR_2, VAR_0->discard_block_size, FUNC_6(VAR_4), 0);
   if (VAR_3)
    return VAR_3;
  }
 }

 return VAR_3;
}

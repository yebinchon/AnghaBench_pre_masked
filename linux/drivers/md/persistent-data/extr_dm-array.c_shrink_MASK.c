
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resize {scalar_t__ new_nr_full_blocks; scalar_t__ old_nr_full_blocks; int info; int new_nr_entries_in_last_block; int root; int old_nr_entries_in_last_block; } ;
struct dm_block {int dummy; } ;
struct array_block {int dummy; } ;


 int FUNC_0 (struct resize*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int *,scalar_t__,struct dm_block**,struct array_block**) ;
 unsigned int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,struct array_block*,int ) ;
 int FUNC_4 (int ,struct dm_block*) ;

__attribute__((used)) static int FUNC_5(struct resize *VAR_0)
{
 int VAR_1;
 unsigned VAR_2, VAR_3;
 struct dm_block *VAR_4;
 struct array_block *VAR_5;




 if (VAR_0->new_nr_full_blocks < VAR_0->old_nr_full_blocks) {
  VAR_2 = FUNC_2(VAR_0->new_nr_full_blocks,
            VAR_0->new_nr_entries_in_last_block);
  VAR_3 = FUNC_2(VAR_0->old_nr_full_blocks,
          VAR_0->old_nr_entries_in_last_block);

  VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_1)
   return VAR_1;
 }




 if (VAR_0->new_nr_entries_in_last_block) {
  VAR_1 = FUNC_1(VAR_0->info, &VAR_0->root,
      VAR_0->new_nr_full_blocks, &VAR_4, &VAR_5);
  if (VAR_1)
   return VAR_1;

  FUNC_3(VAR_0->info, VAR_5, VAR_0->new_nr_entries_in_last_block);
  FUNC_4(VAR_0->info, VAR_4);
 }

 return 0;
}

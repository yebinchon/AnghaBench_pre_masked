
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resize {unsigned int old_nr_full_blocks; scalar_t__ old_nr_entries_in_last_block; scalar_t__ new_nr_entries_in_last_block; int root; int value; int max_entries; int new_nr_full_blocks; int size_of_block; int info; } ;


 int FUNC_0 (struct resize*) ;
 int FUNC_1 (struct resize*,int ) ;
 int FUNC_2 (int ,int ,unsigned int,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct resize *VAR_0)
{
 int VAR_1;
 unsigned VAR_2 = VAR_0->old_nr_full_blocks;

 if (VAR_0->old_nr_entries_in_last_block > 0) {
  VAR_2++;

  VAR_1 = FUNC_1(VAR_0, VAR_0->max_entries);
  if (VAR_1)
   return VAR_1;
 }

 VAR_1 = FUNC_2(VAR_0->info, VAR_0->size_of_block,
    VAR_2,
    VAR_0->new_nr_full_blocks,
    VAR_0->max_entries, VAR_0->value,
    &VAR_0->root);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->new_nr_entries_in_last_block)
  VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}

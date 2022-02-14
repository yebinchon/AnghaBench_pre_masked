
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resize {int root; int value; int new_nr_entries_in_last_block; int new_nr_full_blocks; int max_entries; int size_of_block; int info; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct resize *VAR_0)
{
 return FUNC_0(VAR_0->info, VAR_0->size_of_block,
     VAR_0->max_entries,
     VAR_0->new_nr_full_blocks,
     VAR_0->new_nr_entries_in_last_block,
     VAR_0->value, &VAR_0->root);
}

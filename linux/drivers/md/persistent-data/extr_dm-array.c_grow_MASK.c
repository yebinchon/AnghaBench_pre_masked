
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resize {scalar_t__ new_nr_full_blocks; scalar_t__ old_nr_full_blocks; int new_nr_entries_in_last_block; scalar_t__ old_nr_entries_in_last_block; } ;


 int FUNC_0 (struct resize*) ;
 int FUNC_1 (struct resize*,int ) ;
 int FUNC_2 (struct resize*) ;

__attribute__((used)) static int FUNC_3(struct resize *VAR_0)
{
 if (VAR_0->new_nr_full_blocks > VAR_0->old_nr_full_blocks)
  return FUNC_2(VAR_0);

 else if (VAR_0->old_nr_entries_in_last_block)
  return FUNC_1(VAR_0, VAR_0->new_nr_entries_in_last_block);

 else
  return FUNC_0(VAR_0);
}

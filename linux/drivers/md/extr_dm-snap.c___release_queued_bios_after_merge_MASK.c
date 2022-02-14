
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int bios_queued_during_merge; scalar_t__ num_merging_chunks; scalar_t__ first_merging_chunk; } ;
struct bio {int dummy; } ;


 struct bio* FUNC_0 (int *) ;

__attribute__((used)) static struct bio *FUNC_1(struct dm_snapshot *VAR_0)
{
 VAR_0->first_merging_chunk = 0;
 VAR_0->num_merging_chunks = 0;

 return FUNC_0(&VAR_0->bios_queued_during_merge);
}

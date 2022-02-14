
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_sector {int commit_id; } ;
struct journal_entry {int * last_bytes; } ;
struct dm_integrity_c {unsigned int sectors_per_block; } ;



__attribute__((used)) static void FUNC_0(struct dm_integrity_c *VAR_0, struct journal_sector *VAR_1,
          struct journal_entry *VAR_2)
{
 unsigned VAR_3 = 0;
 do {
  VAR_1->commit_id = VAR_2->last_bytes[VAR_3];
  VAR_1++;
 } while (++VAR_3 < VAR_0->sectors_per_block);
}

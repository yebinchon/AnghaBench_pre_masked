
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_sector {int commit_id; int entries; } ;
struct journal_entry {int dummy; } ;
struct dm_integrity_c {unsigned int journal_section_sectors; unsigned int journal_section_entries; } ;


 int VAR_0 ;
 struct journal_sector* FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 struct journal_entry* FUNC_1 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 int FUNC_2 (struct dm_integrity_c*,unsigned int,unsigned int,unsigned char) ;
 int FUNC_3 (struct journal_entry*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct dm_integrity_c*,unsigned int*) ;
 int FUNC_6 (struct dm_integrity_c*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct dm_integrity_c *VAR_1, unsigned VAR_2,
    unsigned VAR_3, unsigned char VAR_4)
{
 unsigned VAR_5, VAR_6, VAR_7;

 if (!VAR_3)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_5 = VAR_2 + VAR_7;
  FUNC_5(VAR_1, &VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_1->journal_section_sectors; VAR_6++) {
   struct journal_sector *VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_6);
   FUNC_4(&VAR_8->entries, 0, VAR_0);
   VAR_8->commit_id = FUNC_2(VAR_1, VAR_5, VAR_6, VAR_4);
  }
  for (VAR_6 = 0; VAR_6 < VAR_1->journal_section_entries; VAR_6++) {
   struct journal_entry *VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_6);
   FUNC_3(VAR_9);
  }
 }

 FUNC_6(VAR_1, VAR_2, VAR_3);
}

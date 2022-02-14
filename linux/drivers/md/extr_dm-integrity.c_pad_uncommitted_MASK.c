
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {int free_sectors; int journal_section_entries; int n_uncommitted_sections; int journal_sections; int n_committed_sections; int free_section; scalar_t__ free_section_entry; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct dm_integrity_c*,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_integrity_c *VAR_0)
{
 if (VAR_0->free_section_entry) {
  VAR_0->free_sectors -= VAR_0->journal_section_entries - VAR_0->free_section_entry;
  VAR_0->free_section_entry = 0;
  VAR_0->free_section++;
  FUNC_2(VAR_0, &VAR_0->free_section);
  VAR_0->n_uncommitted_sections++;
 }
 if (FUNC_1(VAR_0->journal_sections * VAR_0->journal_section_entries !=
      (VAR_0->n_uncommitted_sections + VAR_0->n_committed_sections) *
      VAR_0->journal_section_entries + VAR_0->free_sectors)) {
  FUNC_0("journal_sections %u, journal_section_entries %u, "
         "n_uncommitted_sections %u, n_committed_sections %u, "
         "journal_section_entries %u, free_sectors %u",
         VAR_0->journal_sections, VAR_0->journal_section_entries,
         VAR_0->n_uncommitted_sections, VAR_0->n_committed_sections,
         VAR_0->journal_section_entries, VAR_0->free_sectors);
 }
}

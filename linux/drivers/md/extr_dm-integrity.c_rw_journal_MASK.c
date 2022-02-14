
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_completion {int dummy; } ;
struct dm_integrity_c {unsigned int journal_section_sectors; } ;


 int FUNC_0 (struct dm_integrity_c*,int,int,unsigned int,unsigned int,struct journal_completion*) ;

__attribute__((used)) static void FUNC_1(struct dm_integrity_c *VAR_0, int VAR_1, int VAR_2, unsigned VAR_3,
         unsigned VAR_4, struct journal_completion *VAR_5)
{
 unsigned VAR_6, VAR_7;

 VAR_6 = VAR_3 * VAR_0->journal_section_sectors;
 VAR_7 = VAR_4 * VAR_0->journal_section_sectors;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6, VAR_7, VAR_5);
}

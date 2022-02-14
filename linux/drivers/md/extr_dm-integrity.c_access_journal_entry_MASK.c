
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_sector {int dummy; } ;
struct journal_entry {int dummy; } ;
struct dm_integrity_c {unsigned int journal_entry_size; } ;


 unsigned int VAR_0 ;
 struct journal_sector* FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int) ;
 int FUNC_1 (struct dm_integrity_c*,unsigned int,unsigned int,int,char*) ;

__attribute__((used)) static struct journal_entry *FUNC_2(struct dm_integrity_c *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5;
 struct journal_sector *VAR_6;

 FUNC_1(VAR_1, VAR_2, VAR_3, 1, "access_journal_entry");

 VAR_4 = VAR_3 % VAR_0;
 VAR_5 = VAR_3 / VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);
 return (struct journal_entry *)((char *)VAR_6 + VAR_5 * VAR_1->journal_entry_size);
}

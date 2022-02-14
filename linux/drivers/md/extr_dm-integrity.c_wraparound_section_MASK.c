
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {unsigned int journal_sections; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct dm_integrity_c *VAR_0, unsigned *VAR_1)
{
 if (FUNC_0(*VAR_1 >= VAR_0->journal_sections))
  *VAR_1 -= VAR_0->journal_sections;
}

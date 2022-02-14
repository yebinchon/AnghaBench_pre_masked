
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** scatterlist ;
struct dm_integrity_c {unsigned int journal_sections; } ;


 int FUNC_0 (int ******) ;

__attribute__((used)) static void FUNC_1(struct dm_integrity_c *VAR_0, struct scatterlist **VAR_1)
{
 unsigned VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->journal_sections; VAR_2++)
  FUNC_0(VAR_1[VAR_2]);
 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_integrity_c {unsigned int journal_section_sectors; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct dm_integrity_c*,unsigned int,unsigned int,int,char*) ;

__attribute__((used)) static void FUNC_1(struct dm_integrity_c *VAR_3, unsigned VAR_4, unsigned VAR_5,
          unsigned *VAR_6, unsigned *VAR_7)
{
 unsigned VAR_8;

 FUNC_0(VAR_3, VAR_4, VAR_5, 0, "page_list_location");

 VAR_8 = VAR_4 * VAR_3->journal_section_sectors + VAR_5;

 *VAR_6 = VAR_8 >> (VAR_0 - VAR_2);
 *VAR_7 = (VAR_8 << VAR_2) & (VAR_1 - 1);
}

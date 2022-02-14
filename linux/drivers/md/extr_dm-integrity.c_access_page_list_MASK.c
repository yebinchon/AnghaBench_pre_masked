
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {int page; } ;
struct journal_sector {int dummy; } ;
struct dm_integrity_c {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (struct dm_integrity_c*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;

__attribute__((used)) static struct journal_sector *FUNC_2(struct dm_integrity_c *VAR_2, struct page_list *VAR_3,
            unsigned VAR_4, unsigned VAR_5, unsigned *VAR_6)
{
 unsigned VAR_7, VAR_8;
 char *VAR_9;

 FUNC_1(VAR_2, VAR_4, VAR_5, &VAR_7, &VAR_8);

 if (VAR_6)
  *VAR_6 = (VAR_0 - VAR_8) >> VAR_1;

 VAR_9 = FUNC_0(VAR_3[VAR_7].page);

 return (struct journal_sector *)(VAR_9 + VAR_8);
}

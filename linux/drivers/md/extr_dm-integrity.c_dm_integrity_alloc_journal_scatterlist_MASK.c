
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page_list {int page; } ;
struct dm_integrity_c {unsigned int journal_sections; scalar_t__ journal_section_sectors; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_integrity_c*,struct scatterlist**) ;
 void* FUNC_1 (unsigned int,int,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct dm_integrity_c*,unsigned int,scalar_t__,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct scatterlist*,unsigned int) ;
 int FUNC_5 (struct scatterlist*,char*,unsigned int) ;

__attribute__((used)) static struct scatterlist **FUNC_6(struct dm_integrity_c *VAR_4,
           struct page_list *VAR_5)
{
 struct scatterlist **VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_1(VAR_4->journal_sections,
       sizeof(struct scatterlist *),
       VAR_0 | VAR_3);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_4->journal_sections; VAR_7++) {
  struct scatterlist *VAR_8;
  unsigned VAR_9, VAR_10;
  unsigned VAR_11, VAR_12;
  unsigned VAR_13;
  unsigned VAR_14;

  FUNC_3(VAR_4, VAR_7, 0, &VAR_9, &VAR_10);
  FUNC_3(VAR_4, VAR_7, VAR_4->journal_section_sectors - 1,
       &VAR_11, &VAR_12);

  VAR_13 = (VAR_11 - VAR_9 + 1);

  VAR_8 = FUNC_1(VAR_13, sizeof(struct scatterlist),
       VAR_0);
  if (!VAR_8) {
   FUNC_0(VAR_4, VAR_6);
   return ((void*)0);
  }

  FUNC_4(VAR_8, VAR_13);
  for (VAR_14 = VAR_9; VAR_14 <= VAR_11; VAR_14++) {
   char *VAR_15 = FUNC_2(VAR_5[VAR_14].page);
   unsigned VAR_16 = 0, VAR_17 = VAR_1;
   if (VAR_14 == VAR_9)
    VAR_16 = VAR_10;
   if (VAR_14 == VAR_11)
    VAR_17 = VAR_12 + (1 << VAR_2);
   FUNC_5(&VAR_8[VAR_14 - VAR_9], VAR_15 + VAR_16, VAR_17 - VAR_16);
  }

  VAR_6[VAR_7] = VAR_8;
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {struct page** pages; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*,int ) ;
 void* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(struct ttm_tt *VAR_3, void *VAR_4,
    unsigned long VAR_5,
    pgprot_t VAR_6)
{
 struct page *VAR_7 = VAR_3->pages[VAR_5];
 void *VAR_8;

 if (!VAR_7)
  return -VAR_0;

 VAR_4 = (void *)((unsigned long)VAR_4 + (VAR_5 << VAR_1));
 VAR_8 = FUNC_1(VAR_7, VAR_6);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(VAR_8, VAR_4, VAR_2);

 FUNC_2(VAR_8, VAR_6);

 return 0;
}

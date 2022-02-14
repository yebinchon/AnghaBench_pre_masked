
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tid_user_buf {struct tid_pageset* psets; struct page** pages; } ;
struct tid_pageset {unsigned int idx; int count; } ;
struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned long FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static u32 FUNC_3(struct tid_user_buf *VAR_3, unsigned int VAR_4)
{
 unsigned VAR_5, VAR_6, VAR_7 = 0, VAR_8;
 unsigned long VAR_9, VAR_10;
 struct page **VAR_11 = VAR_3->pages;
 struct tid_pageset *VAR_12 = VAR_3->psets;

 if (!VAR_4)
  return 0;






 VAR_9 = FUNC_1(VAR_11[0]);
 for (VAR_6 = 0, VAR_5 = 1, VAR_8 = 1; VAR_8 <= VAR_4; VAR_8++) {
  VAR_10 = VAR_8 < VAR_4 ? FUNC_1(VAR_11[VAR_8]) : 0;





  if (VAR_10 != ++VAR_9) {
   while (VAR_5) {
    int VAR_13 = VAR_5;
    u32 VAR_14 = VAR_5 * VAR_2;

    if (VAR_14 > VAR_0)
     VAR_13 =
      VAR_0 >>
      VAR_1;
    else if (!FUNC_0(VAR_14))
     VAR_13 =
      FUNC_2(VAR_14) >>
      VAR_1;

    VAR_12[VAR_7].idx = VAR_6;
    VAR_12[VAR_7].count = VAR_13;
    VAR_5 -= VAR_13;
    VAR_6 += VAR_13;
    VAR_7++;
   }
   VAR_6 = VAR_8;
   VAR_5 = 1;
   VAR_9 = VAR_10;
  } else {
   VAR_5++;
  }
 }
 return VAR_7;
}

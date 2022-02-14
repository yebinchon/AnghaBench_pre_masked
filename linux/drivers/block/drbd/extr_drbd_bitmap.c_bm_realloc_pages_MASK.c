
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drbd_bitmap {unsigned long bm_number_of_pages; struct page** bm_pages; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page** FUNC_1 (unsigned int,int,int ) ;
 struct page* FUNC_2 (int) ;
 int FUNC_3 (struct page**,unsigned int) ;
 int FUNC_4 (struct page*,unsigned int) ;
 int FUNC_5 (struct page**) ;
 struct page** FUNC_6 (unsigned int,int) ;

__attribute__((used)) static struct page **FUNC_7(struct drbd_bitmap *VAR_5, unsigned long VAR_6)
{
 struct page **VAR_7 = VAR_5->bm_pages;
 struct page **VAR_8, *VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12 = VAR_5->bm_number_of_pages;

 FUNC_0(VAR_12 == 0 && VAR_7 != ((void*)0));
 FUNC_0(VAR_12 != 0 && VAR_7 == ((void*)0));

 if (VAR_12 == VAR_6)
  return VAR_7;






 VAR_11 = sizeof(struct page *)*VAR_6;
 VAR_8 = FUNC_6(VAR_11, VAR_0 | VAR_3);
 if (!VAR_8) {
  VAR_8 = FUNC_1(VAR_11,
    VAR_0 | VAR_4,
    VAR_1);
  if (!VAR_8)
   return ((void*)0);
 }

 if (VAR_6 >= VAR_12) {
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
   VAR_8[VAR_10] = VAR_7[VAR_10];
  for (; VAR_10 < VAR_6; VAR_10++) {
   VAR_9 = FUNC_2(VAR_0 | VAR_2);
   if (!VAR_9) {
    FUNC_3(VAR_8 + VAR_12, VAR_10 - VAR_12);
    FUNC_5(VAR_8);
    return ((void*)0);
   }


   FUNC_4(VAR_9, VAR_10);
   VAR_8[VAR_10] = VAR_9;
  }
 } else {
  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
   VAR_8[VAR_10] = VAR_7[VAR_10];



 }

 return VAR_8;
}

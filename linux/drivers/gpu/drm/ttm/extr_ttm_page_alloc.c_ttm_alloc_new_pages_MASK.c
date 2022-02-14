
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct list_head*,int,int,struct page**,unsigned int) ;
 int FUNC_8 (struct page**,int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct list_head *VAR_3, gfp_t VAR_4,
          int VAR_5, enum ttm_caching_state VAR_6,
          unsigned VAR_7, unsigned VAR_8)
{
 struct page **VAR_9;
 struct page *VAR_10;
 int VAR_11 = 0;
 unsigned VAR_12, VAR_13, VAR_14;
 unsigned VAR_15 = 1 << VAR_8;
 unsigned VAR_16 = FUNC_5(VAR_7 << VAR_8, (unsigned)VAR_2);


 VAR_9 = FUNC_3(VAR_16, sizeof(struct page *),
          VAR_1);

 if (!VAR_9) {
  FUNC_6("Unable to allocate table for new pages\n");
  return -VAR_0;
 }

 for (VAR_12 = 0, VAR_14 = 0; VAR_12 < VAR_7; ++VAR_12) {
  VAR_10 = FUNC_1(VAR_4, VAR_8);

  if (!VAR_10) {
   FUNC_6("Unable to get page %u\n", VAR_12);



   if (VAR_14) {
    VAR_11 = FUNC_8(VAR_9,
         VAR_6, VAR_14);
    if (VAR_11)
     FUNC_7(VAR_3,
      VAR_5, VAR_6,
      VAR_9, VAR_14);
   }
   VAR_11 = -VAR_0;
   goto out;
  }

  FUNC_4(&VAR_10->lru, VAR_3);
  for (VAR_13 = 0; VAR_13 < VAR_15; ++VAR_13) {
   VAR_9[VAR_14++] = VAR_10++;
   if (VAR_14 == VAR_16) {

    VAR_11 = FUNC_8(VAR_9,
      VAR_6, VAR_14);
    if (VAR_11) {
     FUNC_7(VAR_3,
      VAR_5, VAR_6,
      VAR_9, VAR_14);
     goto out;
    }
    VAR_14 = 0;
   }
  }
 }

 if (VAR_14) {
  VAR_11 = FUNC_8(VAR_9, VAR_6, VAR_14);
  if (VAR_11)
   FUNC_7(VAR_3,
     VAR_5, VAR_6,
     VAR_9, VAR_14);
 }
out:
 FUNC_2(VAR_9);

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_page_pool {unsigned int npages; int lock; int list; } ;
struct page {int lru; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;
struct TYPE_3__ {unsigned int max_size; } ;
struct TYPE_4__ {TYPE_1__ options; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*,unsigned int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct ttm_page_pool* FUNC_6 (int,int,int) ;
 int FUNC_7 (struct ttm_page_pool*,unsigned int,int) ;

__attribute__((used)) static void FUNC_8(struct page **VAR_5, unsigned VAR_6, int VAR_7,
     enum ttm_caching_state VAR_8)
{
 struct ttm_page_pool *VAR_9 = FUNC_6(VAR_7, 0, VAR_8);



 unsigned long VAR_10;
 unsigned VAR_11;

 if (VAR_9 == ((void*)0)) {

  VAR_11 = 0;
  while (VAR_11 < VAR_6) {



   unsigned VAR_12 = 0, VAR_13;

   if (!VAR_5[VAR_11]) {
    ++VAR_11;
    continue;
   }
   if (FUNC_2(VAR_5[VAR_11]) != 1)
    FUNC_3("Erroneous page count. Leaking pages.\n");
   FUNC_0(VAR_5[VAR_11], VAR_12);

   VAR_13 = 1 << VAR_12;
   while (VAR_13) {
    VAR_5[VAR_11++] = ((void*)0);
    --VAR_13;
   }
  }
  return;
 }

 VAR_11 = 0;
 FUNC_4(&VAR_9->lock, VAR_10);
 while (VAR_11 < VAR_6) {
  if (VAR_5[VAR_11]) {
   if (FUNC_2(VAR_5[VAR_11]) != 1)
    FUNC_3("Erroneous page count. Leaking pages.\n");
   FUNC_1(&VAR_5[VAR_11]->lru, &VAR_9->list);
   VAR_5[VAR_11] = ((void*)0);
   VAR_9->npages++;
  }
  ++VAR_11;
 }

 VAR_6 = 0;
 if (VAR_9->npages > VAR_4->options.max_size) {
  VAR_6 = VAR_9->npages - VAR_4->options.max_size;


  if (VAR_6 < VAR_2)
   VAR_6 = VAR_2;
 }
 FUNC_5(&VAR_9->lock, VAR_10);
 if (VAR_6)
  FUNC_7(VAR_9, VAR_6, 0);
}

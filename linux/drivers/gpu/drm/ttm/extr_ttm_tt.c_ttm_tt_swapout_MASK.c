
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {scalar_t__ state; scalar_t__ caching_state; int num_pages; int page_flags; struct page* swap_storage; struct page** pages; } ;
struct page {struct address_space* f_mapping; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct page*,struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (char*,int,int ) ;
 struct page* FUNC_11 (struct address_space*,int,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (struct ttm_tt*) ;
 scalar_t__ FUNC_13 (int ) ;

int FUNC_14(struct ttm_tt *VAR_9, struct file *VAR_10)
{
 struct address_space *VAR_11;
 struct file *VAR_12;
 struct page *VAR_13;
 struct page *VAR_14;
 int VAR_15;
 int VAR_16 = -VAR_0;

 FUNC_0(VAR_9->state != VAR_7 && VAR_9->state != VAR_8);
 FUNC_0(VAR_9->caching_state != VAR_6);

 if (!VAR_10) {
  VAR_12 = FUNC_10("ttm swap",
      VAR_9->num_pages << VAR_1,
      0);
  if (FUNC_1(VAR_12)) {
   FUNC_7("Failed allocating swap storage\n");
   return FUNC_2(VAR_12);
  }
 } else {
  VAR_12 = VAR_10;
 }

 VAR_11 = VAR_12->f_mapping;

 for (VAR_15 = 0; VAR_15 < VAR_9->num_pages; ++VAR_15) {
  gfp_t VAR_17 = FUNC_5(VAR_11);

  VAR_17 |= (VAR_9->page_flags & VAR_2 ? VAR_5 : 0);

  VAR_13 = VAR_9->pages[VAR_15];
  if (FUNC_13(VAR_13 == ((void*)0)))
   continue;

  VAR_14 = FUNC_11(VAR_11, VAR_15, VAR_17);
  if (FUNC_1(VAR_14)) {
   VAR_16 = FUNC_2(VAR_14);
   goto out_err;
  }
  FUNC_3(VAR_14, VAR_13);
  FUNC_9(VAR_14);
  FUNC_6(VAR_14);
  FUNC_8(VAR_14);
 }

 FUNC_12(VAR_9);
 VAR_9->swap_storage = VAR_12;
 VAR_9->page_flags |= VAR_4;
 if (VAR_10)
  VAR_9->page_flags |= VAR_3;

 return 0;
out_err:
 if (!VAR_10)
  FUNC_4(VAR_12);

 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int num_pages; int page_flags; struct file* swap_storage; struct page** pages; } ;
struct page {int dummy; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct page*,struct page*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct page*) ;
 struct page* FUNC_7 (struct address_space*,int,int ) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct ttm_tt *VAR_5)
{
 struct address_space *VAR_6;
 struct file *VAR_7;
 struct page *VAR_8;
 struct page *VAR_9;
 int VAR_10;
 int VAR_11 = -VAR_0;

 VAR_7 = VAR_5->swap_storage;
 FUNC_0(VAR_7 == ((void*)0));

 VAR_6 = VAR_7->f_mapping;

 for (VAR_10 = 0; VAR_10 < VAR_5->num_pages; ++VAR_10) {
  gfp_t VAR_12 = FUNC_5(VAR_6);

  VAR_12 |= (VAR_5->page_flags & VAR_1 ? VAR_4 : 0);
  VAR_8 = FUNC_7(VAR_6, VAR_10, VAR_12);

  if (FUNC_1(VAR_8)) {
   VAR_11 = FUNC_2(VAR_8);
   goto out_err;
  }
  VAR_9 = VAR_5->pages[VAR_10];
  if (FUNC_8(VAR_9 == ((void*)0)))
   goto out_err;

  FUNC_3(VAR_9, VAR_8);
  FUNC_6(VAR_8);
 }

 if (!(VAR_5->page_flags & VAR_2))
  FUNC_4(VAR_7);
 VAR_5->swap_storage = ((void*)0);
 VAR_5->page_flags &= ~VAR_3;

 return 0;
out_err:
 return VAR_11;
}

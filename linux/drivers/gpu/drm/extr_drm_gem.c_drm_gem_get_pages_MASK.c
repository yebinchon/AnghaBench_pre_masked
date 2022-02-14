
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {int dummy; } ;
struct page {int dummy; } ;
struct drm_gem_object {int size; TYPE_1__* filp; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* f_mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct page** FUNC_1 (struct page*) ;
 struct page** FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (struct pagevec*) ;
 int FUNC_6 (struct page**) ;
 struct page** FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct address_space*) ;
 scalar_t__ FUNC_9 (struct address_space*,int ) ;
 int FUNC_10 (struct address_space*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct pagevec*,struct page*) ;
 scalar_t__ FUNC_13 (struct pagevec*) ;
 int FUNC_14 (struct pagevec*) ;
 struct page* FUNC_15 (struct address_space*,int) ;

struct page **FUNC_16(struct drm_gem_object *VAR_5)
{
 struct address_space *VAR_6;
 struct page *VAR_7, **VAR_8;
 struct pagevec VAR_9;
 int VAR_10, VAR_11;


 VAR_6 = VAR_5->filp->f_mapping;





 FUNC_4((VAR_5->size & (VAR_3 - 1)) != 0);

 VAR_11 = VAR_5->size >> VAR_2;

 VAR_8 = FUNC_7(VAR_11, sizeof(struct page *), VAR_1);
 if (VAR_8 == ((void*)0))
  return FUNC_2(-VAR_0);

 FUNC_10(VAR_6);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_7 = FUNC_15(VAR_6, VAR_10);
  if (FUNC_3(VAR_7))
   goto fail;
  VAR_8[VAR_10] = VAR_7;






  FUNC_0(FUNC_9(VAR_6, VAR_4) &&
    (FUNC_11(VAR_7) >= 0x00100000UL));
 }

 return VAR_8;

fail:
 FUNC_8(VAR_6);
 FUNC_14(&VAR_9);
 while (VAR_10--) {
  if (!FUNC_12(&VAR_9, VAR_8[VAR_10]))
   FUNC_5(&VAR_9);
 }
 if (FUNC_13(&VAR_9))
  FUNC_5(&VAR_9);

 FUNC_6(VAR_8);
 return FUNC_1(VAR_7);
}

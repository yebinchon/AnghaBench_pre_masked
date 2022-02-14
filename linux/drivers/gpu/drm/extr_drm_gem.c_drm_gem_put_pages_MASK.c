
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {int dummy; } ;
struct page {int dummy; } ;
struct drm_gem_object {int size; int filp; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pagevec*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct page**) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct pagevec*,struct page*) ;
 scalar_t__ FUNC_7 (struct pagevec*) ;
 int FUNC_8 (struct pagevec*) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct drm_gem_object *VAR_2, struct page **VAR_3,
  bool VAR_4, bool VAR_5)
{
 int VAR_6, VAR_7;
 struct address_space *VAR_8;
 struct pagevec VAR_9;

 VAR_8 = FUNC_2(VAR_2->filp)->i_mapping;
 FUNC_4(VAR_8);





 FUNC_0((VAR_2->size & (VAR_1 - 1)) != 0);

 VAR_7 = VAR_2->size >> VAR_0;

 FUNC_8(&VAR_9);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (!VAR_3[VAR_6])
   continue;

  if (VAR_4)
   FUNC_9(VAR_3[VAR_6]);

  if (VAR_5)
   FUNC_5(VAR_3[VAR_6]);


  if (!FUNC_6(&VAR_9, VAR_3[VAR_6]))
   FUNC_1(&VAR_9);
 }
 if (FUNC_7(&VAR_9))
  FUNC_1(&VAR_9);

 FUNC_3(VAR_3);
}

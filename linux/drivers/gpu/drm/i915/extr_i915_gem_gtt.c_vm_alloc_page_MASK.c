
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pagevec {size_t nr; struct page** pages; } ;
struct page {int dummy; } ;
struct i915_address_space {int free_pages; TYPE_2__* i915; int pt_kmap_wc; int fault_attr; } ;
typedef int gfp_t ;
struct TYPE_3__ {int wc_stash; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pagevec*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct pagevec*) ;
 scalar_t__ FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct page**,int) ;
 int FUNC_8 (struct page**,size_t) ;
 int FUNC_9 (int *,int) ;
 struct page* FUNC_10 (int *) ;
 int FUNC_11 (int *,struct pagevec*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct page *FUNC_13(struct i915_address_space *VAR_0, gfp_t VAR_1)
{
 struct pagevec VAR_2;
 struct page *VAR_3;

 if (FUNC_0(FUNC_9(&VAR_0->fault_attr, 1)))
  FUNC_4(VAR_0->i915);

 VAR_3 = FUNC_10(&VAR_0->free_pages);
 if (VAR_3)
  return VAR_3;

 if (!VAR_0->pt_kmap_wc)
  return FUNC_3(VAR_1);


 VAR_3 = FUNC_10(&VAR_0->i915->mm.wc_stash);
 if (VAR_3)
  return VAR_3;
 FUNC_5(&VAR_2);
 do {
  struct page *VAR_4;

  VAR_4 = FUNC_3(VAR_1);
  if (FUNC_12(!VAR_4))
   break;

  VAR_2.pages[VAR_2.nr++] = VAR_4;
 } while (FUNC_6(&VAR_2));

 if (VAR_2.nr && !FUNC_8(VAR_2.pages, VAR_2.nr)) {
  VAR_3 = VAR_2.pages[--VAR_2.nr];


  if (VAR_2.nr)
   FUNC_11(&VAR_0->i915->mm.wc_stash, &VAR_2);


  if (VAR_2.nr)
   FUNC_11(&VAR_0->free_pages, &VAR_2);
 }


 if (FUNC_12(VAR_2.nr)) {
  FUNC_1(FUNC_7(VAR_2.pages, VAR_2.nr));
  FUNC_2(&VAR_2);
 }

 return VAR_3;
}

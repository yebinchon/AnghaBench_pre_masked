
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
struct page {int * mapping; } ;
struct msc_iter {struct msc* msc; } ;
struct msc {unsigned long nr_pages; int buf_mutex; int user_count; int mmap_count; } ;
struct TYPE_2__ {struct msc_iter* private_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct page* FUNC_3 (struct msc*,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vm_area_struct *VAR_0)
{
 struct msc_iter *VAR_1 = VAR_0->vm_file->private_data;
 struct msc *VAR_2 = VAR_1->msc;
 unsigned long VAR_3;

 if (!FUNC_2(&VAR_2->mmap_count, &VAR_2->buf_mutex))
  return;


 for (VAR_3 = 0; VAR_3 < VAR_2->nr_pages; VAR_3++) {
  struct page *VAR_4 = FUNC_3(VAR_2, VAR_3);

  if (FUNC_0(!VAR_4))
   continue;

  if (VAR_4->mapping)
   VAR_4->mapping = ((void*)0);
 }


 FUNC_1(&VAR_2->user_count);
 FUNC_4(&VAR_2->buf_mutex);
}

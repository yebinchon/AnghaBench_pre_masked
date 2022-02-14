
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct page {int dummy; } ;
struct etnaviv_gem_userptr {int ro; scalar_t__ ptr; TYPE_2__* mm; } ;
struct TYPE_4__ {int size; } ;
struct etnaviv_gem_object {struct page** pages; TYPE_1__ base; struct etnaviv_gem_userptr userptr; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (scalar_t__,unsigned int,int ,struct page**) ;
 int FUNC_1 (struct page**) ;
 struct page** FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page**,int) ;

__attribute__((used)) static int FUNC_5(struct etnaviv_gem_object *VAR_7)
{
 struct page **VAR_8 = ((void*)0);
 struct etnaviv_gem_userptr *VAR_9 = &VAR_7->userptr;
 int VAR_10, VAR_11 = 0, VAR_12 = VAR_7->base.size >> VAR_4;

 FUNC_3(&VAR_6->mm->mmap_sem);

 if (VAR_9->mm != VAR_6->mm)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_12, sizeof(struct page *), VAR_3);
 if (!VAR_8)
  return -VAR_0;

 do {
  unsigned VAR_13 = VAR_12 - VAR_11;
  uint64_t VAR_14 = VAR_9->ptr + VAR_11 * VAR_5;
  struct page **VAR_15 = VAR_8 + VAR_11;

  VAR_10 = FUNC_0(VAR_14, VAR_13,
       !VAR_9->ro ? VAR_2 : 0, VAR_15);
  if (VAR_10 < 0) {
   FUNC_4(VAR_8, VAR_11);
   FUNC_1(VAR_8);
   return VAR_10;
  }

  VAR_11 += VAR_10;

 } while (VAR_11 < VAR_12);

 VAR_7->pages = VAR_8;

 return 0;
}

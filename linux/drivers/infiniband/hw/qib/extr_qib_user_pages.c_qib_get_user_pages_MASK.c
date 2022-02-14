
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int pinned_vm; int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page**,size_t,int ) ;
 unsigned long FUNC_1 (size_t,int *) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,size_t,int,struct page**,int *) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(unsigned long VAR_9, size_t VAR_10,
         struct page **VAR_11)
{
 unsigned long VAR_12, VAR_13;
 size_t VAR_14;
 int VAR_15;

 VAR_13 = FUNC_6(VAR_7) >> VAR_5;
 VAR_12 = FUNC_1(VAR_10, &VAR_8->mm->pinned_vm);

 if (VAR_12 > VAR_13 && !FUNC_3(VAR_0)) {
  VAR_15 = -VAR_1;
  goto bail;
 }

 FUNC_4(&VAR_8->mm->mmap_sem);
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14 += VAR_15) {
  VAR_15 = FUNC_5(VAR_9 + VAR_14 * VAR_6,
         VAR_10 - VAR_14,
         VAR_3 | VAR_4 | VAR_2,
         VAR_11 + VAR_14, ((void*)0));
  if (VAR_15 < 0) {
   FUNC_7(&VAR_8->mm->mmap_sem);
   goto bail_release;
  }
 }
 FUNC_7(&VAR_8->mm->mmap_sem);

 return 0;
bail_release:
 FUNC_0(VAR_11, VAR_14, 0);
bail:
 FUNC_2(VAR_10, &VAR_8->mm->pinned_vm);
 return VAR_15;
}

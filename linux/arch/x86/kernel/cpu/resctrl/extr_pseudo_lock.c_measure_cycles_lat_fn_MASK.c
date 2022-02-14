
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pseudo_lock_region {unsigned long size; int thread_done; int lock_thread_wq; int kmem; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 struct pseudo_lock_region *VAR_3 = VAR_2;
 unsigned long VAR_4;
 u64 VAR_5, VAR_6;
 void *VAR_7;

 FUNC_1();



 FUNC_6(VAR_0, VAR_1, 0x0);
 VAR_7 = FUNC_0(VAR_3->kmem);




 VAR_5 = FUNC_3();
 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4 += 32) {
  VAR_5 = FUNC_3();
  asm volatile("mov (%0,%1,1), %%eax\n\t"
        :
        : "r" (VAR_7), "r" (VAR_4)
        : "%eax", "memory");
  VAR_6 = FUNC_3();
  FUNC_4((u32)(VAR_6 - VAR_5));
 }
 FUNC_6(VAR_0, 0x0, 0x0);
 FUNC_2();
 VAR_3->thread_done = 1;
 FUNC_5(&VAR_3->lock_thread_wq);
 return 0;
}

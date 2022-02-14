
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct residency_counts {void* hits_after; void* miss_after; void* hits_before; void* miss_before; } ;
struct pseudo_lock_region {int size; int kmem; int line_size; int cpu; } ;
struct perf_event_attr {int dummy; } ;
struct perf_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct perf_event* FUNC_4 (struct perf_event_attr*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_5 (struct perf_event*,void**,int *,int *) ;
 int FUNC_6 (struct perf_event*) ;
 int VAR_1 ;
 int FUNC_7 (int,void*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (struct perf_event*) ;

__attribute__((used)) static int FUNC_11(struct perf_event_attr *VAR_2,
    struct perf_event_attr *VAR_3,
    struct pseudo_lock_region *VAR_4,
    struct residency_counts *VAR_5)
{
 u64 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 struct perf_event *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned long VAR_16;
 void *VAR_17;
 u64 VAR_18;

 VAR_10 = FUNC_4(VAR_2, VAR_4->cpu,
            ((void*)0), ((void*)0), ((void*)0));
 if (FUNC_0(VAR_10))
  goto out;

 VAR_11 = FUNC_4(VAR_3, VAR_4->cpu,
           ((void*)0), ((void*)0), ((void*)0));
 if (FUNC_0(VAR_11))
  goto out_miss;

 FUNC_2();




 if (FUNC_5(VAR_10, &VAR_18, ((void*)0), ((void*)0))) {
  FUNC_3();
  goto out_hit;
 }
 if (FUNC_5(VAR_11, &VAR_18, ((void*)0), ((void*)0))) {
  FUNC_3();
  goto out_hit;
 }




 FUNC_9(VAR_0, VAR_1, 0x0);






 VAR_13 = FUNC_10(VAR_10);
 VAR_12 = FUNC_10(VAR_11);
 VAR_14 = FUNC_1(VAR_4->line_size);
 VAR_17 = FUNC_1(VAR_4->kmem);
 VAR_15 = FUNC_1(VAR_4->size);






 FUNC_7(VAR_12, VAR_6);
 FUNC_7(VAR_13, VAR_8);






 FUNC_8();
 FUNC_7(VAR_12, VAR_6);
 FUNC_7(VAR_13, VAR_8);




 FUNC_8();
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16 += VAR_14) {




  FUNC_8();
  asm volatile("mov (%0,%1,1), %%eax\n\t"
        :
        : "r" (VAR_17), "r" (VAR_16)
        : "%eax", "memory");
 }




 FUNC_8();
 FUNC_7(VAR_12, VAR_7);
 FUNC_7(VAR_13, VAR_9);




 FUNC_8();

 FUNC_9(VAR_0, 0x0, 0x0);
 FUNC_3();
out_hit:
 FUNC_6(VAR_11);
out_miss:
 FUNC_6(VAR_10);
out:



 VAR_5->miss_before = VAR_8;
 VAR_5->hits_before = VAR_6;
 VAR_5->miss_after = VAR_9;
 VAR_5->hits_after = VAR_7;
 return 0;
}

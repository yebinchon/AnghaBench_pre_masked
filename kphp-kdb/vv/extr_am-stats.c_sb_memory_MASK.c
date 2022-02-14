
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stats_buffer_t ;
struct TYPE_3__ {int swap_total; int swap_used; int mem_free; int vm_data; int vm_rss; int vm_size; } ;
typedef TYPE_1__ am_memory_stat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,long,long,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_3 (stats_buffer_t *VAR_10, int VAR_11) {
  FUNC_1 ();
  FUNC_2 (VAR_10,
    "heap_allocated\t%ld\n"
    "heap_max\t%ld\n"
    "wasted_heap_blocks\t%d\n"
    "wasted_heap_bytes\t%ld\n"
    "free_heap_blocks\t%d\n"
    "free_heap_bytes\t%ld\n",
    (long)(VAR_2 - VAR_3) + (long) (VAR_4 - VAR_5),
    (long)(VAR_4 - VAR_3),
    VAR_8,
    VAR_9,
    VAR_6,
    VAR_7);

  am_memory_stat_t VAR_12;
  if (!FUNC_0 (&VAR_12, VAR_11 & VAR_1)) {
    FUNC_2 (VAR_10,
      "vmsize_bytes\t%lld\n"
      "vmrss_bytes\t%lld\n"
      "vmdata_bytes\t%lld\n",
    VAR_12.vm_size, VAR_12.vm_rss, VAR_12.vm_data);
  }

  if (!FUNC_0 (&VAR_12, VAR_11 & VAR_0)) {
    FUNC_2 (VAR_10,
        "memfree_bytes\t%lld\n"
        "swap_used_bytes\t%lld\n"
        "swap_total_bytes\t%lld\n",
    VAR_12.mem_free, VAR_12.swap_used, VAR_12.swap_total);
  }
}

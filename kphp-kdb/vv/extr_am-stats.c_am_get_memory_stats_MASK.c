
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {long long vm_size; long long vm_rss; long long vm_data; long long mem_free; long long swap_total; long long swap_free; long long swap_used; } ;
typedef TYPE_1__ am_memory_stat_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,long long*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,char*,long long*,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,char*) ;

int FUNC_8 (am_memory_stat_t *VAR_2, int VAR_3) {
  if (!VAR_3) {
    return -1;
  }
  long long VAR_4[6];
  FUNC_2 (VAR_2, 0, sizeof (*VAR_2));

  if (VAR_3 & VAR_1) {
    if (FUNC_0 (FUNC_1 (), VAR_4, 6) < 0) {
      return -1;
    }
    VAR_2->vm_size = VAR_4[0];
    VAR_2->vm_rss = VAR_4[1];
    VAR_2->vm_data = VAR_4[5];
  }

  if (VAR_3 & VAR_0) {
    char VAR_5[16384], *VAR_6;
    if (FUNC_3 ("/proc/meminfo", VAR_5, sizeof (VAR_5)) < 0) {
      return -1;
    }
    FUNC_7 (4, "/proc/meminfo: %s\n", VAR_5);
    char VAR_7[32], VAR_8[32];
    long long VAR_9;
    int VAR_10 = 0;
    for (VAR_6 = FUNC_6 (VAR_5, "\n"); VAR_6 != ((void*)0); VAR_6 = FUNC_6 (((void*)0), "\n")) {
      if (FUNC_4 (VAR_6, "%31s%lld%31s", VAR_7, &VAR_9, VAR_8) == 3 && !FUNC_5 (VAR_8, "kB")) {
        if (!FUNC_5 (VAR_7, "MemFree:")) {
          VAR_2->mem_free = VAR_9 << 10;
          VAR_10 |= 1;
        } else if (!FUNC_5 (VAR_7, "SwapTotal:")) {
          VAR_2->swap_total = VAR_9 << 10;
          VAR_10 |= 2;
        } else if (!FUNC_5 (VAR_7, "SwapFree:")) {
          VAR_2->swap_free = VAR_9 << 10;
          VAR_10 |= 4;
        }
      }
    }
    if (VAR_10 != 7) {
      return -1;
    }
    VAR_2->swap_used = VAR_2->swap_total - VAR_2->swap_free;
  }
  return 0;
}

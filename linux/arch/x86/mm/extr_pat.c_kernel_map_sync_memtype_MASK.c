
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int ,int ,int ,unsigned long,unsigned long long) ;

int FUNC_6(u64 VAR_4, unsigned long VAR_5,
       enum page_cache_mode VAR_6)
{
 unsigned long VAR_7;

 if (VAR_4 > FUNC_0(VAR_3-1))
  return 0;





 if (!FUNC_4(VAR_4 >> VAR_1))
  return 0;

 VAR_7 = (FUNC_0(VAR_3-1) <= VAR_4 + VAR_5) ?
    FUNC_0(VAR_3) - VAR_4 :
    VAR_5;

 if (FUNC_3((unsigned long)FUNC_1(VAR_4), VAR_7, VAR_6) < 0) {
  FUNC_5("x86/PAT: %s:%d ioremap_change_attr failed %s for [mem %#010Lx-%#010Lx]\n",
   VAR_2->comm, VAR_2->pid,
   FUNC_2(VAR_6),
   VAR_4, (unsigned long long)(VAR_4 + VAR_5-1));
  return -VAR_0;
 }
 return 0;
}

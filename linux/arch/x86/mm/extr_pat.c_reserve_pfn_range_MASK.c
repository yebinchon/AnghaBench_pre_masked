
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int pgprot_t ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,int,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long,int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,int ,int ,unsigned long long,unsigned long long,int ) ;
 int FUNC_12 (char*,int ,int ,int ,unsigned long long,unsigned long long,int ) ;
 int FUNC_13 (unsigned long,unsigned long,int,int*) ;

__attribute__((used)) static int FUNC_14(u64 VAR_3, unsigned long VAR_4, pgprot_t *VAR_5,
    int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 enum page_cache_mode VAR_9 = FUNC_9(*VAR_5);
 enum page_cache_mode VAR_10 = VAR_9;

 VAR_7 = FUNC_8(VAR_3, VAR_3 + VAR_4);






 if (VAR_7) {
  if (!FUNC_7())
   return 0;

  VAR_10 = FUNC_6(VAR_3);
  if (VAR_9 != VAR_10) {
   FUNC_12("x86/PAT: %s:%d map pfn RAM range req %s for [mem %#010Lx-%#010Lx], got %s\n",
    VAR_2->comm, VAR_2->pid,
    FUNC_2(VAR_9),
    (unsigned long long)VAR_3,
    (unsigned long long)(VAR_3 + VAR_4 - 1),
    FUNC_2(VAR_10));
   *VAR_5 = FUNC_0((FUNC_10(*VAR_5) &
          (~VAR_1)) |
          FUNC_1(VAR_10));
  }
  return 0;
 }

 VAR_8 = FUNC_13(VAR_3, VAR_3 + VAR_4, VAR_9, &VAR_10);
 if (VAR_8)
  return VAR_8;

 if (VAR_10 != VAR_9) {
  if (VAR_6 ||
      !FUNC_4(VAR_3, VAR_4, VAR_9, VAR_10)) {
   FUNC_3(VAR_3, VAR_3 + VAR_4);
   FUNC_11("x86/PAT: %s:%d map pfn expected mapping type %s for [mem %#010Lx-%#010Lx], got %s\n",
          VAR_2->comm, VAR_2->pid,
          FUNC_2(VAR_9),
          (unsigned long long)VAR_3,
          (unsigned long long)(VAR_3 + VAR_4 - 1),
          FUNC_2(VAR_10));
   return -VAR_0;
  }




  *VAR_5 = FUNC_0((FUNC_10(*VAR_5) &
          (~VAR_1)) |
         FUNC_1(VAR_10));
 }

 if (FUNC_5(VAR_3, VAR_4, VAR_10) < 0) {
  FUNC_3(VAR_3, VAR_3 + VAR_4);
  return -VAR_0;
 }
 return 0;
}

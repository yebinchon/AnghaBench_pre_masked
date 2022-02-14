
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct memory_type_list {int dummy; } ;
struct memory_type {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct memory_type*) ;
 scalar_t__ FUNC_2 (struct memory_type*) ;
 int FUNC_3 (struct memory_type*) ;
 scalar_t__ FUNC_4 (struct memory_type*) ;
 int FUNC_5 (struct memory_type*) ;
 scalar_t__ FUNC_6 (struct memory_type_list*,int *) ;
 struct memory_type_list* FUNC_7 () ;
 struct memory_type* FUNC_8 (struct memory_type_list*) ;
 int FUNC_9 (struct memory_type_list*) ;
 int FUNC_10 (struct memory_type_list*) ;
 struct memory_type* FUNC_11 (struct memory_type*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct memory_type_list*,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,int ) ;

__attribute__((used)) static void
FUNC_23(void)
{
 struct memory_type_list *VAR_2;
 struct memory_type *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_2 = FUNC_7();
 if (VAR_2 == ((void*)0)) {
  FUNC_21("memstat_mtl_alloc");
  return;
 }
 if (VAR_1 == ((void*)0)) {
  if (FUNC_13(VAR_2, 0) < 0) {
   FUNC_22("memstat_sysctl_malloc: %s",
       FUNC_12(FUNC_10(VAR_2)));
   return;
  }
 } else {
  if (FUNC_6(VAR_2, VAR_1) < 0) {
   VAR_4 = FUNC_10(VAR_2);
   if (VAR_4 == VAR_0)
    FUNC_22("memstat_kvm_malloc: %s",
        FUNC_0(VAR_1));
   else
    FUNC_22("memstat_kvm_malloc: %s",
        FUNC_12(VAR_4));
  }
 }
 FUNC_18("malloc-statistics");
 FUNC_17("{T:/%13s} {T:/%5s} {T:/%6s} {T:/%7s} {T:/%8s}  {T:Size(s)}\n",
     "Type", "InUse", "MemUse", "HighUse", "Requests");
 FUNC_20("memory");
 for (VAR_3 = FUNC_8(VAR_2); VAR_3 != ((void*)0);
     VAR_3 = FUNC_11(VAR_3)) {
  if (FUNC_4(VAR_3) == 0 &&
      FUNC_2(VAR_3) == 0)
   continue;
  FUNC_19("memory");
  FUNC_17("{k:type/%13s/%s} {:in-use/%5ju} "
      "{:memory-use/%5ju}{U:K} {:high-use/%7s} "
      "{:requests/%8ju}  ",
      FUNC_3(VAR_3), (uintmax_t)FUNC_2(VAR_3),
      ((uintmax_t)FUNC_1(VAR_3) + 1023) / 1024, "-",
      (uintmax_t)FUNC_4(VAR_3));
  VAR_5 = 1;
  FUNC_20("size");
  for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
   if (FUNC_5(VAR_3) & (1 << VAR_6)) {
    if (!VAR_5)
     FUNC_17(",");
    FUNC_17("{l:size/%d}", 1 << (VAR_6 + 4));
    VAR_5 = 0;
   }
  }
  FUNC_16("size");
  FUNC_15("memory");
  FUNC_17("\n");
 }
 FUNC_16("memory");
 FUNC_14("malloc-statistics");
 FUNC_9(VAR_2);
}

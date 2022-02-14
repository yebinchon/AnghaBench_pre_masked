
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct memory_type_list {int dummy; } ;
struct memory_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct memory_type*) ;
 scalar_t__ FUNC_2 (struct memory_type*) ;
 scalar_t__ FUNC_3 (struct memory_type*) ;
 scalar_t__ FUNC_4 (struct memory_type*) ;
 int FUNC_5 (struct memory_type*) ;
 scalar_t__ FUNC_6 (struct memory_type*) ;
 scalar_t__ FUNC_7 (struct memory_type*) ;
 scalar_t__ FUNC_8 (struct memory_type*) ;
 scalar_t__ FUNC_9 (struct memory_type*) ;
 scalar_t__ FUNC_10 (struct memory_type_list*,int *) ;
 struct memory_type_list* FUNC_11 () ;
 struct memory_type* FUNC_12 (struct memory_type_list*) ;
 int FUNC_13 (struct memory_type_list*) ;
 int FUNC_14 (struct memory_type_list*) ;
 struct memory_type* FUNC_15 (struct memory_type*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (struct memory_type_list*,int ) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,int ,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (char*,int ) ;

__attribute__((used)) static void
FUNC_29(void)
{
 struct memory_type_list *VAR_3;
 struct memory_type *VAR_4;
 int VAR_5;
 char VAR_6[VAR_1 + 1];

 VAR_3 = FUNC_11();
 if (VAR_3 == ((void*)0)) {
  FUNC_27("memstat_mtl_alloc");
  return;
 }
 if (VAR_2 == ((void*)0)) {
  if (FUNC_17(VAR_3, 0) < 0) {
   FUNC_28("memstat_sysctl_uma: %s",
       FUNC_16(FUNC_14(VAR_3)));
   return;
  }
 } else {
  if (FUNC_10(VAR_3, VAR_2) < 0) {
   VAR_5 = FUNC_14(VAR_3);
   if (VAR_5 == VAR_0)
    FUNC_28("memstat_kvm_uma: %s",
        FUNC_0(VAR_2));
   else
    FUNC_28("memstat_kvm_uma: %s",
        FUNC_16(VAR_5));
  }
 }
 FUNC_24("memory-zone-statistics");
 FUNC_23("{T:/%-20s} {T:/%6s} {T:/%6s} {T:/%8s} {T:/%8s} {T:/%8s} {T:/%8s}"
     "{T:/%4s} {T:/%4s}\n\n", "ITEM", "SIZE",
     "LIMIT", "USED", "FREE", "REQ", "FAIL", "SLEEP", "XDOMAIN");
 FUNC_26("zone");
 for (VAR_4 = FUNC_12(VAR_3); VAR_4 != ((void*)0);
     VAR_4 = FUNC_15(VAR_4)) {
  FUNC_19(VAR_6, FUNC_5(VAR_4), VAR_1);
  FUNC_18(VAR_6, ":");
  FUNC_25("zone");
  FUNC_23("{d:name/%-20s}{ke:name/%s} {:size/%6ju}, "
      "{:limit/%6ju},{:used/%8ju},"
      "{:free/%8ju},{:requests/%8ju},"
      "{:fail/%4ju},{:sleep/%4ju},{:xdomain/%4ju}\n", VAR_6,
      FUNC_5(VAR_4),
      (uintmax_t)FUNC_7(VAR_4),
      (uintmax_t)FUNC_2(VAR_4),
      (uintmax_t)FUNC_1(VAR_4),
      (uintmax_t)FUNC_4(VAR_4),
      (uintmax_t)FUNC_6(VAR_4),
      (uintmax_t)FUNC_3(VAR_4),
      (uintmax_t)FUNC_8(VAR_4),
      (uintmax_t)FUNC_9(VAR_4));
  FUNC_21("zone");
 }
 FUNC_13(VAR_3);
 FUNC_22("zone");
 FUNC_20("memory-zone-statistics");
 FUNC_23("\n");
}

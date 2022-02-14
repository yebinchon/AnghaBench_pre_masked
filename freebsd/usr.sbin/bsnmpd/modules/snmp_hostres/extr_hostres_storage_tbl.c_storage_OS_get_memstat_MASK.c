
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct storage_entry {scalar_t__ allocationFailures; scalar_t__ used; scalar_t__ size; scalar_t__ allocationUnits; int * type; int flags; } ;
struct memory_type {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int alloc_descr ;




 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct memory_type*) ;
 scalar_t__ FUNC_2 (struct memory_type*) ;
 scalar_t__ FUNC_3 (struct memory_type*) ;
 scalar_t__ FUNC_4 (struct memory_type*) ;
 char* FUNC_5 (struct memory_type*) ;
 scalar_t__ FUNC_6 (struct memory_type*) ;
 scalar_t__ FUNC_7 (struct memory_type*) ;
 int * FUNC_8 () ;
 struct memory_type* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct memory_type* FUNC_11 (struct memory_type*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int * VAR_5 ;
 int FUNC_14 (char*,int,char*,...) ;
 struct storage_entry* FUNC_15 (char*) ;
 struct storage_entry* FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char const*) ;
 int FUNC_18 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_19(void)
{
 struct memory_type *VAR_6;
 struct storage_entry *VAR_7;

 if (VAR_5 == ((void*)0)) {
  if ((VAR_5 = FUNC_8()) == ((void*)0))

  return;
 }

 if (FUNC_13(VAR_5, 0) < 0) {
  FUNC_18(VAR_2, "memstat_sysctl_all failed: %s",
      FUNC_12(FUNC_10(VAR_5)) );
  return;
 }

 if ((VAR_6 = FUNC_9(VAR_5)) == ((void*)0)) {

  FUNC_0("memstat_mtl_first failed");
  return;
 }

 do {
  const char *VAR_8;
  uint64_t VAR_9;
  int VAR_10;
  char VAR_11[VAR_4];

  VAR_8 = FUNC_5(VAR_6);

  if (VAR_8 == ((void*)0) || FUNC_17(VAR_8) == 0)
   continue;

  switch (VAR_10 = FUNC_1(VAR_6)) {

    case 129:
   FUNC_14(VAR_11, sizeof(VAR_11),
       "MALLOC: %s", VAR_8);
   break;

    case 128:
   FUNC_14(VAR_11, sizeof(VAR_11),
       "UMA: %s", VAR_8);
   break;

    default:
   FUNC_14(VAR_11, sizeof(VAR_11),
       "UNKNOWN%d: %s", VAR_10, VAR_8);
   break;
  }

  if ((VAR_7 = FUNC_16(VAR_11)) == ((void*)0) &&
      (VAR_7 = FUNC_15(VAR_11)) == ((void*)0))
   return;

  VAR_7->flags |= VAR_0;
  VAR_7->type = &VAR_3;

  if ((VAR_9 = FUNC_6(VAR_6)) == 0)
   VAR_9 = FUNC_7(VAR_6);
  VAR_7->allocationUnits =
      (VAR_9 > VAR_1 ? VAR_1 : (int32_t)VAR_9);

  VAR_9 = FUNC_3(VAR_6);
  VAR_7->size =
      (VAR_9 > VAR_1 ? VAR_1 : (int32_t)VAR_9);

  VAR_9 = FUNC_2(VAR_6);
  VAR_7->used =
      (VAR_9 > VAR_1 ? VAR_1 : (int32_t)VAR_9);

  VAR_9 = FUNC_4(VAR_6);
  VAR_7->allocationFailures =
      (VAR_9 > VAR_1 ? VAR_1 : (int32_t)VAR_9);

 } while((VAR_6 = FUNC_11(VAR_6)) != ((void*)0));
}

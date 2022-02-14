
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int swap_w_prefix ;
struct storage_entry {scalar_t__ allocationFailures; int used; int size; int allocationUnits; int * type; int flags; } ;
struct kvm_swap {int dummy; } ;
typedef int nswapdev ;
struct TYPE_5__ {int ksw_used; int ksw_total; int ksw_devname; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_1__*,int,int ) ;
 int FUNC_4 (char*,char,int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,int,char*,char*,int ) ;
 struct storage_entry* FUNC_7 (char*) ;
 struct storage_entry* FUNC_8 (char*) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,int*,size_t*,int *,int ) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void
FUNC_11(void)
{
 struct storage_entry *VAR_8;
 char VAR_9[VAR_3];
 size_t VAR_10;
 int VAR_11;

 VAR_10 = sizeof(VAR_11);
 VAR_11 = 0;

 if (FUNC_9("vm.nswapdev", &VAR_11, &VAR_10, ((void*)0),0 ) < 0) {
  FUNC_10(VAR_1,
      "hrStorageTable: sysctlbyname(\"vm.nswapdev\") "
      "failed. %m");
  FUNC_1(0);
  return;
 }

 if (VAR_11 <= 0) {
  FUNC_0("vm.nswapdev is %d", VAR_11);
  return;
 }

 if (VAR_11 + 1 != (int)VAR_7 || VAR_6 == ((void*)0)) {
  VAR_7 = VAR_11 + 1;
  VAR_6 = FUNC_5(VAR_6,
      VAR_7 * sizeof(struct kvm_swap));

  FUNC_1(VAR_6 != ((void*)0));
  if (VAR_6 == ((void*)0)) {
   VAR_7 = 0;
   return;
  }
 }

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, 0);
 if (VAR_11 < 0) {
  FUNC_10(VAR_1,
      "hrStorageTable: kvm_getswapinfo failed. %m\n");
  FUNC_1(0);
  return;
 }

 for (VAR_10 = 0; VAR_10 < (size_t)VAR_11; VAR_10++) {
  FUNC_4(&VAR_9[0], '\0', sizeof(VAR_9));
  FUNC_6(VAR_9, sizeof(VAR_9) - 1,
      "Swap:%s%s", VAR_4, VAR_6[VAR_10].ksw_devname);

  VAR_8 = FUNC_8(VAR_9);
  if (VAR_8 == ((void*)0))
   VAR_8 = FUNC_7(VAR_9);

  FUNC_1 (VAR_8 != ((void*)0));
  if (VAR_8 == ((void*)0))
   return;

  VAR_8->flags |= VAR_0;
  VAR_8->type = &VAR_2;
  VAR_8->allocationUnits = FUNC_2();
  VAR_8->size = VAR_6[VAR_10].ksw_total;
  VAR_8->used = VAR_6[VAR_10].ksw_used;
  VAR_8->allocationFailures = 0;
 }
}

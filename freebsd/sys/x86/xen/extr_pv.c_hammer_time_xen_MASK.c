
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ uint64_t ;
struct xen_add_to_physmap {int gpfn; int space; scalar_t__ idx; int domid; } ;
struct hvm_start_info {scalar_t__ modlist_paddr; scalar_t__ nr_modules; int flags; int magic; } ;
struct hvm_modlist_entry {scalar_t__ paddr; } ;
typedef int shared_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct xen_add_to_physmap*) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct hvm_start_info* VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (char*,...) ;
 int VAR_15 ;
 int FUNC_8 (int ) ;
 int VAR_16 ;

uint64_t
FUNC_9(vm_paddr_t VAR_17)
{
 struct hvm_modlist_entry *VAR_18;
 struct xen_add_to_physmap VAR_19;
 uint64_t VAR_20;
 char *VAR_21;
 int VAR_22;

 VAR_15 = VAR_8;
 VAR_14 = VAR_5;

 VAR_22 = FUNC_8(VAR_9);
 if (VAR_22) {
  FUNC_7("ERROR: failed to initialize hypercall page: %d\n",
      VAR_22);
  FUNC_1(VAR_4);
 }

 VAR_13 = (struct hvm_start_info *)(VAR_17 + VAR_2);
 if (VAR_13->magic != VAR_10) {
  FUNC_7("Unknown magic value in start_info struct: %#x\n",
      VAR_13->magic);
  FUNC_1(VAR_4);
 }





 VAR_20 = FUNC_6(VAR_17 + VAR_3, VAR_3);

 VAR_19.domid = VAR_0;
 VAR_19.idx = 0;
 VAR_19.space = VAR_6;
 VAR_19.gpfn = FUNC_2(VAR_20);
 if (FUNC_0(VAR_7, &VAR_19)) {
  FUNC_7("ERROR: failed to setup shared_info page\n");
  FUNC_1(VAR_4);
 }
 VAR_1 = (shared_info_t *)(VAR_20 + VAR_2);
 VAR_20 += VAR_3;





 VAR_21 = (void *)(VAR_20 + VAR_2);
 VAR_20 += VAR_3;
 FUNC_3(VAR_21, VAR_3);
 FUNC_5(VAR_21, VAR_3);

 if (VAR_13->modlist_paddr != 0) {
  if (VAR_13->modlist_paddr >= VAR_20) {
   FUNC_7(
       "ERROR: unexpected module list memory address\n");
   FUNC_1(VAR_4);
  }
  if (VAR_13->nr_modules == 0) {
   FUNC_7(
       "ERROR: modlist_paddr != 0 but nr_modules == 0\n");
   FUNC_1(VAR_4);
  }
  VAR_18 = (struct hvm_modlist_entry *)
      (vm_paddr_t)VAR_13->modlist_paddr + VAR_2;
  if (VAR_18[0].paddr >= VAR_20) {
   FUNC_7("ERROR: unexpected module memory address\n");
   FUNC_1(VAR_4);
  }
 }


 VAR_12 = VAR_16;
 VAR_11 = VAR_13->flags;


 return (FUNC_4(0, VAR_20));
}

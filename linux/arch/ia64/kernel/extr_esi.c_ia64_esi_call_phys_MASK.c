
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pdesc {void* gp; void* addr; } ;
struct ia64_sal_retval {int dummy; } ;
struct ia64_fpreg {int dummy; } ;
typedef scalar_t__ ia64_sal_handler ;
struct TYPE_3__ {scalar_t__ gp; scalar_t__ esi_proc; int guid; } ;
typedef TYPE_1__ ia64_esi_desc_entry_point_t ;
typedef int efi_guid_t ;
struct TYPE_4__ {int entry_count; } ;


 char VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ,int ) ;
 struct ia64_sal_retval FUNC_2 (scalar_t__,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct ia64_fpreg*) ;
 int FUNC_4 (struct ia64_fpreg*) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7 (efi_guid_t VAR_3, struct ia64_sal_retval *VAR_4,
   u64 VAR_5, u64 VAR_6, u64 VAR_7, u64 VAR_8, u64 VAR_9,
   u64 VAR_10, u64 VAR_11, u64 VAR_12)
{
 struct ia64_fpreg VAR_13[6];
 unsigned long VAR_14;
 u64 VAR_15[8];
 char *VAR_16;
 int VAR_17;

 if (!VAR_1)
  return -1;

 VAR_16 = (char *) (VAR_1 + 1);
 for (VAR_17 = 0; VAR_17 < VAR_1->entry_count; VAR_17++) {
  if (*VAR_16 == VAR_0) {
   ia64_esi_desc_entry_point_t *VAR_18 = (void *)VAR_16;
   if (!FUNC_1(VAR_3, VAR_18->guid)) {
    ia64_sal_handler VAR_19;
    struct pdesc VAR_20;

    VAR_20.addr = (void *)VAR_18->esi_proc;
    VAR_20.gp = (void *)VAR_18->gp;

    VAR_19 = (ia64_sal_handler) &VAR_20;

    VAR_15[0] = VAR_5;
    VAR_15[1] = VAR_6;
    VAR_15[2] = VAR_7;
    VAR_15[3] = VAR_8;
    VAR_15[4] = VAR_9;
    VAR_15[5] = VAR_10;
    VAR_15[6] = VAR_11;
    VAR_15[7] = VAR_12;
    FUNC_4(VAR_13);
    FUNC_5(&VAR_2, VAR_14);
    *VAR_4 = FUNC_2(VAR_19, VAR_15);
    FUNC_6(&VAR_2, VAR_14);
    FUNC_3(VAR_13);
    return 0;
   }
  }
  VAR_16 += FUNC_0(*VAR_16);
 }
 return -1;
}

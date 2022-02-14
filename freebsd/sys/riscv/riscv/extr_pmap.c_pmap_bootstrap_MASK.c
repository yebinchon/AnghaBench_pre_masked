
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
typedef int pd_entry_t ;
struct TYPE_5__ {int pm_active; } ;
struct TYPE_4__ {int * pm_l1; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_1__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (char*,scalar_t__,...) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 () ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;

void
FUNC_15(vm_offset_t VAR_23, vm_paddr_t VAR_24, vm_size_t VAR_25)
{
 u_int VAR_26, VAR_27, VAR_28, VAR_29;
 vm_offset_t VAR_30;
 vm_offset_t VAR_31, VAR_32;
 vm_paddr_t VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 int VAR_38;

 FUNC_10("pmap_bootstrap %lx %lx %lx\n", VAR_23, VAR_24, VAR_25);
 FUNC_10("%lx\n", VAR_23);
 FUNC_10("%lx\n", (VAR_1 >> VAR_2) & VAR_4);


 VAR_11.pm_l1 = (pd_entry_t *)VAR_23;
 FUNC_2(VAR_10);

 FUNC_13(&VAR_19, "pmap pv global");

 FUNC_0(&VAR_10->pm_active);


 VAR_35 = VAR_34 = VAR_24;





 for (VAR_38 = 0; VAR_38 < VAR_17 * 2; VAR_38 += 2) {
  if (VAR_16[VAR_38] == VAR_16[VAR_38 + 1])
   continue;
  if (VAR_16[VAR_38] <= VAR_35)
   VAR_35 = VAR_16[VAR_38];
  if (VAR_16[VAR_38 + 1] > VAR_34)
   VAR_34 = VAR_16[VAR_38 + 1];
 }
 FUNC_10("physmap_idx %lx\n", VAR_17);
 FUNC_10("min_pa %lx\n", VAR_35);
 FUNC_10("max_pa %lx\n", VAR_34);


 FUNC_6(VAR_23, VAR_35, VAR_34);






 (void)FUNC_8(VAR_23, VAR_1, &VAR_26, &VAR_27);


 FUNC_1(VAR_27 == 0, ("The L2 index is non-zero"));

 VAR_30 = FUNC_12(VAR_1 + VAR_25, VAR_7);


 VAR_30 = FUNC_7(VAR_23,
     VAR_8 - VAR_3, VAR_30);

 FUNC_14();







 (VAR_31) = VAR_30; VAR_30 += (VAR_0 / VAR_7 * VAR_7); memset((char *)(VAR_31), 0, ((VAR_0 / VAR_7) * VAR_7));;
 FUNC_5((void *)VAR_31, 0);


 (VAR_32) = VAR_30; VAR_30 += (FUNC_11(VAR_14) / VAR_7 * VAR_7); FUNC_0((char *)(VAR_32), 0, ((FUNC_11(VAR_14) / VAR_7) * VAR_7));;
 VAR_13 = (void *)VAR_32;

 VAR_21 = FUNC_12(VAR_30, VAR_3);
 VAR_22 = VAR_8 - VAR_3;
 VAR_12 = VAR_21;

 VAR_36 = FUNC_9(VAR_23, VAR_30);


 for (VAR_28 = VAR_29 = VAR_18 = 0; VAR_29 < VAR_17 * 2;
     VAR_29 += 2) {
  VAR_37 = VAR_16[VAR_29];
  VAR_33 = VAR_16[VAR_29 + 1];

  if (VAR_37 == VAR_33)
   continue;
  VAR_9[VAR_29] = VAR_37;
  VAR_9[VAR_29 + 1] = VAR_33;
  VAR_20 += FUNC_4((vm_offset_t)(VAR_33 - VAR_37));

  if (VAR_37 >= VAR_24 && VAR_33 <= VAR_36)
   continue;

  if (VAR_37 < VAR_24 && VAR_33 > VAR_24)
   VAR_33 = VAR_24;
  else if (VAR_37 < VAR_36 && VAR_33 > VAR_36)
   VAR_37 = VAR_36;
  VAR_15[VAR_28] = VAR_37;
  VAR_15[VAR_28 + 1] = VAR_33;
  VAR_18 += (VAR_33 - VAR_37) >> VAR_6;
  VAR_28 += 2;

  if (VAR_33 != VAR_16[VAR_29 + 1] && VAR_33 > VAR_36) {
   VAR_15[VAR_28] = VAR_36;
   VAR_15[VAR_28 + 1] = VAR_16[VAR_29 + 1];
   VAR_18 += (VAR_16[VAR_29 + 1] - VAR_36) >> VAR_6;
   VAR_28 += 2;
  }
 }
 VAR_15[VAR_28] = 0;
 VAR_15[VAR_28 + 1] = 0;






 VAR_5 = FUNC_4(VAR_15[VAR_28 - 1]);
}

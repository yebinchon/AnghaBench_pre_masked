
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_long ;
struct tte {scalar_t__ tte_data; int tte_vpn; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_9__ {int tte_list; } ;
struct TYPE_10__ {TYPE_1__ md; int pindex; TYPE_8__* object; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,struct tte*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,TYPE_8__*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,struct tte*,int ) ;
 int FUNC_6 (int *,struct tte*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct tte*) ;
 scalar_t__ FUNC_8 (struct tte*) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 struct tte* FUNC_15 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;

void
FUNC_16(vm_offset_t VAR_18, vm_page_t VAR_19)
{
 vm_offset_t VAR_20;
 struct tte *VAR_21;
 vm_page_t VAR_22;
 u_long VAR_23;

 FUNC_13(&VAR_17, VAR_2);
 FUNC_4(VAR_13);
 VAR_21 = FUNC_15(VAR_18);
 FUNC_0(VAR_0, "pmap_kenter: va=%#lx pa=%#lx tp=%p data=%#lx",
     VAR_18, FUNC_10(VAR_19), VAR_21, VAR_21->tte_data);
 if (FUNC_2(FUNC_10(VAR_19)) != FUNC_2(VAR_18)) {
  FUNC_1(VAR_1,
 "pmap_kenter: off color va=%#lx pa=%#lx o=%p ot=%d pi=%#lx",
      VAR_18, FUNC_10(VAR_19), VAR_19->object,
      VAR_19->object ? VAR_19->object->type : -1,
      VAR_19->pindex);
  FUNC_4(VAR_14);
 }
 if ((VAR_21->tte_data & VAR_9) != 0) {
  VAR_22 = FUNC_3(FUNC_7(VAR_21));
  VAR_20 = FUNC_8(VAR_21);
  if (VAR_19 == VAR_22 && VAR_18 == VAR_20) {
   FUNC_4(VAR_15);
   return;
  }
  FUNC_6(&VAR_22->md.tte_list, VAR_21, VAR_16);
  FUNC_12(VAR_22, VAR_20);
  if (VAR_18 != VAR_20)
   FUNC_14(VAR_12, VAR_20);
 }
 VAR_23 = VAR_9 | VAR_3 | FUNC_10(VAR_19) | VAR_7 | VAR_8 | VAR_4 |
     VAR_6 | VAR_10;
 if (FUNC_11(VAR_19, VAR_18) != 0)
  VAR_23 |= VAR_5;
 VAR_21->tte_vpn = FUNC_9(VAR_18, VAR_11);
 VAR_21->tte_data = VAR_23;
 FUNC_5(&VAR_19->md.tte_list, VAR_21, VAR_16);
}

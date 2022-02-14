
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef int u_long ;
struct tte {int tte_data; int tte_vpn; } ;
typedef TYPE_4__* pmap_t ;
struct TYPE_16__ {int resident_count; } ;
struct TYPE_19__ {TYPE_1__ pm_stats; } ;
struct TYPE_17__ {int tte_list; } ;
struct TYPE_18__ {int flags; int oflags; TYPE_2__ md; int pindex; TYPE_14__* object; } ;
struct TYPE_15__ {int type; } ;


 int FUNC_0 (int ,char*,int ,int ,TYPE_14__*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,struct tte*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct tte*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_12 ;
 TYPE_4__* VAR_13 ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_4__*,int *,struct tte*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int VAR_14 ;
 int FUNC_13 (TYPE_4__*,int ) ;
 struct tte* FUNC_14 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct tte* FUNC_15 (TYPE_4__*,int,int ) ;
 int VAR_20 ;
 int VAR_21 ;

struct tte *
FUNC_16(pmap_t VAR_22, vm_page_t VAR_23, vm_offset_t VAR_24, u_long VAR_25, u_long VAR_26)
{
 struct tte *VAR_27;
 struct tte *VAR_28;
 struct tte *VAR_29;
 vm_offset_t VAR_30;
 int VAR_31;
 int VAR_32;

 if (FUNC_1(FUNC_8(VAR_23)) != FUNC_1(VAR_24)) {
  FUNC_0(VAR_0,
 "tsb_tte_enter: off colour va=%#lx pa=%#lx o=%p ot=%d pi=%#lx",
      VAR_24, FUNC_8(VAR_23), VAR_23->object,
      VAR_23->object ? VAR_23->object->type : -1,
      VAR_23->pindex);
  if (VAR_22 == VAR_13)
   FUNC_4(VAR_16);
  else
   FUNC_4(VAR_18);
 }

 FUNC_12(&VAR_21, VAR_3);
 FUNC_3(VAR_22, VAR_1);
 if (VAR_22 == VAR_13) {
  FUNC_4(VAR_15);
  VAR_29 = FUNC_14(VAR_24);
  FUNC_2((VAR_29->tte_data & VAR_10) == 0,
      ("tsb_tte_enter: replacing valid kernel mapping"));
  goto enter;
 }
 FUNC_4(VAR_17);

 VAR_27 = FUNC_15(VAR_22, VAR_25, VAR_24);

 VAR_29 = ((void*)0);
 VAR_28 = ((void*)0);
 VAR_31 = FUNC_11(VAR_14) & (VAR_11 - 1);
 VAR_32 = VAR_31;
 do {
  if ((VAR_27[VAR_32].tte_data & VAR_10) == 0) {
   VAR_29 = &VAR_27[VAR_32];
   break;
  }
  if (VAR_29 == ((void*)0)) {
   if ((VAR_27[VAR_32].tte_data & VAR_9) == 0)
    VAR_29 = &VAR_27[VAR_32];
   else if (VAR_28 == ((void*)0))
    VAR_28 = &VAR_27[VAR_32];
  }
 } while ((VAR_32 = (VAR_32 + 1) & (VAR_11 - 1)) != VAR_31);

 if (VAR_29 == ((void*)0))
  VAR_29 = VAR_28;
 if ((VAR_29->tte_data & VAR_10) != 0) {
  FUNC_4(VAR_19);
  VAR_30 = FUNC_6(VAR_29);
  FUNC_10(VAR_22, ((void*)0), VAR_29, VAR_30);
  FUNC_13(VAR_22, VAR_30);
 }

enter:
 if ((VAR_23->flags & VAR_2) == 0) {
  VAR_26 |= VAR_4;
  if ((VAR_23->oflags & VAR_12) == 0) {
   VAR_22->pm_stats.resident_count++;
   VAR_26 |= VAR_8;
  }
  if (FUNC_9(VAR_23, VAR_24) != 0)
   VAR_26 |= VAR_5;
  FUNC_5(&VAR_23->md.tte_list, VAR_29, VAR_20);
 } else
  VAR_26 |= VAR_7 | VAR_6;

 VAR_29->tte_vpn = FUNC_7(VAR_24, VAR_25);
 VAR_29->tte_data = VAR_26;

 return (VAR_29);
}

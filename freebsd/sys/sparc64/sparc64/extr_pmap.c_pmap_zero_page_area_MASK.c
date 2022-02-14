
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
struct tte {int tte_data; int tte_vpn; } ;
struct TYPE_5__ {scalar_t__ color; } ;
struct TYPE_6__ {int flags; TYPE_1__ md; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (void*,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (int ,scalar_t__) ;
 struct tte* FUNC_12 (scalar_t__) ;

void
FUNC_13(vm_page_t VAR_16, int VAR_17, int VAR_18)
{
 struct tte *VAR_19;
 vm_offset_t VAR_20;
 vm_paddr_t VAR_21;

 FUNC_1((VAR_16->flags & VAR_2) == 0,
     ("pmap_zero_page_area: fake page"));
 FUNC_1(VAR_17 + VAR_18 <= VAR_1, ("pmap_zero_page_area: bad off/size"));
 FUNC_3(VAR_11);
 VAR_21 = FUNC_8(VAR_16);
 if (VAR_9 != 0 || VAR_16->md.color == FUNC_0(VAR_21)) {
  FUNC_3(VAR_12);
  VAR_20 = FUNC_6(VAR_21);
  FUNC_10((void *)(VAR_20 + VAR_17), VAR_18);
 } else if (VAR_16->md.color == -1) {
  FUNC_3(VAR_13);
  FUNC_9(VAR_0, VAR_21 + VAR_17, VAR_18);
 } else {
  FUNC_3(VAR_14);
  FUNC_2(VAR_10);
  VAR_20 = VAR_15 + (VAR_16->md.color * VAR_1);
  VAR_19 = FUNC_12(VAR_20);
  VAR_19->tte_data = VAR_6 | VAR_3 | FUNC_5(VAR_21) | VAR_4 | VAR_5 | VAR_7;
  VAR_19->tte_vpn = FUNC_7(VAR_20, VAR_8);
  FUNC_10((void *)(VAR_20 + VAR_17), VAR_18);
  FUNC_11(VAR_10, VAR_20);
  FUNC_4(VAR_10);
 }
}

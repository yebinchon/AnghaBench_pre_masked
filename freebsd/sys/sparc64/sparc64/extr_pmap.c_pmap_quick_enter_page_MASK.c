
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
struct TYPE_6__ {TYPE_1__ md; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct tte* FUNC_8 (scalar_t__) ;

vm_offset_t
FUNC_9(vm_page_t VAR_10)
{
 vm_paddr_t VAR_11;
 vm_offset_t VAR_12;
 struct tte *VAR_13;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_8 != 0 || VAR_10->md.color == FUNC_0(VAR_11))
  return (FUNC_4(VAR_11));

 FUNC_7();
 VAR_12 = FUNC_2(VAR_9);
 VAR_12 += (VAR_1 * ((VAR_0 + FUNC_0(VAR_11) -
     FUNC_0(VAR_12)) % VAR_0));
 VAR_13 = FUNC_8(VAR_12);

 FUNC_1(VAR_13->tte_data == 0, ("pmap_quick_enter_page: PTE busy"));

 VAR_13->tte_data = VAR_5 | VAR_2 | FUNC_3(VAR_11) | VAR_3 | VAR_4 | VAR_6;
 VAR_13->tte_vpn = FUNC_5(VAR_12, VAR_7);

 return (VAR_12);
}

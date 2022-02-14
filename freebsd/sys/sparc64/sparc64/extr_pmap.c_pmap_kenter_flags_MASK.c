
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_long ;
struct tte {int tte_data; int tte_vpn; } ;


 int FUNC_0 (int ,char*,int ,int ,struct tte*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 struct tte* FUNC_3 (int ) ;

void
FUNC_4(vm_offset_t VAR_6, vm_paddr_t VAR_7, u_long VAR_8)
{
 struct tte *VAR_9;

 VAR_9 = FUNC_3(VAR_6);
 FUNC_0(VAR_0, "pmap_kenter_flags: va=%#lx pa=%#lx tp=%p data=%#lx",
     VAR_6, VAR_7, VAR_9, VAR_9->tte_data);
 VAR_9->tte_vpn = FUNC_2(VAR_6, VAR_5);
 VAR_9->tte_data = VAR_4 | VAR_1 | FUNC_1(VAR_7) | VAR_3 | VAR_2 | VAR_8;
}

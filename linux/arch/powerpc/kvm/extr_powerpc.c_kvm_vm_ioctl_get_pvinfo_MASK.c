
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_ppc_pvinfo {int flags; void** hcall; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct kvm_ppc_pvinfo *VAR_2)
{
 u32 VAR_3 = 0x60000000;







 u32 VAR_4 = 0x3c000000;
 u32 VAR_5 = 0x60000000;
 u32 VAR_6 = 0x44000002;
 u32 VAR_7 = 0xffff;
 VAR_2->hcall[0] = FUNC_0(VAR_4 | ((VAR_1 >> 16) & VAR_7));
 VAR_2->hcall[1] = FUNC_0(VAR_5 | (VAR_1 & VAR_7));
 VAR_2->hcall[2] = FUNC_0(VAR_6);
 VAR_2->hcall[3] = FUNC_0(VAR_3);


 VAR_2->flags = VAR_0;

 return 0;
}

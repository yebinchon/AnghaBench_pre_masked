
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i3c_device_info {int dcr; int bcr; int pid; int dyn_addr; } ;
struct cdns_i3c_master {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (struct i3c_device_info*,int ,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cdns_i3c_master *VAR_0,
        unsigned int VAR_1,
        struct i3c_device_info *VAR_2)
{
 u32 VAR_3;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_3 = FUNC_5(VAR_0->regs + FUNC_0(VAR_1));
 VAR_2->dyn_addr = FUNC_1(VAR_3);
 VAR_3 = FUNC_5(VAR_0->regs + FUNC_3(VAR_1));
 VAR_2->dcr = VAR_3;
 VAR_2->bcr = VAR_3 >> 8;
 VAR_2->pid = VAR_3 >> 16;
 VAR_2->pid |= (u64)FUNC_5(VAR_0->regs + FUNC_2(VAR_1)) << 16;
}

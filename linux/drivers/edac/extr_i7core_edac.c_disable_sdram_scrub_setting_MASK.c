
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {int pci_noncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_2)
{
 struct i7core_pvt *VAR_3 = VAR_2->pvt_info;
 u32 VAR_4;


 FUNC_0(VAR_3->pci_noncore, VAR_0, &VAR_4);
 VAR_4 &= ~0x3;
 FUNC_1(VAR_3->pci_noncore, VAR_0,
          VAR_4 | VAR_1);
}

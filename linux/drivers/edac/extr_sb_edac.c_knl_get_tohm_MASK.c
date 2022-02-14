
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pci_mc_info; } ;
struct sbridge_pvt {TYPE_1__ knl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static u64 FUNC_1(struct sbridge_pvt *VAR_2)
{
 u64 VAR_3;
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_2->knl.pci_mc_info, VAR_0, &VAR_4);
 FUNC_0(VAR_2->knl.pci_mc_info, VAR_1, &VAR_5);
 VAR_3 = ((u64)VAR_5 << 32) | VAR_4;
 return VAR_3 | 0x3ffffff;
}

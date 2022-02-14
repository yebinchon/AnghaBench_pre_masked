
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pci_vtd; } ;
struct sbridge_pvt {TYPE_1__ info; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u64 FUNC_2(struct sbridge_pvt *VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;

 FUNC_1(VAR_2->info.pci_vtd, VAR_0, &VAR_4);
 VAR_3 = FUNC_0(VAR_4, 26, 31);
 FUNC_1(VAR_2->info.pci_vtd, VAR_1, &VAR_4);
 VAR_3 = ((VAR_4 << 6) | VAR_3) << 26;

 return VAR_3 | 0x1ffffff;
}

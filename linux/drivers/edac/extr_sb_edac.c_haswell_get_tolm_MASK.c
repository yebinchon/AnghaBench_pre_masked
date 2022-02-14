
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pci_vtd; } ;
struct sbridge_pvt {TYPE_1__ info; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static u64 FUNC_2(struct sbridge_pvt *VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_1->info.pci_vtd, VAR_0, &VAR_2);
 return (FUNC_0(VAR_2, 26, 31) << 26) | 0x3ffffff;
}

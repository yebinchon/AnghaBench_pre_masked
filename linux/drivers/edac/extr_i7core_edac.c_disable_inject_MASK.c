
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {size_t channel; scalar_t__ enable; } ;
struct i7core_pvt {TYPE_1__ inject; int ** pci_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct mem_ctl_info *VAR_2)
{
 struct i7core_pvt *VAR_3 = VAR_2->pvt_info;

 VAR_3->inject.enable = 0;

 if (!VAR_3->pci_ch[VAR_3->inject.channel][0])
  return -VAR_0;

 FUNC_0(VAR_3->pci_ch[VAR_3->inject.channel][0],
    VAR_1, 0);

 return 0;
}

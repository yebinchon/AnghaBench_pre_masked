
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {size_t channel; int enable; } ;
struct i7core_pvt {TYPE_1__ inject; int ** pci_ch; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,char*,int) ;
 struct mem_ctl_info* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct mem_ctl_info *VAR_4 = FUNC_3(VAR_1);
 struct i7core_pvt *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6;

 if (!VAR_5->pci_ch[VAR_5->inject.channel][0])
  return 0;

 FUNC_1(VAR_5->pci_ch[VAR_5->inject.channel][0],
          VAR_0, &VAR_6);

 FUNC_0(0, "Inject error read: 0x%018x\n", VAR_6);

 if (VAR_6 & 0x0c)
  VAR_5->inject.enable = 1;

 return FUNC_2(VAR_3, "%d\n", VAR_5->inject.enable);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {unsigned long long dclk_freq; struct pci_dev** pci_mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (unsigned long long,unsigned long long) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_3)
{
 struct i7core_pvt *VAR_4 = VAR_3->pvt_info;
 struct pci_dev *VAR_5;
 const u32 VAR_6 = 64;
 const u32 VAR_7 = VAR_4->dclk_freq;
 unsigned long long VAR_8;
 u32 VAR_9;


 VAR_5 = VAR_4->pci_mcr[2];
 if (!VAR_5)
  return -VAR_0;


 FUNC_1(VAR_5, VAR_1, &VAR_9);


 VAR_9 &= VAR_2;
 if (!VAR_9)
  return 0;


 VAR_8 = (unsigned long long)VAR_7 *
  1000000 * VAR_6;
 FUNC_0(VAR_8, VAR_9);
 return (int)VAR_8;
}

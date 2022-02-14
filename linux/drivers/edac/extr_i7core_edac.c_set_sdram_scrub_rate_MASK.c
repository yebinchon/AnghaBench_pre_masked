
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {scalar_t__ dclk_freq; struct pci_dev** pci_mcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (unsigned long long,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_9, u32 VAR_10)
{
 struct i7core_pvt *VAR_11 = VAR_9->pvt_info;
 struct pci_dev *VAR_12;
 u32 VAR_13;
 u32 VAR_14;


 VAR_12 = VAR_11->pci_mcr[2];
 if (!VAR_12)
  return -VAR_1;

 FUNC_1(VAR_12, VAR_2, &VAR_13);

 if (VAR_10 == 0) {

  VAR_13 &= ~VAR_8;

  FUNC_3(VAR_12, VAR_2,
          VAR_13 & ~VAR_4);


  FUNC_1(VAR_12, VAR_3, &VAR_14);
  VAR_14 &= ~VAR_7;
  VAR_14 |= VAR_5;
 } else {
  const int VAR_15 = 64;
  const u32 VAR_16 = VAR_11->dclk_freq;
  unsigned long long VAR_17;




  VAR_17 = (unsigned long long)VAR_16 *
   VAR_15 * 1000000;
  FUNC_0(VAR_17, VAR_10);

  if (!VAR_17 || VAR_17 > VAR_4)
   return -VAR_0;

  VAR_13 = VAR_4 & VAR_17;


  FUNC_2(VAR_12, VAR_2,
           VAR_8 | VAR_13);


  FUNC_1(VAR_12, VAR_3, &VAR_14);
  VAR_14 &= ~VAR_7;
  VAR_14 |= VAR_6;
 }

 FUNC_2(VAR_12, VAR_3, VAR_14);

 return VAR_10;
}

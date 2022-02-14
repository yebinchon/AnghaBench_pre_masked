
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u64 ;
typedef long long u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_4__ {size_t channel; int enable; int dimm; int rank; int bank; int page; int col; int type; int section; long long eccmask; } ;
struct i7core_pvt {TYPE_2__ inject; int pci_noncore; int ** pci_ch; TYPE_1__* channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int dimms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 int FUNC_1 (int ,char*,long long,long long,long long) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int ,int ,int) ;
 struct mem_ctl_info* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,scalar_t__,long long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
       struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct mem_ctl_info *VAR_8 = FUNC_4(VAR_4);
 struct i7core_pvt *VAR_9 = VAR_8->pvt_info;
 u32 VAR_10;
 u64 VAR_11 = 0;
 int VAR_12;
 long VAR_13;

 if (!VAR_9->pci_ch[VAR_9->inject.channel][0])
  return 0;

 VAR_12 = FUNC_2(VAR_6, 10, &VAR_13);
 if ((VAR_12 < 0))
  return 0;

 if (VAR_13) {
  VAR_9->inject.enable = 1;
 } else {
  FUNC_0(VAR_8);
  return VAR_7;
 }


 if (VAR_9->inject.dimm < 0)
  VAR_11 |= 1LL << 41;
 else {
  if (VAR_9->channel[VAR_9->inject.channel].dimms > 2)
   VAR_11 |= (VAR_9->inject.dimm & 0x3LL) << 35;
  else
   VAR_11 |= (VAR_9->inject.dimm & 0x1LL) << 36;
 }


 if (VAR_9->inject.rank < 0)
  VAR_11 |= 1LL << 40;
 else {
  if (VAR_9->channel[VAR_9->inject.channel].dimms > 2)
   VAR_11 |= (VAR_9->inject.rank & 0x1LL) << 34;
  else
   VAR_11 |= (VAR_9->inject.rank & 0x3LL) << 34;
 }


 if (VAR_9->inject.bank < 0)
  VAR_11 |= 1LL << 39;
 else
  VAR_11 |= (VAR_9->inject.bank & 0x15LL) << 30;


 if (VAR_9->inject.page < 0)
  VAR_11 |= 1LL << 38;
 else
  VAR_11 |= (VAR_9->inject.page & 0xffff) << 14;


 if (VAR_9->inject.col < 0)
  VAR_11 |= 1LL << 37;
 else
  VAR_11 |= (VAR_9->inject.col & 0x3fff);
 VAR_10 = (VAR_9->inject.type & 1) |
       (VAR_9->inject.section & 0x3) << 1 |
       (VAR_9->inject.type & 0x6) << (3 - 1);


 FUNC_3(VAR_9->pci_noncore,
          VAR_0, 0x2);

 FUNC_5(VAR_9->pci_ch[VAR_9->inject.channel][0],
          VAR_1, VAR_11);
 FUNC_5(VAR_9->pci_ch[VAR_9->inject.channel][0],
          VAR_1 + 4, VAR_11 >> 32L);

 FUNC_5(VAR_9->pci_ch[VAR_9->inject.channel][0],
          VAR_3, VAR_9->inject.eccmask);

 FUNC_5(VAR_9->pci_ch[VAR_9->inject.channel][0],
          VAR_2, VAR_10);






 FUNC_3(VAR_9->pci_noncore,
          VAR_0, 8);

 FUNC_1(0, "Error inject addr match 0x%016llx, ecc 0x%08x, inject 0x%08x\n",
   VAR_11, VAR_9->inject.eccmask, VAR_10);


 return VAR_7;
}

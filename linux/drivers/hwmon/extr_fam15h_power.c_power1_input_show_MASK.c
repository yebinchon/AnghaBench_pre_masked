
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;
struct fam15h_power_data {int tdp_to_watts; scalar_t__ base_tdp; struct pci_dev* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fam15h_power_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 s32 VAR_8;
 u64 VAR_9;
 struct fam15h_power_data *VAR_10 = FUNC_2(VAR_2);
 struct pci_dev *VAR_11 = VAR_10->pdev;

 FUNC_4(VAR_11->bus, FUNC_0(FUNC_1(VAR_11->devfn), 5),
      VAR_1, &VAR_5);





 if (FUNC_3()) {
  VAR_8 = VAR_5 >> 4;
  VAR_8 = FUNC_5(VAR_8, 27);
 } else {
  VAR_8 = (VAR_5 >> 4) & 0x3fffff;
  VAR_8 = FUNC_5(VAR_8, 21);
 }

 VAR_7 = (VAR_5 & 0xf) + 1;

 FUNC_4(VAR_11->bus, FUNC_0(FUNC_1(VAR_11->devfn), 5),
      VAR_0, &VAR_5);





 if (FUNC_3())
  VAR_6 = VAR_5 >> 16;
 else
  VAR_6 = (VAR_5 >> 16) & 0x1fff;

 VAR_9 = ((u64)(VAR_6 +
    VAR_10->base_tdp)) << VAR_7;
 VAR_9 -= VAR_8;
 VAR_9 *= VAR_10->tdp_to_watts;
 VAR_9 = (VAR_9 * 15625) >> (10 + VAR_7);
 return FUNC_6(VAR_4, "%u\n", (unsigned int) VAR_9);
}

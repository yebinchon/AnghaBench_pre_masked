
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dev; int devfn; int bus; } ;
struct fam15h_power_data {int base_tdp; int tdp_to_watts; int processor_pwr_watts; int max_cu_acc_power; int power_period; int cpu_pwr_sample_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (struct pci_dev*,struct fam15h_power_data*) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ,int*) ;
 int FUNC_10 (struct fam15h_power_data*) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_5,
      struct fam15h_power_data *VAR_6)
{
 u32 VAR_7;
 u64 VAR_8;
 int VAR_9;

 FUNC_7(VAR_5, VAR_2, &VAR_7);
 VAR_6->base_tdp = VAR_7 >> 16;
 VAR_8 = VAR_7 & 0xffff;

 FUNC_6(VAR_5->bus, FUNC_0(FUNC_1(VAR_5->devfn), 5),
      VAR_3, &VAR_7);

 VAR_6->tdp_to_watts = ((VAR_7 & 0x3ff) << 6) | ((VAR_7 >> 10) & 0x3f);
 VAR_8 *= VAR_6->tdp_to_watts;


 if ((VAR_8 >> 16) >= 256)
  FUNC_4(&VAR_5->dev,
    "Bogus value for ProcessorPwrWatts (processor_pwr_watts>=%u)\n",
    (unsigned int) (VAR_8 >> 16));


 VAR_6->processor_pwr_watts = (VAR_8 * 15625) >> 10;

 VAR_9 = FUNC_5(VAR_5, VAR_6);
 if (VAR_9)
  return VAR_9;



 if (!FUNC_2(VAR_4))
  return 0;






 VAR_6->cpu_pwr_sample_ratio = FUNC_3(0x80000007);

 if (FUNC_9(VAR_1, &VAR_8)) {
  FUNC_8("Failed to read max compute unit power accumulator MSR\n");
  return -VAR_0;
 }

 VAR_6->max_cu_acc_power = VAR_8;







 VAR_6->power_period = 10;

 return FUNC_10(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct pci_dev {scalar_t__ msi_cap; } ;
struct msi_msg {int address_lo; int address_hi; scalar_t__ data; } ;
struct msi_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct msi_desc*) ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (int,struct msi_msg*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct pci_dev *VAR_12, struct msi_desc *VAR_13)
{
 struct msi_msg VAR_14;
 u16 VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 u64 VAR_20;
 int VAR_21;






 FUNC_2(VAR_12, VAR_12->msi_cap + VAR_4, &VAR_15);







 VAR_16 = (VAR_15 & VAR_6) >> 4;
 if (VAR_16 == 0) {

  VAR_17 = (VAR_15 & VAR_5) >> 1;
 } else {





  VAR_17 = VAR_16;
 }





 if (VAR_17 > 5)
  VAR_17 = 0;

try_only_one:




 VAR_19 = 1 << VAR_17;


 VAR_20 = (1 << VAR_19) - 1;






 FUNC_6(&VAR_8);
 for (VAR_21 = 0; VAR_21 < VAR_9/64; VAR_21++) {
  for (VAR_18 = 0; VAR_18 < 64; VAR_18 += VAR_19) {
   if ((VAR_7[VAR_21] & (VAR_20 << VAR_18)) == 0) {
    VAR_7[VAR_21] |= VAR_20 << VAR_18;
    VAR_10[VAR_21] |= (VAR_20 >> 1) << VAR_18;
    goto msi_irq_allocated;
   }
  }
 }
msi_irq_allocated:
 FUNC_7(&VAR_8);


 if (VAR_18 >= 64) {
  if (VAR_17) {
   FUNC_5("arch_setup_msi_irq: Unable to find %d free interrupts, trying just one",
          1 << VAR_17);
   VAR_17 = 0;
   goto try_only_one;
  } else
   FUNC_1("arch_setup_msi_irq: Unable to find a free MSI interrupt");
 }


 VAR_18 += VAR_21*64;
 VAR_18 += VAR_3;

 switch (VAR_11) {
 case 128:

  VAR_14.address_lo =
   ((128ul << 20) + VAR_1) & 0xffffffff;
  VAR_14.address_hi = ((128ul << 20) + VAR_1) >> 32;
  break;
 case 131:

  VAR_14.address_lo = (0 + VAR_1) & 0xffffffff;
  VAR_14.address_hi = (0 + VAR_1) >> 32;
  break;
 case 130:


  VAR_14.address_lo = (0 + VAR_0) & 0xffffffff;
  VAR_14.address_hi = (0 + VAR_0) >> 32;
  break;
 case 129:

  VAR_14.address_lo = (0 + VAR_2) & 0xffffffff;
  VAR_14.address_hi = (0 + VAR_2) >> 32;
  break;
 default:
  FUNC_1("arch_setup_msi_irq: Invalid octeon_dma_bar_type");
 }
 VAR_14.data = VAR_18 - VAR_3;


 VAR_15 &= ~VAR_6;
 VAR_15 |= VAR_17 << 4;
 FUNC_3(VAR_12, VAR_12->msi_cap + VAR_4, VAR_15);

 FUNC_0(VAR_18, VAR_13);
 FUNC_4(VAR_18, &VAR_14);
 return 0;
}

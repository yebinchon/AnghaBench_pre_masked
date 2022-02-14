
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct pci_dev {scalar_t__ subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;

int FUNC_7(struct pci_dev *VAR_29)
{
 uint16_t VAR_30;
 uint32_t VAR_31;
 int VAR_32;







 FUNC_3(VAR_29, VAR_3, 64 / 4);

 FUNC_3(VAR_29, VAR_27, 64);



 FUNC_2(VAR_29, VAR_4, &VAR_30);
 VAR_30 |= VAR_5 | VAR_6;
 FUNC_5(VAR_29, VAR_4, VAR_30);

 if (VAR_29->subordinate) {

  FUNC_3(VAR_29, VAR_28, 64);

  FUNC_2(VAR_29, VAR_0, &VAR_30);
  VAR_30 |= VAR_1 | VAR_2;
  FUNC_5(VAR_29, VAR_0, VAR_30);
 }


 VAR_30 = VAR_22;
 VAR_30 |= VAR_24;
 VAR_30 |= VAR_23;
 VAR_30 |= VAR_25;
 FUNC_6(VAR_29, VAR_21, VAR_30);


 VAR_32 = FUNC_0(VAR_29, VAR_26);
 if (VAR_32) {

  FUNC_1(VAR_29, VAR_32 + VAR_20,
          &VAR_31);
  FUNC_4(VAR_29, VAR_32 + VAR_20,
           VAR_31);


  FUNC_4(VAR_29, VAR_32 + VAR_19, 0);







  FUNC_1(VAR_29, VAR_32 + VAR_13, &VAR_31);
  FUNC_4(VAR_29, VAR_32 + VAR_13, VAR_31);


  FUNC_4(VAR_29, VAR_32 + VAR_12, 0);

  FUNC_1(VAR_29, VAR_32 + VAR_7, &VAR_31);

  if (VAR_30 & VAR_10)
   VAR_30 |= VAR_11;

  if (VAR_30 & VAR_8)
   VAR_30 |= VAR_9;
  FUNC_4(VAR_29, VAR_32 + VAR_7, VAR_31);


  FUNC_4(VAR_29, VAR_32 + VAR_17,
           VAR_14 |
           VAR_16 |
           VAR_15);

  FUNC_1(VAR_29, VAR_32 + VAR_18, &VAR_31);
  FUNC_4(VAR_29, VAR_32 + VAR_18, VAR_31);
 }

 return 0;
}

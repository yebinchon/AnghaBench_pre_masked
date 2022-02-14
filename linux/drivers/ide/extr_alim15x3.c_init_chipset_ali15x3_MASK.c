
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int revision; scalar_t__ vendor; int bus; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct pci_dev* VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_4 ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (scalar_t__,int ,int *) ;
 struct pci_dev* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 int FUNC_7 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5)
{
 unsigned long VAR_6;
 u8 VAR_7;
 struct pci_dev *VAR_8 = FUNC_5(VAR_5->bus, FUNC_0(0,0));

 VAR_4 = VAR_5->revision;

 VAR_3 = FUNC_4(VAR_1, VAR_0, ((void*)0));

 FUNC_2(VAR_6);

 if (VAR_4 < 0xC2) {





  FUNC_6(VAR_5, 0x4b, &VAR_7);



  FUNC_7(VAR_5, 0x4b, VAR_7 & 0x7F);



  if (VAR_4 >= 0x20 && VAR_3) {
   FUNC_6(VAR_3, 0x5e, &VAR_7);
   VAR_2 = ((VAR_7 & 0x1e) == 0x12) ? 1: 0;
  }
  goto out;
 }
 FUNC_6(VAR_5, 0x4b, &VAR_7);
 FUNC_7(VAR_5, 0x4b, VAR_7 | 0x08);







 if (VAR_8 && VAR_8->vendor != VAR_1)
  goto out;

 if (VAR_4 < 0xC5 && VAR_3)
 {




  FUNC_6(VAR_3, 0x79, &VAR_7);
  if (VAR_4 == 0xC2) {



   FUNC_7(VAR_3, 0x79, VAR_7 | 0x04);
  } else if (VAR_4 >= 0xC3) {



   FUNC_7(VAR_3, 0x79, VAR_7 | 0x02);
  }
 }

out:
 if (VAR_4 >= 0x20) {
  FUNC_6(VAR_5, 0x53, &VAR_7);

  if (VAR_4 <= 0x20)
   VAR_7 = (VAR_7 & (~0x02)) | 0x01;
  else if (VAR_4 == 0xc7 || VAR_4 == 0xc8)
   VAR_7 |= 0x03;
  else
   VAR_7 |= 0x01;

  FUNC_7(VAR_5, 0x53, VAR_7);
 }
 FUNC_1(VAR_6);
 FUNC_3(VAR_8);
 FUNC_3(VAR_3);
 return 0;
}

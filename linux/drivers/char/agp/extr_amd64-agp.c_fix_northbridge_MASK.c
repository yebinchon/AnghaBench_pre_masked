
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int,int*) ;
 int FUNC_7 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_3, struct pci_dev *VAR_4, u16 VAR_5)
{
 u64 VAR_6, VAR_7;
 int VAR_8 = 0;
 u32 VAR_9, VAR_10;
 u16 VAR_11;

 FUNC_5(VAR_3, VAR_2, &VAR_9);
 VAR_9 = (VAR_9 >> 1) & 7;
 FUNC_5(VAR_3, VAR_1, &VAR_10);
 VAR_7 = (u64)VAR_10 << 25;



 FUNC_6(VAR_4, VAR_5+0x14, &VAR_11);
 if (VAR_11 == 0xffff) {
  if (FUNC_0(VAR_7, (32*1024*1024)<<VAR_9))
   return 0;
  return -1;
 }

 VAR_11 &= 0xfff;

 if (VAR_11 & 0xff)
  VAR_11 |= 0xf00;
 VAR_8 = 7 - FUNC_3(VAR_11);

 VAR_6 = FUNC_4(VAR_4, VAR_0);





 if (VAR_8 >=0 && VAR_6 + (32ULL<<(20 + VAR_8)) > 0x100000000ULL) {
  FUNC_1(&VAR_4->dev, "aperture size %u MB is not right, using settings from NB\n",
    32 << VAR_8);
  VAR_8 = VAR_9;
 }

 if (VAR_9 >= VAR_8) {
  if (FUNC_0(VAR_7, (32*1024*1024)<<VAR_9))
   return 0;
 }

 FUNC_1(&VAR_4->dev, "aperture from AGP @ %Lx size %u MB\n",
   VAR_6, 32 << VAR_8);
 if (VAR_8 < 0 || !FUNC_0(VAR_6, (32*1024*1024)<<VAR_8))
  return -1;

 FUNC_2(VAR_3, VAR_8);
 FUNC_7(VAR_3, VAR_1, VAR_6 >> 25);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pci_bus {unsigned char number; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 struct pci_dev* FUNC_3 (int ,int ,int ) ;
 unsigned char FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,void*) ;

__attribute__((used)) static int FUNC_7(unsigned char VAR_7,
  struct pci_bus *VAR_8, unsigned int VAR_9,
  int VAR_10, u32 *VAR_11)
{
 unsigned char VAR_12 = VAR_8->number;
 int VAR_13 = FUNC_0(VAR_9);
 int VAR_14 = FUNC_1(VAR_9);
 int VAR_15 = VAR_10 & ~3;
 void *VAR_16;
 u64 VAR_17;

 if (VAR_10 < VAR_6) {
  VAR_17 = (VAR_12 << 16) | (VAR_14 << 11) | (VAR_13 << 8) | VAR_15;
  if (VAR_12 == 0) {
   if (VAR_14 > 31)
    return VAR_2;
   VAR_16 = (void *)FUNC_2(VAR_0 | VAR_17);
  } else {
   VAR_16 = (void *)FUNC_2(VAR_1 | VAR_17);
  }
 } else if (VAR_10 < VAR_5) {
  struct pci_dev *VAR_18;

  VAR_18 = FUNC_3(0, 0, 0);
  if (!VAR_18)
   return VAR_2;

  VAR_17 = FUNC_4(VAR_18, 3);
  if (!VAR_17)
   return VAR_2;

  VAR_17 |= VAR_12 << 20 | VAR_14 << 15 | VAR_13 << 12 | VAR_15;
  VAR_16 = (void *)FUNC_2(VAR_17);
 } else {
  return VAR_2;
 }

 if (VAR_7 == VAR_4)
  FUNC_6(*VAR_11, VAR_16);
 else {
  *VAR_11 = FUNC_5(VAR_16);
  if (*VAR_11 == 0xffffffff) {
   *VAR_11 = -1;
   return VAR_2;
  }
 }
 return VAR_3;
}

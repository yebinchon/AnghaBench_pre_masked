
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_channel {int dummy; } ;
struct pci_bus {int number; int parent; struct pci_channel* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_channel*,int ) ;
 int FUNC_5 (struct pci_channel*,int,int ) ;

__attribute__((used)) static int FUNC_6(unsigned char VAR_9,
  struct pci_bus *VAR_10, unsigned int VAR_11, int VAR_12, u32 *VAR_13)
{
 struct pci_channel *VAR_14 = VAR_10->sysdata;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_15 = FUNC_2(VAR_11);
 VAR_16 = FUNC_0(VAR_11);
 VAR_17 = !!VAR_10->parent;
 VAR_18 = VAR_12 & ~3;

 if (VAR_10->number > 255 || VAR_15 > 31 || VAR_16 > 7)
  return VAR_1;
 if (FUNC_3(VAR_10)) {
  if (VAR_15 == 0) {
   if (VAR_9 == VAR_3)
    *VAR_13 = FUNC_4(VAR_14, FUNC_1(VAR_18));
   else
    FUNC_5(VAR_14, *VAR_13, FUNC_1(VAR_18));

   return VAR_2;
  } else if (VAR_15 > 1)
   return VAR_0;
 }


 FUNC_5(VAR_14, FUNC_4(VAR_14, VAR_4), VAR_4);


 FUNC_5(VAR_14, (VAR_10->number << 24) | (VAR_15 << 19) |
    (VAR_16 << 16) | VAR_18, VAR_5);


 FUNC_5(VAR_14, (1 << 31) | (VAR_17 << 8), VAR_7);


 if (FUNC_4(VAR_14, VAR_4) & 0x10)
  return VAR_0;


 if (FUNC_4(VAR_14, VAR_6) & ((1 << 29) | (1 << 28)))
  return VAR_0;

 if (VAR_9 == VAR_3)
  *VAR_13 = FUNC_4(VAR_14, VAR_8);
 else
  FUNC_5(VAR_14, *VAR_13, VAR_8);


 FUNC_5(VAR_14, 0, VAR_7);

 return VAR_2;
}

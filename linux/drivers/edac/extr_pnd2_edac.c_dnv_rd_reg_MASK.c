
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ,int,int *) ;
 int FUNC_7 (struct pci_dev*,int,void*) ;

__attribute__((used)) static int FUNC_8(int VAR_4, int VAR_5, int VAR_6, void *VAR_7, size_t VAR_8, char *VAR_9)
{
 struct pci_dev *VAR_10;
 char *VAR_11;
 u64 VAR_12;
 unsigned long VAR_13;

 if (VAR_6 == 4) {
  VAR_10 = FUNC_6(VAR_3, 0x1980, ((void*)0));
  if (!VAR_10)
   return -VAR_2;

  FUNC_7(VAR_10, VAR_5, VAR_7);
  FUNC_5(VAR_10);
 } else {

  if (VAR_6 == 0 && VAR_4 == 0x4c) {
   VAR_12 = FUNC_1();
   if (!VAR_12)
    return -VAR_2;
   VAR_13 = VAR_0;
  } else {

   VAR_12 = FUNC_2();
   if (!VAR_12)
    return -VAR_2;
   VAR_12 += (VAR_4 << 16);
   VAR_13 = VAR_1;
  }

  VAR_11 = FUNC_3((resource_size_t)VAR_12, VAR_13);
  if (!VAR_11)
   return -VAR_2;

  if (VAR_8 == 8)
   *(u32 *)(VAR_7 + 4) = *(u32 *)(VAR_11 + VAR_5 + 4);
  *(u32 *)VAR_7 = *(u32 *)(VAR_11 + VAR_5);

  FUNC_4(VAR_11);
 }

 FUNC_0(2, "Read %s=%.8x_%.8x\n", VAR_9,
   (VAR_8 == 8) ? *(u32 *)(VAR_7 + 4) : 0, *(u32 *)VAR_7);

 return 0;
}

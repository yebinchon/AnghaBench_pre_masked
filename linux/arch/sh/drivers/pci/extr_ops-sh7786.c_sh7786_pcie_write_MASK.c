
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,unsigned int,int,int,unsigned long) ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_5, unsigned int VAR_6,
        int VAR_7, int VAR_8, u32 VAR_9)
{
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;

        if ((VAR_8 == 2) && (VAR_7 & 1))
  return VAR_0;
 else if ((VAR_8 == 4) && (VAR_7 & 3))
  return VAR_0;

 FUNC_1(&VAR_4, VAR_10);
 VAR_12 = FUNC_3(VAR_2, VAR_5,
     VAR_6, VAR_7, &VAR_13);
 if (VAR_12 != VAR_1)
  goto out;

 FUNC_0(&VAR_5->dev, "pcie-config-write: bus=%3d devfn=0x%04x "
  "where=0x%04x size=%d val=%08lx\n", VAR_5->number,
  VAR_6, VAR_7, VAR_8, (unsigned long)VAR_9);

 if (VAR_8 == 1) {
  VAR_11 = (VAR_7 & 3) << 3;
  VAR_13 &= ~(0xff << VAR_11);
  VAR_13 |= ((VAR_9 & 0xff) << VAR_11);
 } else if (VAR_8 == 2) {
  VAR_11 = (VAR_7 & 2) << 3;
  VAR_13 &= ~(0xffff << VAR_11);
  VAR_13 |= ((VAR_9 & 0xffff) << VAR_11);
 } else
  VAR_13 = VAR_9;

 VAR_12 = FUNC_3(VAR_3, VAR_5,
     VAR_6, VAR_7, &VAR_13);
out:
 FUNC_2(&VAR_4, VAR_10);
 return VAR_12;
}

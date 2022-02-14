
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,unsigned int,int,int,unsigned long) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_4, unsigned int VAR_5,
       int VAR_6, int VAR_7, u32 *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;
 u32 VAR_11;

        if ((VAR_7 == 2) && (VAR_6 & 1))
  return VAR_0;
 else if ((VAR_7 == 4) && (VAR_6 & 3))
  return VAR_0;

 FUNC_1(&VAR_3, VAR_9);
 VAR_10 = FUNC_3(VAR_2, VAR_4,
     VAR_5, VAR_6, &VAR_11);
 if (VAR_10 != VAR_1) {
  *VAR_8 = 0xffffffff;
  goto out;
 }

 if (VAR_7 == 1)
  *VAR_8 = (VAR_11 >> ((VAR_6 & 3) << 3)) & 0xff;
 else if (VAR_7 == 2)
  *VAR_8 = (VAR_11 >> ((VAR_6 & 2) << 3)) & 0xffff;
 else
  *VAR_8 = VAR_11;

 FUNC_0(&VAR_4->dev, "pcie-config-read: bus=%3d devfn=0x%04x "
  "where=0x%04x size=%d val=0x%08lx\n", VAR_4->number,
  VAR_5, VAR_6, VAR_7, (unsigned long)*VAR_8);

out:
 FUNC_2(&VAR_3, VAR_9);
 return VAR_10;
}

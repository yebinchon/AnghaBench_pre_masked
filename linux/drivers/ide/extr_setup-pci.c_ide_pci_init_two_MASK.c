
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ide_port_info {int host_flags; } ;
struct ide_hw {int irq; } ;
struct ide_host {int irq_flags; void* host_priv; int ** dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info const*,int) ;
 struct ide_host* FUNC_1 (struct ide_port_info const*,struct ide_hw**,int) ;
 int FUNC_2 (struct ide_host*) ;
 int FUNC_3 (struct ide_host*,struct ide_port_info const*,struct ide_hw**) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct ide_port_info const*,struct ide_hw*,struct ide_hw**) ;
 int FUNC_6 (struct pci_dev*,int,struct ide_port_info const*,int) ;
 void* FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*,struct ide_host*) ;

int FUNC_10(struct pci_dev *VAR_5, struct pci_dev *VAR_6,
       const struct ide_port_info *VAR_7, void *VAR_8)
{
 struct pci_dev *VAR_9[] = { VAR_5, VAR_6 };
 struct ide_host *VAR_10;
 int VAR_11, VAR_12, VAR_13 = VAR_6 ? 4 : 2, VAR_14;
 struct ide_hw VAR_15[4], *VAR_16[] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) };

 if (VAR_7->host_flags & VAR_3)
  VAR_14 = (1 << 2) - 1;
 else
  VAR_14 = (1 << 4) - 1;

 if ((VAR_7->host_flags & VAR_2) == 0) {
  if (VAR_7->host_flags & VAR_1)
   VAR_14 |= (1 << 2);
  else
   VAR_14 |= (1 << 4);
 }

 for (VAR_12 = 0; VAR_12 < VAR_13 / 2; VAR_12++) {
  VAR_11 = FUNC_6(VAR_9[VAR_12], VAR_14, VAR_7, !VAR_12);
  if (VAR_11 < 0) {
   if (VAR_12 == 1)
    FUNC_8(VAR_9[0], VAR_14);
   goto out;
  }

  FUNC_5(VAR_9[VAR_12], VAR_7, &VAR_15[VAR_12*2], &VAR_16[VAR_12*2]);
 }

 VAR_10 = FUNC_1(VAR_7, VAR_16, VAR_13);
 if (VAR_10 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out_free_bars;
 }

 VAR_10->dev[0] = &VAR_5->dev;
 if (VAR_6)
  VAR_10->dev[1] = &VAR_6->dev;

 VAR_10->host_priv = VAR_8;
 VAR_10->irq_flags = VAR_4;

 FUNC_9(VAR_9[0], VAR_10);
 if (VAR_6)
  FUNC_9(VAR_9[1], VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_13 / 2; VAR_12++) {
  VAR_11 = FUNC_0(VAR_9[VAR_12], VAR_7, !VAR_12);





  if (VAR_11 < 0)
   goto out_free_bars;


  if (FUNC_4(VAR_9[VAR_12])) {
   VAR_15[VAR_12*2].irq = FUNC_7(VAR_9[VAR_12], 0);
   VAR_15[VAR_12*2 + 1].irq = FUNC_7(VAR_9[VAR_12], 1);
  } else
   VAR_15[VAR_12*2 + 1].irq = VAR_15[VAR_12*2].irq = VAR_11;
 }

 VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_16);
 if (VAR_11)
  FUNC_2(VAR_10);
 else
  goto out;

out_free_bars:
 VAR_12 = VAR_13 / 2;
 while (VAR_12--)
  FUNC_8(VAR_9[VAR_12], VAR_14);
out:
 return VAR_11;
}

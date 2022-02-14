
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_2 (struct pci_dev*,unsigned int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->host->dev);
 unsigned int VAR_4 = 0x50 + 4 * VAR_2->port_no;
 u16 VAR_5;
 u8 VAR_6;


 FUNC_1(VAR_3, VAR_4 + 2, &VAR_5);

 FUNC_2(VAR_3, VAR_4 + 2, VAR_5 | 0x8000);
 FUNC_0(VAR_3, 0x5A, &VAR_6);

 FUNC_2(VAR_3, VAR_4 + 2, VAR_5);

 if (VAR_6 & (2 >> VAR_2->port_no))
  return VAR_0;
 else
  return VAR_1;
}

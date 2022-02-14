
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ata_port *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_4->host->dev);
 int VAR_6 = VAR_4->port_no ? VAR_1 : VAR_3;
 int VAR_7 = VAR_4->port_no ? VAR_0 : VAR_2;
 u8 VAR_8;


 FUNC_0(VAR_5, VAR_7, &VAR_8);

 return VAR_8 & VAR_6;
}

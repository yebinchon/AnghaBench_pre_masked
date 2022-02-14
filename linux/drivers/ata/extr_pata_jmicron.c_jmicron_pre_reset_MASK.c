
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; void* cbl; TYPE_1__* host; } ;
struct ata_link {struct ata_port* ap; } ;
typedef int port_type ;
struct TYPE_2__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct ata_link*,unsigned long) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_link *VAR_4, unsigned long VAR_5)
{
 struct ata_port *VAR_6 = VAR_4->ap;
 struct pci_dev *VAR_7 = FUNC_2(VAR_6->host->dev);
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10 = 1<< (4 * VAR_6->port_no);
 int VAR_11 = VAR_6->port_no;
 port_type VAR_12[2];


 FUNC_1(VAR_7, 0x40, &VAR_8);
 if ((VAR_8 & VAR_10) == 0)
  return -VAR_3;




 if (VAR_8 & (1 << 23)) {
  VAR_12[0] = 128;
  VAR_12[1] = 130;
 } else {
  VAR_12[0] = 128;
  VAR_12[1] = 128;
 }



 FUNC_1(VAR_7, 0x80, &VAR_9);
 if (VAR_9 & (1<<24))
  VAR_12[0] = 129;


 if (VAR_8 & (1 << 22))
  VAR_11 = VAR_11 ^ 1;






 switch (VAR_12[VAR_11]) {
 case 130:
  if ((VAR_8 & (1 << 5)) == 0)
   return -VAR_3;
  if (VAR_8 & (1 << 3))
   VAR_6->cbl = VAR_0;
  else
   VAR_6->cbl = VAR_1;
  break;
 case 129:

  if ((VAR_9 & (1 << 21)) == 0)
   return -VAR_3;
  if (VAR_9 & (1 << 19))
   VAR_6->cbl = VAR_0;
  else
   VAR_6->cbl = VAR_1;
  break;
 case 128:
  VAR_6->cbl = VAR_2;
  break;
 }
 return FUNC_0(VAR_4, VAR_5);
}

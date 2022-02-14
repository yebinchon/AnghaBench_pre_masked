
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct fpga_manager {struct altera_cvp_conf* priv; } ;
struct altera_cvp_conf {TYPE_1__* pci_dev; scalar_t__ sent_packets; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fpga_manager*,int) ;
 int FUNC_1 (struct altera_cvp_conf*,int ,scalar_t__*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct fpga_manager *VAR_6,
      u32 VAR_7)
{
 u32 VAR_8 = VAR_4 / VAR_3;
 struct altera_cvp_conf *VAR_9 = VAR_6->priv;
 int VAR_10;
 u8 VAR_11;

 do {
  VAR_10 = FUNC_1(VAR_9, VAR_5, &VAR_11);
  if (VAR_10) {
   FUNC_2(&VAR_9->pci_dev->dev,
    "Error reading CVP Credit Register\n");
   return VAR_10;
  }


  if (VAR_11 - (u8)VAR_9->sent_packets)
   return 0;

  VAR_10 = FUNC_0(VAR_6, VAR_7 * VAR_0);
  if (VAR_10) {
   FUNC_2(&VAR_9->pci_dev->dev,
    "CE Bit error credit reg[0x%x]:sent[0x%x]\n",
    VAR_11, VAR_9->sent_packets);
   return -VAR_1;
  }


  FUNC_3(VAR_3, VAR_3 + 1);
 } while (VAR_8--);

 FUNC_2(&VAR_9->pci_dev->dev, "Timeout waiting for credit\n");
 return -VAR_2;
}

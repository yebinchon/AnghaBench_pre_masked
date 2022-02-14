
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pdc_port_priv {int* pkt; } ;
struct TYPE_4__ {int protocol; int flags; unsigned int device; int nsect; int lbal; int lbam; int lbah; int command; } ;
struct ata_queued_cmd {int* cdb; TYPE_2__ tf; TYPE_1__* dev; struct ata_port* ap; } ;
struct ata_port {int link; struct pdc_port_priv* private_data; int bmdma_prd_dma; } ;
typedef int dma_addr_t ;
typedef scalar_t__ __le32 ;
struct TYPE_3__ {unsigned int cdb_len; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*,int*,unsigned int) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ata_queued_cmd *VAR_17)
{
 struct ata_port *VAR_18 = VAR_17->ap;
 dma_addr_t VAR_19 = VAR_18->bmdma_prd_dma;
 unsigned int VAR_20 = VAR_17->dev->cdb_len;
 u8 *VAR_21 = VAR_17->cdb;
 struct pdc_port_priv *VAR_22 = VAR_18->private_data;
 u8 *VAR_23 = VAR_22->pkt;
 __le32 *VAR_24 = (__le32 *) VAR_23;
 unsigned int VAR_25, VAR_26;




 switch (VAR_17->tf.protocol) {
 case 129:
  if (!(VAR_17->tf.flags & VAR_8))
   VAR_24[0] = FUNC_2(VAR_15);
  else
   VAR_24[0] = 0;
  break;
 case 128:
  VAR_24[0] = FUNC_2(VAR_14);
  break;
 default:
  FUNC_0();
  break;
 }
 VAR_24[1] = FUNC_2(VAR_19);
 VAR_24[2] = 0;


 if (FUNC_4(&VAR_18->link))
  VAR_25 = VAR_9;
 else
  VAR_25 = VAR_17->tf.device;

 VAR_23[12] = (1 << 5) | VAR_4;
 VAR_23[13] = VAR_25;
 VAR_23[14] = (1 << 5) | VAR_4 | VAR_13;
 VAR_23[15] = VAR_25;

 VAR_23[16] = (1 << 5) | VAR_7;
 VAR_23[17] = VAR_17->tf.nsect;
 VAR_23[18] = (1 << 5) | VAR_6;
 VAR_23[19] = VAR_17->tf.lbal;


 if (VAR_17->tf.protocol != 129)
  VAR_26 = VAR_11;
 else
  VAR_26 = VAR_10;

 VAR_23[20] = (1 << 5) | VAR_5;
 VAR_23[21] = VAR_26;
 VAR_23[22] = (1 << 5) | VAR_1;
 VAR_23[23] = VAR_17->tf.lbam;
 VAR_23[24] = (1 << 5) | VAR_0;
 VAR_23[25] = VAR_17->tf.lbah;


 VAR_23[26] = (1 << 5) | VAR_2;
 VAR_23[27] = VAR_17->tf.command;


 VAR_23[28] = (1 << 5) | VAR_4 | VAR_16;
 VAR_23[29] = VAR_25;


 FUNC_1(VAR_20 & ~0x1E);


 VAR_23[30] = (((VAR_20 >> 1) & 7) << 5) | VAR_3 | VAR_12;
 FUNC_3(VAR_23+31, VAR_21, VAR_20);
}

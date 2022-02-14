
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ protocol; int device; int flags; int hob_nsect; int hob_lbal; int hob_lbam; int hob_lbah; int nsect; int lbal; int lbam; int lbah; int command; } ;
struct ata_queued_cmd {TYPE_1__ tf; TYPE_2__* ap; } ;
struct adma_port_priv {int* pkt; int pkt_dma; } ;
typedef int __le32 ;
struct TYPE_4__ {struct adma_port_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct ata_queued_cmd *VAR_14)
{
 struct adma_port_priv *VAR_15 = VAR_14->ap->private_data;
 u8 *VAR_16 = VAR_15->pkt;
 u32 VAR_17 = (u32)VAR_15->pkt_dma;
 int VAR_18 = 0;

 FUNC_0("ENTER\n");

 FUNC_1(VAR_14->ap);
 if (VAR_14->tf.protocol != VAR_7)
  return;

 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = VAR_11 | VAR_9 | VAR_10;
 VAR_18++;

 *(__le32 *)(VAR_16+VAR_18) = FUNC_3(VAR_17);
 VAR_18 += 4;
 VAR_18 += 4;

 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = 0;


 VAR_16[VAR_18++] = VAR_14->tf.device;
 VAR_16[VAR_18++] = VAR_2;
 if ((VAR_14->tf.flags & VAR_8)) {
  VAR_16[VAR_18++] = VAR_14->tf.hob_nsect;
  VAR_16[VAR_18++] = VAR_6;
  VAR_16[VAR_18++] = VAR_14->tf.hob_lbal;
  VAR_16[VAR_18++] = VAR_4;
  VAR_16[VAR_18++] = VAR_14->tf.hob_lbam;
  VAR_16[VAR_18++] = VAR_5;
  VAR_16[VAR_18++] = VAR_14->tf.hob_lbah;
  VAR_16[VAR_18++] = VAR_3;
 }
 VAR_16[VAR_18++] = VAR_14->tf.nsect;
 VAR_16[VAR_18++] = VAR_6;
 VAR_16[VAR_18++] = VAR_14->tf.lbal;
 VAR_16[VAR_18++] = VAR_4;
 VAR_16[VAR_18++] = VAR_14->tf.lbam;
 VAR_16[VAR_18++] = VAR_5;
 VAR_16[VAR_18++] = VAR_14->tf.lbah;
 VAR_16[VAR_18++] = VAR_3;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = VAR_1;
 VAR_16[VAR_18++] = VAR_13;
 VAR_16[VAR_18++] = 0;
 VAR_16[VAR_18++] = VAR_14->tf.command;
 VAR_16[VAR_18++] = VAR_0 | VAR_12;

 VAR_16[3] = (VAR_18 >> 3) - 2;
 *(__le32 *)(VAR_16+8) = FUNC_3(VAR_17 + VAR_18);

 VAR_18 = FUNC_2(VAR_14);
 FUNC_6();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pdc_port_priv {int pkt; } ;
struct TYPE_9__ {int protocol; int flags; } ;
struct ata_queued_cmd {TYPE_3__ tf; TYPE_2__* dev; TYPE_1__* ap; } ;
struct TYPE_8__ {int devno; } ;
struct TYPE_7__ {int bmdma_prd_dma; struct pdc_port_priv* private_data; } ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (struct ata_queued_cmd*) ;
 int FUNC_3 (TYPE_3__*,int ,unsigned int) ;
 unsigned int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 unsigned int FUNC_5 (TYPE_3__*,int ,unsigned int) ;
 unsigned int FUNC_6 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct ata_queued_cmd *VAR_1)
{
 struct pdc_port_priv *VAR_2 = VAR_1->ap->private_data;
 unsigned int VAR_3;

 FUNC_0("ENTER\n");

 switch (VAR_1->tf.protocol) {
 case 129:
  FUNC_2(VAR_1);

 case 128:
  VAR_3 = FUNC_4(&VAR_1->tf, VAR_1->ap->bmdma_prd_dma,
       VAR_1->dev->devno, VAR_2->pkt);
  if (VAR_1->tf.flags & VAR_0)
   VAR_3 = FUNC_6(&VAR_1->tf, VAR_2->pkt, VAR_3);
  else
   VAR_3 = FUNC_5(&VAR_1->tf, VAR_2->pkt, VAR_3);
  FUNC_3(&VAR_1->tf, VAR_2->pkt, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_1);
  break;
 case 132:
  FUNC_2(VAR_1);

 case 131:
  FUNC_1(VAR_1);
  break;
 default:
  break;
 }
}

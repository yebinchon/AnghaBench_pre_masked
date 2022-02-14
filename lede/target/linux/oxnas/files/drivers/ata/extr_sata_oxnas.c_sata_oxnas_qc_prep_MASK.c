
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sata_oxnas_port_priv {scalar_t__ sgdma_base; TYPE_2__* sgdma_request; int sgdma_request_pa; } ;
struct TYPE_5__ {int protocol; } ;
struct ata_queued_cmd {scalar_t__ dma_dir; TYPE_3__* ap; TYPE_1__ tf; int err_mask; } ;
struct TYPE_7__ {int port_no; int bmdma_prd_dma; struct sata_oxnas_port_priv* private_data; int host; } ;
struct TYPE_6__ {int dst_pa; int src_pa; int qualifier; int control; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (struct ata_queued_cmd*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ata_queued_cmd *VAR_10)
{
 struct sata_oxnas_port_priv *VAR_11;
 int VAR_12 = VAR_10->ap->port_no;


 if (!FUNC_6(VAR_10->ap)) {
  FUNC_3(VAR_10->ap,
   "port %d not connected completing with error\n",
   VAR_12);
  VAR_10->err_mask |= VAR_0;
  FUNC_4(VAR_10);
 }

 FUNC_7(VAR_10->ap->host, 0, 0);


 if (FUNC_1(VAR_10->tf.protocol) || FUNC_2(VAR_10->tf.protocol)) {


  FUNC_0(VAR_10);


  VAR_11 = VAR_10->ap->private_data;

  FUNC_5(VAR_11->sgdma_request_pa,
    VAR_11->sgdma_base + VAR_9);


  if (VAR_12 == 0) {
   VAR_11->sgdma_request->control =
    (VAR_10->dma_dir == VAR_1) ?
     VAR_4 : VAR_5;
  } else {
   VAR_11->sgdma_request->control =
    (VAR_10->dma_dir == VAR_1) ?
     VAR_6 : VAR_7;
  }
  VAR_11->sgdma_request->qualifier = VAR_8;
  VAR_11->sgdma_request->src_pa = VAR_10->ap->bmdma_prd_dma;
  VAR_11->sgdma_request->dst_pa = VAR_10->ap->bmdma_prd_dma;
  FUNC_8();


  FUNC_5(VAR_3, VAR_11->sgdma_base + VAR_2);
 }
}

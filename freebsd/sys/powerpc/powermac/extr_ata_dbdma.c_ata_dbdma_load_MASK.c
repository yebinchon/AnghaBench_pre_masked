
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_request {int flags; int bytecount; TYPE_1__* dma; int dev; scalar_t__ data; int parent; } ;
struct ata_dbdma_dmaload_args {int write; int nsegs; void* sc; } ;
struct TYPE_4__ {int alignment; int max_iosize; int (* unload ) (struct ata_request*) ;TYPE_1__* slot; } ;
struct ata_channel {TYPE_2__ dma; } ;
struct TYPE_3__ {int data_map; int data_tag; int sg_map; int sg_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int *,struct ata_dbdma_dmaload_args*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ata_request*) ;

__attribute__((used)) static int
FUNC_5(struct ata_request *VAR_6, void *VAR_7, int *VAR_8)
{
 struct ata_channel *VAR_9 = FUNC_2(VAR_6->parent);
 struct ata_dbdma_dmaload_args VAR_10;

 int VAR_11;

 VAR_10.sc = FUNC_2(VAR_6->parent);
 VAR_10.write = !(VAR_6->flags & VAR_0);

 if (!VAR_6->bytecount) {
  FUNC_3(VAR_6->dev,
      "FAILURE - zero length DMA transfer attempted\n");
  return VAR_4;
 }
 if (((uintptr_t)(VAR_6->data) & (VAR_9->dma.alignment - 1)) ||
     (VAR_6->bytecount & (VAR_9->dma.alignment - 1))) {
  FUNC_3(VAR_6->dev,
      "FAILURE - non aligned DMA transfer attempted\n");
  return VAR_4;
 }
 if (VAR_6->bytecount > VAR_9->dma.max_iosize) {
  FUNC_3(VAR_6->dev,
      "FAILURE - oversized DMA transfer attempt %d > %d\n",
      VAR_6->bytecount, VAR_9->dma.max_iosize);
  return VAR_4;
 }

 VAR_6->dma = &VAR_9->dma.slot[0];

 if ((VAR_11 = FUNC_0(VAR_6->dma->data_tag,
     VAR_6->dma->data_map, VAR_6->data, VAR_6->bytecount,
     &VAR_5, &VAR_10, VAR_3))) {
  FUNC_3(VAR_6->dev, "FAILURE - load data\n");
  goto error;
 }

 if (VAR_8)
  *VAR_8 = VAR_10.nsegs;

 FUNC_1(VAR_6->dma->sg_tag, VAR_6->dma->sg_map,
     VAR_2);
 FUNC_1(VAR_6->dma->data_tag, VAR_6->dma->data_map,
     (VAR_6->flags & VAR_0) ?
     VAR_1 : VAR_2);

 return 0;

error:
 VAR_9->dma.unload(VAR_6);
 return VAR_4;
}

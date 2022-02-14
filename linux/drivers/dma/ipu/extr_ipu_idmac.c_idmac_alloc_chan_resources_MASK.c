
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmac_channel {scalar_t__ status; int eof_irq; char* eof_name; } ;
struct idmac {int dummy; } ;
struct dma_chan {int client_count; int chan_id; TYPE_1__* dev; int device; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,scalar_t__,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct dma_chan*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct idmac*,struct idmac_channel*,int) ;
 int FUNC_6 (struct idmac*,struct idmac_channel*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct idmac*,struct idmac_channel*) ;
 int FUNC_10 (int,int ,int ,char*,struct idmac_channel*) ;
 struct idmac* FUNC_11 (int ) ;
 struct idmac_channel* FUNC_12 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_13(struct dma_chan *VAR_8)
{
 struct idmac_channel *VAR_9 = FUNC_12(VAR_8);
 struct idmac *VAR_10 = FUNC_11(VAR_8->device);
 int VAR_11;


 FUNC_0(VAR_8->client_count > 1);
 FUNC_1(VAR_9->status != VAR_1);

 FUNC_4(VAR_8);

 VAR_11 = FUNC_7(VAR_8->chan_id);
 if (VAR_11 < 0)
  goto eimap;

 VAR_9->eof_irq = VAR_11;





 FUNC_5(VAR_10, VAR_9, 1);

 VAR_11 = FUNC_6(VAR_10, VAR_9);
 if (VAR_11 < 0)
  goto eichan;

 VAR_11 = FUNC_10(VAR_9->eof_irq, VAR_7, 0,
     VAR_9->eof_name, VAR_9);
 if (VAR_11 < 0)
  goto erirq;
 VAR_9->status = VAR_2;

 FUNC_2(&VAR_8->dev->device, "Found channel 0x%x, irq %d\n",
  VAR_8->chan_id, VAR_9->eof_irq);

 return VAR_11;

erirq:
 FUNC_9(VAR_10, VAR_9);
eichan:
 FUNC_8(VAR_8->chan_id);
eimap:
 return VAR_11;
}

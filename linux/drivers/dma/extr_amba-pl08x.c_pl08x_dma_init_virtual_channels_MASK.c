
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pl08x_driver_data {TYPE_2__* adev; TYPE_1__* pd; } ;
struct TYPE_6__ {int desc_free; } ;
struct pl08x_dma_chan {int signal; char* bus_id; TYPE_3__ vc; int name; struct pl08x_dma_chan* cd; int periph_buses; int state; struct pl08x_driver_data* host; } ;
struct dma_device {int channels; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int mem_buses; struct pl08x_dma_chan* slave_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct pl08x_dma_chan*) ;
 void* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct pl08x_dma_chan*) ;
 int FUNC_7 (TYPE_3__*,struct dma_device*) ;

__attribute__((used)) static int FUNC_8(struct pl08x_driver_data *VAR_4,
  struct dma_device *VAR_5, unsigned int VAR_6, bool VAR_7)
{
 struct pl08x_dma_chan *VAR_8;
 int VAR_9;

 FUNC_0(&VAR_5->channels);






 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->host = VAR_4;
  VAR_8->state = VAR_2;
  VAR_8->signal = -1;

  if (VAR_7) {
   VAR_8->cd = &VAR_4->pd->slave_channels[VAR_9];





   VAR_8->signal = VAR_9;
   FUNC_6(VAR_8);
  } else {
   VAR_8->cd = FUNC_5(sizeof(*VAR_8->cd), VAR_1);
   if (!VAR_8->cd) {
    FUNC_4(VAR_8);
    return -VAR_0;
   }
   VAR_8->cd->bus_id = "memcpy";
   VAR_8->cd->periph_buses = VAR_4->pd->mem_buses;
   VAR_8->name = FUNC_3(VAR_1, "memcpy%d", VAR_9);
   if (!VAR_8->name) {
    FUNC_4(VAR_8->cd);
    FUNC_4(VAR_8);
    return -VAR_0;
   }
  }
  FUNC_1(&VAR_4->adev->dev,
    "initialize virtual channel \"%s\"\n",
    VAR_8->name);

  VAR_8->vc.desc_free = VAR_3;
  FUNC_7(&VAR_8->vc, VAR_5);
 }
 FUNC_2(&VAR_4->adev->dev, "initialized %d virtual %s channels\n",
   VAR_9, VAR_7 ? "slave" : "memcpy");
 return VAR_9;
}

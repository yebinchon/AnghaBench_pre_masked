
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_platform_data {int (* get_xfer_signal ) (int ) ;} ;
struct pl08x_dma_chan {int signal; scalar_t__ mux_use; int cd; TYPE_1__* host; } ;
struct TYPE_2__ {struct pl08x_platform_data* pd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pl08x_dma_chan *VAR_0)
{
 const struct pl08x_platform_data *VAR_1 = VAR_0->host->pd;
 int VAR_2;

 if (VAR_0->mux_use++ == 0 && VAR_1->get_xfer_signal) {
  VAR_2 = VAR_1->get_xfer_signal(VAR_0->cd);
  if (VAR_2 < 0) {
   VAR_0->mux_use = 0;
   return VAR_2;
  }

  VAR_0->signal = VAR_2;
 }
 return 0;
}

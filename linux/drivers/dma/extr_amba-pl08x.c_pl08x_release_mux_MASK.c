
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_platform_data {int (* put_xfer_signal ) (int ,int) ;} ;
struct pl08x_dma_chan {int signal; scalar_t__ mux_use; int cd; TYPE_1__* host; } ;
struct TYPE_2__ {struct pl08x_platform_data* pd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct pl08x_dma_chan *VAR_0)
{
 const struct pl08x_platform_data *VAR_1 = VAR_0->host->pd;

 if (VAR_0->signal >= 0) {
  FUNC_0(VAR_0->mux_use == 0);

  if (--VAR_0->mux_use == 0 && VAR_1->put_xfer_signal) {
   VAR_1->put_xfer_signal(VAR_0->cd, VAR_0->signal);
   VAR_0->signal = -1;
  }
 }
}

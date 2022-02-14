
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_chan {TYPE_1__* cl; } ;
struct TYPE_2__ {int (* rx_callback ) (TYPE_1__*,void*) ;} ;


 int FUNC_0 (TYPE_1__*,void*) ;

void FUNC_1(struct mbox_chan *VAR_0, void *VAR_1)
{

 if (VAR_0->cl->rx_callback)
  VAR_0->cl->rx_callback(VAR_0->cl, VAR_1);
}

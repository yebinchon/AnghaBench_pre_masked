
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_12__ {int chan_id; } ;
struct TYPE_13__ {TYPE_5__ chan; } ;
struct st_fdma_chan {TYPE_6__ vchan; TYPE_4__* fdev; TYPE_7__* fdesc; } ;
struct TYPE_14__ {TYPE_2__* node; } ;
struct TYPE_11__ {int dev; TYPE_3__* slim_rproc; } ;
struct TYPE_10__ {scalar_t__ peri; } ;
struct TYPE_9__ {unsigned long pdesc; TYPE_1__* desc; } ;
struct TYPE_8__ {unsigned long nbytes; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct st_fdma_chan*,unsigned long,int ) ;
 int FUNC_3 (struct st_fdma_chan*,unsigned long,int ) ;
 TYPE_7__* FUNC_4 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct st_fdma_chan *VAR_4)
{
 struct virt_dma_desc *VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_5(&VAR_4->vchan);
 if (!VAR_5)
  return;

 VAR_4->fdesc = FUNC_4(VAR_5);
 VAR_6 = VAR_4->fdesc->node[0].desc->nbytes;
 VAR_8 = FUNC_0(VAR_4->vchan.chan.chan_id);
 VAR_7 = VAR_4->fdesc->node[0].pdesc | VAR_1;


 FUNC_3(VAR_4, VAR_6, VAR_3);
 FUNC_2(VAR_4, VAR_7, VAR_0);
 FUNC_6(VAR_8,
  VAR_4->fdev->slim_rproc->peri + VAR_2);

 FUNC_1(VAR_4->fdev->dev, "start chan:%d\n", VAR_4->vchan.chan.chan_id);
}

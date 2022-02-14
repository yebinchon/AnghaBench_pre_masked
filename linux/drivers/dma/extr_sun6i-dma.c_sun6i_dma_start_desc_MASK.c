
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int tx; int node; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct sun6i_vchan {int irq_type; scalar_t__ cyclic; struct sun6i_pchan* phy; TYPE_2__ vc; } ;
struct sun6i_pchan {int idx; scalar_t__ base; TYPE_3__* desc; int * done; } ;
struct sun6i_dma_dev {scalar_t__ base; } ;
struct TYPE_6__ {int p_lli; int v_lli; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sun6i_dma_dev*,struct sun6i_pchan*) ;
 int FUNC_4 (struct sun6i_dma_dev*) ;
 int FUNC_5 (struct sun6i_vchan*,int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 struct sun6i_dma_dev* FUNC_7 (int ) ;
 struct virt_dma_desc* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sun6i_vchan *VAR_9)
{
 struct sun6i_dma_dev *VAR_10 = FUNC_7(VAR_9->vc.chan.device);
 struct virt_dma_desc *VAR_11 = FUNC_8(&VAR_9->vc);
 struct sun6i_pchan *VAR_12 = VAR_9->phy;
 u32 VAR_13, VAR_14, VAR_15;

 if (!VAR_12)
  return -VAR_8;

 if (!VAR_11) {
  VAR_12->desc = ((void*)0);
  VAR_12->done = ((void*)0);
  return -VAR_8;
 }

 FUNC_1(&VAR_11->node);

 VAR_12->desc = FUNC_6(&VAR_11->tx);
 VAR_12->done = ((void*)0);

 FUNC_5(VAR_9, VAR_12->desc->v_lli);

 VAR_14 = VAR_12->idx / VAR_3;
 VAR_15 = VAR_12->idx % VAR_3;

 VAR_9->irq_type = VAR_9->cyclic ? VAR_6 : VAR_7;

 VAR_13 = FUNC_2(VAR_10->base + FUNC_0(VAR_14));
 VAR_13 &= ~((VAR_5 | VAR_6 | VAR_7) <<
   (VAR_15 * VAR_4));
 VAR_13 |= VAR_9->irq_type << (VAR_15 * VAR_4);
 FUNC_9(VAR_13, VAR_10->base + FUNC_0(VAR_14));

 FUNC_9(VAR_12->desc->p_lli, VAR_12->base + VAR_2);
 FUNC_9(VAR_1, VAR_12->base + VAR_0);

 FUNC_4(VAR_10);
 FUNC_3(VAR_10, VAR_12);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct mdc_chan {TYPE_2__ vc; TYPE_1__* desc; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {int vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mdc_chan*,int ,int ) ;
 int FUNC_2 (struct mdc_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mdc_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_3)
{
 struct mdc_chan *VAR_4 = FUNC_5(VAR_3);
 unsigned long VAR_5;
 FUNC_0(VAR_2);

 FUNC_3(&VAR_4->vc.lock, VAR_5);

 FUNC_1(VAR_4, VAR_1,
   VAR_0);

 if (VAR_4->desc) {
  FUNC_8(&VAR_4->desc->vd);
  VAR_4->desc = ((void*)0);
 }
 FUNC_7(&VAR_4->vc, &VAR_2);

 FUNC_2(VAR_4);

 FUNC_4(&VAR_4->vc.lock, VAR_5);

 FUNC_6(&VAR_4->vc, &VAR_2);

 return 0;
}

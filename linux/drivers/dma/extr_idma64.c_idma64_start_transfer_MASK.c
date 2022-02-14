
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ chan; } ;
struct idma64_chan {int * desc; TYPE_2__ vchan; } ;
struct idma64 {int dummy; } ;


 int FUNC_0 (struct idma64*,struct idma64_chan*) ;
 int FUNC_1 (struct idma64*,struct idma64_chan*) ;
 int FUNC_2 (int *) ;
 struct idma64* FUNC_3 (int ) ;
 int * FUNC_4 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct idma64_chan *VAR_0)
{
 struct idma64 *VAR_1 = FUNC_3(VAR_0->vchan.chan.device);
 struct virt_dma_desc *VAR_2;


 VAR_2 = FUNC_5(&VAR_0->vchan);
 if (!VAR_2) {
  VAR_0->desc = ((void*)0);
  return;
 }

 FUNC_2(&VAR_2->node);
 VAR_0->desc = FUNC_4(VAR_2);


 FUNC_0(VAR_1, VAR_0);


 FUNC_1(VAR_1, VAR_0);
}

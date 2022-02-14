
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct axi_dma_chan {TYPE_1__ vc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (struct dma_chan*) ;
 struct axi_dma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_1)
{
 struct axi_dma_chan *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_6(&VAR_2->vc.lock, VAR_3);

 FUNC_1(VAR_2);

 FUNC_9(&VAR_2->vc, &VAR_0);





 FUNC_8(&VAR_2->vc, &VAR_0);

 FUNC_7(&VAR_2->vc.lock, VAR_3);

 FUNC_5(FUNC_3(VAR_1), "terminated: %s\n", FUNC_2(VAR_2));

 return 0;
}

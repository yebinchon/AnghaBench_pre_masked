
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilly_endpoint {int idtlen; int dma_using_dac; int dev; int ep_wait; scalar_t__ registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 long FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct xilly_endpoint *VAR_3)
{
 long VAR_4;

 VAR_3->idtlen = -1;

 FUNC_1((u32) (VAR_3->dma_using_dac & 0x0001),
    VAR_3->registers + VAR_2);

 VAR_4 = FUNC_2(VAR_3->ep_wait,
          (VAR_3->idtlen >= 0),
          VAR_1);
 if (VAR_4 <= 0) {
  FUNC_0(VAR_3->dev,
   "Failed to quiesce the device on exit.\n");
  return -VAR_0;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int flags; int dev_id; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,struct dma_channel*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_3)
{
 if (FUNC_2(!(VAR_3->flags & VAR_0)))
  return 0;

 return FUNC_1(FUNC_0(VAR_3->chan), VAR_2, VAR_1,
      VAR_3->dev_id, VAR_3);
}

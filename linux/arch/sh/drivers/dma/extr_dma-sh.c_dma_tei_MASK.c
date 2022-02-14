
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_channel {int wait_queue; int chan; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct dma_channel *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(FUNC_2(VAR_8->chan) + VAR_0);

 if (!(VAR_9 & VAR_3))
  return VAR_5;

 VAR_9 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_9, (FUNC_2(VAR_8->chan) + VAR_0));

 FUNC_3(&VAR_8->wait_queue);

 return VAR_4;
}

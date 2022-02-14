
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_channel {int chan; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dma_channel*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_3)
{
 if (!(FUNC_0(FUNC_2(VAR_3->chan) + VAR_0) & VAR_1))
  return 0;

 return FUNC_0(FUNC_2(VAR_3->chan) + VAR_2)
   << FUNC_1(VAR_3);
}

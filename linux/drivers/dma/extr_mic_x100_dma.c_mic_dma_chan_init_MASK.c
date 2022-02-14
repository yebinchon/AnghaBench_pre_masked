
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {int dummy; } ;


 int FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 (struct mic_dma_chan*) ;
 int FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 (struct mic_dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct mic_dma_chan *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  goto ring_error;
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto status_error;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto chan_error;
 return VAR_1;
chan_error:
 FUNC_4(VAR_0);
status_error:
 FUNC_3(VAR_0);
ring_error:
 return VAR_1;
}

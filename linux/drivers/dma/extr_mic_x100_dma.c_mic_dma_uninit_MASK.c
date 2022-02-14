
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_device {int start_ch; struct mic_dma_chan* mic_ch; } ;
struct mic_dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mic_dma_chan*) ;

__attribute__((used)) static void FUNC_1(struct mic_dma_device *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->start_ch;
 struct mic_dma_chan *VAR_4;

 for (VAR_2 = VAR_3; VAR_2 < VAR_3 + VAR_0; VAR_2++) {
  VAR_4 = &VAR_1->mic_ch[VAR_2];
  FUNC_0(VAR_4);
 }
}

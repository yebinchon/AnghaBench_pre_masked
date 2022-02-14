
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_device {int start_ch; struct mic_dma_chan* mic_ch; } ;
struct mic_dma_chan {int ch_num; int owner; int issue_lock; int prep_lock; int cleanup_lock; } ;
typedef enum mic_dma_chan_owner { ____Placeholder_mic_dma_chan_owner } mic_dma_chan_owner ;


 int VAR_0 ;
 int FUNC_0 (struct mic_dma_chan*) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mic_dma_device *VAR_1,
   enum mic_dma_chan_owner VAR_2)
{
 int VAR_3, VAR_4 = VAR_1->start_ch;
 struct mic_dma_chan *VAR_5;
 int VAR_6;

 for (VAR_3 = VAR_4; VAR_3 < VAR_4 + VAR_0; VAR_3++) {
  VAR_5 = &VAR_1->mic_ch[VAR_3];
  VAR_5->ch_num = VAR_3;
  VAR_5->owner = VAR_2;
  FUNC_2(&VAR_5->cleanup_lock);
  FUNC_2(&VAR_5->prep_lock);
  FUNC_2(&VAR_5->issue_lock);
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6)
   goto error;
 }
 return 0;
error:
 for (VAR_3 = VAR_3 - 1; VAR_3 >= VAR_4; VAR_3--)
  FUNC_0(VAR_5);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int addr; int area; } ;
struct snd_pcm_substream {TYPE_3__ dma_buffer; struct snd_dw_hdmi* private_data; struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {int fifo_size; } ;
struct snd_pcm_runtime {int channels; int format; int dma_area; TYPE_1__ hw; int rate; } ;
struct TYPE_6__ {int hdmi; scalar_t__ base; } ;
struct snd_dw_hdmi {int revision; int channels; int buf_size; int buf_period; int buf_addr; int buf_dst; int buf_src; scalar_t__ iec_offset; int reformat; TYPE_2__ data; } ;
struct TYPE_8__ {int conf1; int ca; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 TYPE_4__* VAR_8 ;
 int FUNC_0 (struct snd_dw_hdmi*,struct snd_pcm_runtime*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_11)
{
 struct snd_pcm_runtime *VAR_12 = VAR_11->runtime;
 struct snd_dw_hdmi *VAR_13 = VAR_11->private_data;
 u8 VAR_14, VAR_15, VAR_16, VAR_17;


 switch (VAR_13->revision) {
 case 0x0a:
  VAR_15 = VAR_2 |
   VAR_4;
  if (VAR_12->channels == 2)
   VAR_14 = 126;
  else
   VAR_14 = 124;
  break;
 case 0x1a:
  VAR_15 = VAR_2 |
   VAR_5;
  VAR_14 = 128;
  break;
 default:

  return -VAR_0;
 }

 FUNC_3(VAR_13->data.hdmi, VAR_12->rate);


 VAR_12->hw.fifo_size = VAR_14 * 32;

 VAR_15 |= VAR_3;
 VAR_16 = VAR_8[VAR_12->channels - 2].conf1;
 VAR_17 = VAR_8[VAR_12->channels - 2].ca;

 FUNC_6(VAR_14, VAR_13->data.base + VAR_7);
 FUNC_6(VAR_15, VAR_13->data.base + VAR_1);
 FUNC_6(VAR_16, VAR_13->data.base + VAR_6);

 FUNC_2(VAR_13->data.hdmi, VAR_12->channels);
 FUNC_1(VAR_13->data.hdmi, VAR_17);

 switch (VAR_12->format) {
 case 129:
  VAR_13->reformat = VAR_9;
  break;
 case 128:
  FUNC_0(VAR_13, VAR_12);
  VAR_13->reformat = VAR_10;
  break;
 }
 VAR_13->iec_offset = 0;
 VAR_13->channels = VAR_12->channels;
 VAR_13->buf_src = VAR_12->dma_area;
 VAR_13->buf_dst = VAR_11->dma_buffer.area;
 VAR_13->buf_addr = VAR_11->dma_buffer.addr;
 VAR_13->buf_period = FUNC_5(VAR_11);
 VAR_13->buf_size = FUNC_4(VAR_11);

 return 0;
}

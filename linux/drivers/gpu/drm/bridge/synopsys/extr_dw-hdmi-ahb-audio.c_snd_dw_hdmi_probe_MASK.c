
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {char* name; struct snd_dw_hdmi* private_data; } ;
struct dw_hdmi_audio_data {int irq; scalar_t__ base; } ;
struct snd_dw_hdmi {unsigned int revision; struct snd_pcm* pcm; int lock; struct dw_hdmi_audio_data data; struct snd_card* card; } ;
struct snd_card {char* driver; char* shortname; struct snd_dw_hdmi* private_data; int longname; } ;
struct TYPE_2__ {struct device* parent; struct dw_hdmi_audio_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct platform_device*,struct snd_dw_hdmi*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct device*,int ,int ,int ,int,struct snd_card**) ;
 int FUNC_5 (struct snd_card*) ;
 int VAR_10 ;
 int FUNC_6 (struct snd_pcm*,int ,struct device*,int,int) ;
 int FUNC_7 (struct snd_card*,char*,int ,int,int ,struct snd_pcm**) ;
 int FUNC_8 (struct snd_pcm*,int ,int *) ;
 int FUNC_9 (int ,int,char*,char*,unsigned int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 const struct dw_hdmi_audio_data *VAR_12 = VAR_11->dev.platform_data;
 struct device *VAR_13 = VAR_11->dev.parent;
 struct snd_dw_hdmi *VAR_14;
 struct snd_card *VAR_15;
 struct snd_pcm *VAR_16;
 unsigned VAR_17;
 int VAR_18;

 FUNC_12(VAR_3,
         VAR_12->base + VAR_2);
 VAR_17 = FUNC_2(VAR_12->base + VAR_4);
 if (VAR_17 != 0x0a && VAR_17 != 0x1a) {
  FUNC_0(VAR_13, "dw-hdmi-audio: unknown revision 0x%02x\n",
   VAR_17);
  return -VAR_1;
 }

 VAR_18 = FUNC_4(VAR_13, VAR_5, VAR_6,
         VAR_9, sizeof(struct snd_dw_hdmi), &VAR_15);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_11(VAR_15->driver, VAR_0, sizeof(VAR_15->driver));
 FUNC_11(VAR_15->shortname, "DW-HDMI", sizeof(VAR_15->shortname));
 FUNC_9(VAR_15->longname, sizeof(VAR_15->longname),
   "%s rev 0x%02x, irq %d", VAR_15->shortname, VAR_17,
   VAR_12->irq);

 VAR_14 = VAR_15->private_data;
 VAR_14->card = VAR_15;
 VAR_14->data = *VAR_12;
 VAR_14->revision = VAR_17;

 FUNC_10(&VAR_14->lock);

 VAR_18 = FUNC_7(VAR_15, "DW HDMI", 0, 1, 0, &VAR_16);
 if (VAR_18 < 0)
  goto err;

 VAR_14->pcm = VAR_16;
 VAR_16->private_data = VAR_14;
 FUNC_11(VAR_16->name, VAR_0, sizeof(VAR_16->name));
 FUNC_8(VAR_16, VAR_8, &VAR_10);





 FUNC_6(VAR_16, VAR_7,
   VAR_13, 128 * 1024, 1024 * 1024);

 VAR_18 = FUNC_5(VAR_15);
 if (VAR_18 < 0)
  goto err;

 FUNC_1(VAR_11, VAR_14);

 return 0;

err:
 FUNC_3(VAR_15);
 return VAR_18;
}

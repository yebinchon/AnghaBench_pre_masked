
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {void* name; } ;
struct TYPE_14__ {void* name; int dai_name; } ;
struct TYPE_13__ {void* dai_name; } ;
struct TYPE_11__ {int maxburst; int addr_width; int addr; } ;
struct snd_soc_card {int num_links; char* name; struct device* dev; struct snd_soc_dai_link* dai_link; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; TYPE_6__* platforms; TYPE_5__* codecs; TYPE_4__* cpus; } ;
struct TYPE_12__ {TYPE_6__ platform; TYPE_5__ codec; TYPE_4__ cpu; TYPE_2__ dma_data; struct snd_soc_card card; struct snd_soc_dai_link link; } ;
struct vc4_hdmi {TYPE_3__ audio; TYPE_1__* pdev; } ;
struct device {int of_node; } ;
typedef int __be32 ;
struct TYPE_16__ {int name; } ;
struct TYPE_10__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct device*,char*,int) ;
 void* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int *,int ) ;
 int FUNC_5 (struct device*,struct snd_soc_card*) ;
 int FUNC_6 (struct device*,int *,TYPE_7__*,int) ;
 int FUNC_7 (int ,char*,int *) ;
 int * FUNC_8 (int ,int,int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct snd_soc_card*,struct vc4_hdmi*) ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__ VAR_6 ;

__attribute__((used)) static int FUNC_10(struct vc4_hdmi *VAR_7)
{
 struct snd_soc_dai_link *VAR_8 = &VAR_7->audio.link;
 struct snd_soc_card *VAR_9 = &VAR_7->audio.card;
 struct device *VAR_10 = &VAR_7->pdev->dev;
 const __be32 *VAR_11;
 int VAR_12;

 if (!FUNC_7(VAR_10->of_node, "dmas", ((void*)0))) {
  FUNC_3(VAR_10,
    "'dmas' DT property is missing, no HDMI audio\n");
  return 0;
 }
 VAR_11 = FUNC_8(VAR_10->of_node, 1, ((void*)0), ((void*)0));
 VAR_7->audio.dma_data.addr = FUNC_0(VAR_11) + VAR_1;
 VAR_7->audio.dma_data.addr_width = VAR_0;
 VAR_7->audio.dma_data.maxburst = 2;

 VAR_12 = FUNC_4(VAR_10, &VAR_2, 0);
 if (VAR_12) {
  FUNC_1(VAR_10, "Could not register PCM component: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_6(VAR_10, &VAR_5,
           &VAR_6, 1);
 if (VAR_12) {
  FUNC_1(VAR_10, "Could not register CPU DAI: %d\n", VAR_12);
  return VAR_12;
 }


 VAR_12 = FUNC_6(VAR_10, &VAR_4,
         &VAR_3, 1);
 if (VAR_12) {
  FUNC_1(VAR_10, "Could not register component: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_8->cpus = &VAR_7->audio.cpu;
 VAR_8->codecs = &VAR_7->audio.codec;
 VAR_8->platforms = &VAR_7->audio.platform;

 VAR_8->num_cpus = 1;
 VAR_8->num_codecs = 1;
 VAR_8->num_platforms = 1;

 VAR_8->name = "MAI";
 VAR_8->stream_name = "MAI PCM";
 VAR_8->codecs->dai_name = VAR_3.name;
 VAR_8->cpus->dai_name = FUNC_2(VAR_10);
 VAR_8->codecs->name = FUNC_2(VAR_10);
 VAR_8->platforms->name = FUNC_2(VAR_10);

 VAR_9->dai_link = VAR_8;
 VAR_9->num_links = 1;
 VAR_9->name = "vc4-hdmi";
 VAR_9->dev = VAR_10;
 FUNC_9(VAR_9, VAR_7);
 VAR_12 = FUNC_5(VAR_10, VAR_9);
 if (VAR_12)
  FUNC_1(VAR_10, "Could not register sound card: %d\n", VAR_12);

 return VAR_12;

}

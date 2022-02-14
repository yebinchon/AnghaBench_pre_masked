
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tda998x_priv {int* audio_port_enable; TYPE_1__* hdmi; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;




 int FUNC_0 (int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,char*,...) ;
 int* FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct tda998x_priv *VAR_3,
       struct device_node *VAR_4)
{
 const u32 *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4, "audio-ports", &VAR_6);
 if (!VAR_5)
  return 0;

 VAR_6 /= sizeof(u32);
 if (VAR_6 > 2 * FUNC_0(VAR_3->audio_port_enable) || VAR_6 % 2 != 0) {
  FUNC_2(&VAR_3->hdmi->dev,
   "Bad number of elements in audio-ports dt-property\n");
  return -VAR_2;
 }

 VAR_6 /= 2;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  unsigned int VAR_8;
  u8 VAR_9 = FUNC_1(&VAR_5[2*VAR_7]);
  u8 VAR_10 = FUNC_1(&VAR_5[2*VAR_7+1]);

  switch (VAR_9) {
  case 129:
   VAR_8 = VAR_0;
   break;
  case 128:
   VAR_8 = VAR_1;
   break;
  default:
   FUNC_2(&VAR_3->hdmi->dev,
    "Bad audio format %u\n", VAR_9);
   return -VAR_2;
  }

  if (!VAR_10) {
   FUNC_2(&VAR_3->hdmi->dev, "invalid zero port config\n");
   continue;
  }

  if (VAR_3->audio_port_enable[VAR_8]) {
   FUNC_2(&VAR_3->hdmi->dev,
    "%s format already configured\n",
    VAR_8 == VAR_1 ? "SPDIF" : "I2S");
   return -VAR_2;
  }

  VAR_3->audio_port_enable[VAR_8] = VAR_10;
 }
 return 0;
}

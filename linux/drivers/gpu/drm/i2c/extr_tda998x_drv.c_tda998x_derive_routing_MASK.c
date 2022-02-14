
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda998x_priv {scalar_t__* audio_port_enable; TYPE_1__* hdmi; } ;
struct tda998x_audio_settings {scalar_t__ ena_ap; int * route; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tda998x_priv *VAR_2,
      struct tda998x_audio_settings *VAR_3,
      unsigned int VAR_4)
{
 VAR_3->route = &VAR_1[VAR_4];
 VAR_3->ena_ap = VAR_2->audio_port_enable[VAR_4];
 if (VAR_3->ena_ap == 0) {
  FUNC_0(&VAR_2->hdmi->dev, "no audio configuration found\n");
  return -VAR_0;
 }

 return 0;
}

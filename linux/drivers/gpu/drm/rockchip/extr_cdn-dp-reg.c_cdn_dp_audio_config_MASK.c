
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int dev; int spdif_rst; } ;
struct audio_info {scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct cdn_dp_device*,struct audio_info*) ;
 int FUNC_2 (struct cdn_dp_device*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cdn_dp_device *VAR_7, struct audio_info *VAR_8)
{
 int VAR_9;


 if (VAR_8->format == VAR_1) {
  FUNC_4(VAR_7->spdif_rst);
  FUNC_5(VAR_7->spdif_rst);
 }

 VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_6);
 if (VAR_9)
  goto err_audio_config;

 VAR_9 = FUNC_3(VAR_7, VAR_4, 0);
 if (VAR_9)
  goto err_audio_config;

 if (VAR_8->format == VAR_0)
  FUNC_1(VAR_7, VAR_8);
 else if (VAR_8->format == VAR_1)
  FUNC_2(VAR_7);

 VAR_9 = FUNC_3(VAR_7, VAR_2, VAR_3);

err_audio_config:
 if (VAR_9)
  FUNC_0(VAR_7->dev, "audio config failed: %d\n", VAR_9);
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun8i_vi_layer {int channel; scalar_t__ overlay; struct sun8i_mixer* mixer; int plane; } ;
struct sun8i_mixer {TYPE_1__* cfg; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {unsigned int ui_num; unsigned int vi_num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sun8i_vi_layer* FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 struct sun8i_vi_layer* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int *,int,int,int ,int ) ;
 int FUNC_6 (int *,int,int ,unsigned int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct drm_device*,int *,int ,int *,int ,int ,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

struct sun8i_vi_layer *FUNC_9(struct drm_device *VAR_10,
            struct sun8i_mixer *VAR_11,
            int VAR_12)
{
 u32 VAR_13, VAR_14;
 struct sun8i_vi_layer *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_15 = FUNC_4(VAR_10->dev, sizeof(*VAR_15), VAR_6);
 if (!VAR_15)
  return FUNC_2(-VAR_5);


 VAR_17 = FUNC_8(VAR_10, &VAR_15->plane, 0,
           &VAR_8,
           VAR_7,
           FUNC_0(VAR_7),
           ((void*)0), VAR_4, ((void*)0));
 if (VAR_17) {
  FUNC_3(VAR_10->dev, "Couldn't initialize layer\n");
  return FUNC_2(VAR_17);
 }

 VAR_16 = VAR_11->cfg->ui_num + VAR_11->cfg->vi_num;

 VAR_17 = FUNC_6(&VAR_15->plane, VAR_12,
          0, VAR_16 - 1);
 if (VAR_17) {
  FUNC_3(VAR_10->dev, "Couldn't add zpos property\n");
  return FUNC_2(VAR_17);
 }

 VAR_13 = FUNC_1(VAR_0) |
         FUNC_1(VAR_1);

 VAR_14 = FUNC_1(VAR_3) |
      FUNC_1(VAR_2);

 VAR_17 = FUNC_5(&VAR_15->plane,
      VAR_13,
      VAR_14,
      VAR_1,
      VAR_3);
 if (VAR_17) {
  FUNC_3(VAR_10->dev, "Couldn't add encoding and range properties!\n");
  return FUNC_2(VAR_17);
 }

 FUNC_7(&VAR_15->plane, &VAR_9);
 VAR_15->mixer = VAR_11;
 VAR_15->channel = VAR_12;
 VAR_15->overlay = 0;

 return VAR_15;
}

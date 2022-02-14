
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_panel {int dummy; } ;
struct drm_device {TYPE_4__* dev; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int possible_crtcs; } ;
struct atmel_hlcdc_rgb_output {scalar_t__ bus_fmt; TYPE_1__ encoder; } ;
struct TYPE_7__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct drm_bridge*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 struct atmel_hlcdc_rgb_output* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,struct drm_bridge*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_8 (int ,int ,int,struct drm_panel**,struct drm_bridge**) ;
 struct drm_bridge* FUNC_9 (struct drm_panel*,int ) ;
 int FUNC_10 (struct drm_bridge*) ;
 struct device_node* FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct device_node*) ;

__attribute__((used)) static int FUNC_13(struct drm_device *VAR_7, int VAR_8)
{
 struct atmel_hlcdc_rgb_output *VAR_9;
 struct device_node *VAR_10;
 struct drm_panel *VAR_11;
 struct drm_bridge *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_11(VAR_7->dev->of_node, 0, VAR_8);
 if (!VAR_10)
  return -VAR_3;

 VAR_13 = FUNC_8(VAR_7->dev->of_node, 0, VAR_8,
       &VAR_11, &VAR_12);
 if (VAR_13) {
  FUNC_12(VAR_10);
  return VAR_13;
 }

 VAR_9 = FUNC_4(VAR_7->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  FUNC_12(VAR_10);
  return -VAR_4;
 }

 VAR_9->bus_fmt = FUNC_2(VAR_10);
 FUNC_12(VAR_10);
 if (VAR_9->bus_fmt < 0) {
  FUNC_3(VAR_7->dev, "endpoint %d: invalid bus width\n", VAR_8);
  return -VAR_2;
 }

 VAR_13 = FUNC_7(VAR_7, &VAR_9->encoder,
          &VAR_6,
          VAR_1, ((void*)0));
 if (VAR_13)
  return VAR_13;

 VAR_9->encoder.possible_crtcs = 0x1;

 if (VAR_11) {
  VAR_12 = FUNC_9(VAR_11, VAR_0);
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);
 }

 if (VAR_12) {
  VAR_13 = FUNC_5(&VAR_9->encoder, VAR_12, ((void*)0));
  if (!VAR_13)
   return 0;

  if (VAR_11)
   FUNC_10(VAR_12);
 }

 FUNC_6(&VAR_9->encoder);

 return VAR_13;
}

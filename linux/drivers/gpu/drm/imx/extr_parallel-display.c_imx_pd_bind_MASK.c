
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct imx_parallel_display {struct device* dev; int bridge; int panel; int bus_format; int edid_len; int edid; } ;
struct drm_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,struct imx_parallel_display*) ;
 struct imx_parallel_display* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,int,int ,int *,int *) ;
 int FUNC_3 (struct drm_device*,struct imx_parallel_display*) ;
 int FUNC_4 (int const*,int ,int ) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 int FUNC_6 (struct device_node*,char*,char const**) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_7, struct device *VAR_8, void *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9;
 struct device_node *VAR_11 = VAR_7->of_node;
 const u8 *VAR_12;
 struct imx_parallel_display *VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;
 const char *VAR_16;

 VAR_13 = FUNC_1(VAR_7, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_5(VAR_11, "edid", &VAR_13->edid_len);
 if (VAR_12)
  VAR_13->edid = FUNC_4(VAR_12, VAR_13->edid_len, VAR_2);

 VAR_14 = FUNC_6(VAR_11, "interface-pix-fmt", &VAR_16);
 if (!VAR_14) {
  if (!FUNC_7(VAR_16, "rgb24"))
   VAR_15 = VAR_6;
  else if (!FUNC_7(VAR_16, "rgb565"))
   VAR_15 = VAR_3;
  else if (!FUNC_7(VAR_16, "bgr666"))
   VAR_15 = VAR_4;
  else if (!FUNC_7(VAR_16, "lvds666"))
   VAR_15 = VAR_5;
 }
 VAR_13->bus_format = VAR_15;


 VAR_14 = FUNC_2(VAR_11, 1, 0, &VAR_13->panel, &VAR_13->bridge);
 if (VAR_14 && VAR_14 != -VAR_0)
  return VAR_14;

 VAR_13->dev = VAR_7;

 VAR_14 = FUNC_3(VAR_10, VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_0(VAR_7, VAR_13);

 return 0;
}

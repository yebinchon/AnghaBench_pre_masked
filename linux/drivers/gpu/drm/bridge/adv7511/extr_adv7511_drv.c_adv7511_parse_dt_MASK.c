
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct adv7511_link_config {int input_color_depth; scalar_t__ input_colorspace; scalar_t__ input_clock; int input_style; int clock_delay; void* hsync_polarity; void* vsync_polarity; int sync_pulse; int embedded_sync; void* input_justification; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_12,
       struct adv7511_link_config *VAR_13)
{
 const char *VAR_14;
 int VAR_15;

 FUNC_2(VAR_12, "adi,input-depth", &VAR_13->input_color_depth);
 if (VAR_13->input_color_depth != 8 && VAR_13->input_color_depth != 10 &&
     VAR_13->input_color_depth != 12)
  return -VAR_8;

 VAR_15 = FUNC_1(VAR_12, "adi,input-colorspace", &VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 if (!FUNC_3(VAR_14, "rgb"))
  VAR_13->input_colorspace = VAR_9;
 else if (!FUNC_3(VAR_14, "yuv422"))
  VAR_13->input_colorspace = VAR_10;
 else if (!FUNC_3(VAR_14, "yuv444"))
  VAR_13->input_colorspace = VAR_11;
 else
  return -VAR_8;

 VAR_15 = FUNC_1(VAR_12, "adi,input-clock", &VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 if (!FUNC_3(VAR_14, "1x"))
  VAR_13->input_clock = VAR_0;
 else if (!FUNC_3(VAR_14, "2x"))
  VAR_13->input_clock = VAR_1;
 else if (!FUNC_3(VAR_14, "ddr"))
  VAR_13->input_clock = VAR_2;
 else
  return -VAR_8;

 if (VAR_13->input_colorspace == VAR_10 ||
     VAR_13->input_clock != VAR_0) {
  VAR_15 = FUNC_2(VAR_12, "adi,input-style",
        &VAR_13->input_style);
  if (VAR_15)
   return VAR_15;

  if (VAR_13->input_style < 1 || VAR_13->input_style > 3)
   return -VAR_8;

  VAR_15 = FUNC_1(VAR_12, "adi,input-justification",
           &VAR_14);
  if (VAR_15 < 0)
   return VAR_15;

  if (!FUNC_3(VAR_14, "left"))
   VAR_13->input_justification =
    VAR_4;
  else if (!FUNC_3(VAR_14, "evenly"))
   VAR_13->input_justification =
    VAR_3;
  else if (!FUNC_3(VAR_14, "right"))
   VAR_13->input_justification =
    VAR_5;
  else
   return -VAR_8;

 } else {
  VAR_13->input_style = 1;
  VAR_13->input_justification = VAR_4;
 }

 FUNC_2(VAR_12, "adi,clock-delay", &VAR_13->clock_delay);
 if (VAR_13->clock_delay < -1200 || VAR_13->clock_delay > 1600)
  return -VAR_8;

 VAR_13->embedded_sync = FUNC_0(VAR_12, "adi,embedded-sync");


 VAR_13->sync_pulse = VAR_6;
 VAR_13->vsync_polarity = VAR_7;
 VAR_13->hsync_polarity = VAR_7;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {unsigned int right; unsigned int left; unsigned int top; unsigned int bottom; } ;
struct drm_cmdline_mode {unsigned int rotation_reflection; TYPE_1__ tv_margins; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (char const*,char**,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_7, size_t VAR_8,
       const struct drm_connector *VAR_9,
       struct drm_cmdline_mode *VAR_10)
{
 unsigned int VAR_11 = 0;
 char *VAR_12 = VAR_7;

 while ((VAR_12 = FUNC_1(VAR_12, ','))) {
  char *VAR_13, *VAR_14;

  VAR_14 = VAR_12 + 1;
  VAR_13 = FUNC_1(VAR_14, '=');
  if (!VAR_13) {
   VAR_13 = FUNC_1(VAR_14, ',');

   if (!VAR_13)
    VAR_13 = VAR_7 + VAR_8;
  }

  if (!FUNC_2(VAR_14, "rotate", VAR_13 - VAR_14)) {
   const char *VAR_15 = VAR_13 + 1;
   unsigned int VAR_16;

   VAR_16 = FUNC_0(VAR_15, &VAR_12, 10);


   if (VAR_12 == VAR_15)
    return -VAR_6;

   switch (VAR_16) {
   case 0:
    VAR_11 |= VAR_2;
    break;

   case 90:
    VAR_11 |= VAR_5;
    break;

   case 180:
    VAR_11 |= VAR_3;
    break;

   case 270:
    VAR_11 |= VAR_4;
    break;

   default:
    return -VAR_6;
   }
  } else if (!FUNC_2(VAR_14, "reflect_x", VAR_13 - VAR_14)) {
   VAR_11 |= VAR_0;
   VAR_12 = VAR_13;
  } else if (!FUNC_2(VAR_14, "reflect_y", VAR_13 - VAR_14)) {
   VAR_11 |= VAR_1;
   VAR_12 = VAR_13;
  } else if (!FUNC_2(VAR_14, "margin_right", VAR_13 - VAR_14)) {
   const char *VAR_17 = VAR_13 + 1;
   unsigned int VAR_18;

   VAR_18 = FUNC_0(VAR_17, &VAR_12, 10);


   if (VAR_12 == VAR_17)
    return -VAR_6;

   VAR_10->tv_margins.right = VAR_18;
  } else if (!FUNC_2(VAR_14, "margin_left", VAR_13 - VAR_14)) {
   const char *VAR_19 = VAR_13 + 1;
   unsigned int VAR_20;

   VAR_20 = FUNC_0(VAR_19, &VAR_12, 10);


   if (VAR_12 == VAR_19)
    return -VAR_6;

   VAR_10->tv_margins.left = VAR_20;
  } else if (!FUNC_2(VAR_14, "margin_top", VAR_13 - VAR_14)) {
   const char *VAR_21 = VAR_13 + 1;
   unsigned int VAR_22;

   VAR_22 = FUNC_0(VAR_21, &VAR_12, 10);


   if (VAR_12 == VAR_21)
    return -VAR_6;

   VAR_10->tv_margins.top = VAR_22;
  } else if (!FUNC_2(VAR_14, "margin_bottom", VAR_13 - VAR_14)) {
   const char *VAR_23 = VAR_13 + 1;
   unsigned int VAR_24;

   VAR_24 = FUNC_0(VAR_23, &VAR_12, 10);


   if (VAR_12 == VAR_23)
    return -VAR_6;

   VAR_10->tv_margins.bottom = VAR_24;
  } else {
   return -VAR_6;
  }
 }

 VAR_10->rotation_reflection = VAR_11;

 return 0;
}

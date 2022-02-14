
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipuv3_channel {int dummy; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_5__ {int length; int offset; } ;
struct ipu_rgb {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ipuv3_channel*,int ,int) ;

int FUNC_1(struct ipuv3_channel *VAR_12,
        const struct ipu_rgb *VAR_13)
{
 int VAR_14 = 0, VAR_15 = 0, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_16 = VAR_13->bits_per_pixel - VAR_13->red.length - VAR_13->red.offset;
 VAR_17 = VAR_13->bits_per_pixel - VAR_13->green.length - VAR_13->green.offset;
 VAR_18 = VAR_13->bits_per_pixel - VAR_13->blue.length - VAR_13->blue.offset;
 VAR_19 = VAR_13->bits_per_pixel - VAR_13->transp.length - VAR_13->transp.offset;

 FUNC_0(VAR_12, VAR_8, VAR_13->red.length - 1);
 FUNC_0(VAR_12, VAR_3, VAR_16);
 FUNC_0(VAR_12, VAR_9, VAR_13->green.length - 1);
 FUNC_0(VAR_12, VAR_4, VAR_17);
 FUNC_0(VAR_12, VAR_10, VAR_13->blue.length - 1);
 FUNC_0(VAR_12, VAR_5, VAR_18);

 if (VAR_13->transp.length) {
  FUNC_0(VAR_12, VAR_11,
    VAR_13->transp.length - 1);
  FUNC_0(VAR_12, VAR_6, VAR_19);
 } else {
  FUNC_0(VAR_12, VAR_11, 7);
  FUNC_0(VAR_12, VAR_6,
    VAR_13->bits_per_pixel);
 }

 switch (VAR_13->bits_per_pixel) {
 case 32:
  VAR_14 = 0;
  VAR_15 = 15;
  break;
 case 24:
  VAR_14 = 1;
  VAR_15 = 19;
  break;
 case 16:
  VAR_14 = 3;
  VAR_15 = 31;
  break;
 case 8:
  VAR_14 = 5;
  VAR_15 = 63;
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(VAR_12, VAR_1, VAR_14);
 FUNC_0(VAR_12, VAR_2, VAR_15);
 FUNC_0(VAR_12, VAR_7, 7);

 return 0;
}

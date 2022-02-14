
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct picolcd_fb_data {int bpp; int* bitmap; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct picolcd_fb_data* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_7)
{
 struct picolcd_fb_data *VAR_8 = VAR_7->par;
 u8 *VAR_9, *VAR_10;
 if (VAR_7->var.bits_per_pixel == VAR_8->bpp)
  return 0;

 if (VAR_7->var.bits_per_pixel != 1 && VAR_7->var.bits_per_pixel != 8)
  return -VAR_0;

 VAR_10 = VAR_8->bitmap;
 VAR_9 = FUNC_1(VAR_5, VAR_7->var.bits_per_pixel,
          VAR_4);
 if (!VAR_9)
  return -VAR_1;


 if (VAR_7->var.bits_per_pixel == 1) {
  int VAR_11, VAR_12;
  for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
   u8 VAR_13 = 0;
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
    VAR_13 <<= 1;
    VAR_13 |= VAR_10[VAR_11*8+VAR_12] ? 0x01 : 0x00;
   }
   VAR_9[VAR_11] = VAR_13;
  }
  FUNC_2(VAR_10, VAR_9, VAR_5);
  VAR_7->fix.visual = VAR_3;
  VAR_7->fix.line_length = VAR_6 / 8;
 } else {
  int VAR_14;
  FUNC_2(VAR_9, VAR_10, VAR_5);
  for (VAR_14 = 0; VAR_14 < VAR_5 * 8; VAR_14++)
   VAR_10[VAR_14] = VAR_9[VAR_14/8] & (0x01 << (7 - VAR_14 % 8)) ? 0xff : 0x00;
  VAR_7->fix.visual = VAR_2;
  VAR_7->fix.line_length = VAR_6;
 }

 FUNC_0(VAR_9);
 VAR_8->bpp = VAR_7->var.bits_per_pixel;
 return 0;
}

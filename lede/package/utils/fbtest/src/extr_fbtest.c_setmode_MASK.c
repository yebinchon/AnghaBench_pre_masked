
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vidsize {int height; int width; } ;
struct pixelformat {int transp; int blue; int green; int red; int bpp; } ;
struct fb_var_screeninfo {int transp; int blue; int green; int red; int bits_per_pixel; int yres_virtual; int yres; int xres_virtual; int xres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,struct fb_var_screeninfo*) ;

int FUNC_1(int VAR_2, const struct pixelformat *VAR_3,const struct vidsize *VAR_4){
 struct fb_var_screeninfo VAR_5;
 int VAR_6;
 VAR_6 = FUNC_0 (VAR_2, VAR_0,&VAR_5);
 if (VAR_6<0) return -2;

 VAR_5.xres= VAR_4->width;
 VAR_5.xres_virtual = VAR_4->width;
 VAR_5.yres= VAR_4->height;
 VAR_5.yres_virtual = VAR_4->height;

 VAR_5.bits_per_pixel = VAR_3->bpp;
 VAR_5.red = VAR_3->red;
 VAR_5.green = VAR_3->green;
 VAR_5.blue = VAR_3->blue;
 VAR_5.transp = VAR_3->transp;

 VAR_6 = FUNC_0 (VAR_2, VAR_1,&VAR_5);
 if (VAR_6<0) return -1;
 return 0;
}

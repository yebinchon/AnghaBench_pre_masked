
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct bochs_device {int xres; int yres; int bpp; int stride; int yres_virtual; int fb_size; } ;


 int FUNC_0 (char*,int,int,int,int) ;
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
 int FUNC_1 (struct bochs_device*,int ,int) ;
 int FUNC_2 (struct bochs_device*,int,int) ;

void FUNC_3(struct bochs_device *VAR_11,
        struct drm_display_mode *VAR_12)
{
 VAR_11->xres = VAR_12->hdisplay;
 VAR_11->yres = VAR_12->vdisplay;
 VAR_11->bpp = 32;
 VAR_11->stride = VAR_12->hdisplay * (VAR_11->bpp / 8);
 VAR_11->yres_virtual = VAR_11->fb_size / VAR_11->stride;

 FUNC_0("%dx%d @ %d bpp, vy %d\n",
    VAR_11->xres, VAR_11->yres, VAR_11->bpp,
    VAR_11->yres_virtual);

 FUNC_2(VAR_11, 0x3c0, 0x20);

 FUNC_1(VAR_11, VAR_3, 0);
 FUNC_1(VAR_11, VAR_2, VAR_11->bpp);
 FUNC_1(VAR_11, VAR_6, VAR_11->xres);
 FUNC_1(VAR_11, VAR_8, VAR_11->yres);
 FUNC_1(VAR_11, VAR_1, 0);
 FUNC_1(VAR_11, VAR_5, VAR_11->xres);
 FUNC_1(VAR_11, VAR_4,
     VAR_11->yres_virtual);
 FUNC_1(VAR_11, VAR_7, 0);
 FUNC_1(VAR_11, VAR_9, 0);

 FUNC_1(VAR_11, VAR_3,
     VAR_0 | VAR_10);
}

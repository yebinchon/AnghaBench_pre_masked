
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int crtc; int vsync_count; int bus_error_count; int dma_end_count; int buffer_underrun_count; } ;
struct drm_device {struct hdlcd_drm_private* dev_private; } ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct hdlcd_drm_private*,int ) ;
 int FUNC_3 (struct hdlcd_drm_private*,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8;
 struct hdlcd_drm_private *VAR_10 = VAR_9->dev_private;
 unsigned long VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (VAR_11 & VAR_3)
  FUNC_1(&VAR_10->crtc);


 FUNC_3(VAR_10, VAR_4, VAR_11);

 return VAR_6;
}

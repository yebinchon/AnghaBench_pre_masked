
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int dummy; } ;
struct drm_device {struct hdlcd_drm_private* dev_private; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct hdlcd_drm_private*,int ) ;
 int FUNC_1 (struct hdlcd_drm_private*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_3)
{
 struct hdlcd_drm_private *VAR_4 = VAR_3->dev_private;

 unsigned long VAR_5 = FUNC_0(VAR_4, VAR_2);







 VAR_5 &= ~VAR_1;

 FUNC_1(VAR_4, VAR_2, VAR_5);
}

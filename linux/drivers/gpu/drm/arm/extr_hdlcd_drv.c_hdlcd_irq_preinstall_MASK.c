
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int dummy; } ;
struct drm_device {struct hdlcd_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdlcd_drm_private*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_2)
{
 struct hdlcd_drm_private *VAR_3 = VAR_2->dev_private;

 FUNC_0(VAR_3, VAR_1, 0);
 FUNC_0(VAR_3, VAR_0, ~0);
}

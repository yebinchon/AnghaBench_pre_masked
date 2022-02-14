
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {size_t transfer_buffer_length; } ;
struct TYPE_2__ {size_t size; } ;
struct udl_device {int lost_pixels; TYPE_1__ urbs; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 struct udl_device* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*,int ) ;

int FUNC_6(struct drm_device *VAR_1, struct urb *VAR_2, size_t VAR_3)
{
 struct udl_device *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_0(VAR_3 > VAR_4->urbs.size);

 VAR_2->transfer_buffer_length = VAR_3;
 VAR_5 = FUNC_5(VAR_2, VAR_0);
 if (VAR_5) {
  FUNC_4(VAR_2);
  FUNC_2(&VAR_4->lost_pixels, 1);
  FUNC_1("usb_submit_urb error %x\n", VAR_5);
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ transfer_buffer; } ;
struct udl_device {scalar_t__ mode_buf_len; } ;
struct drm_device {struct udl_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*) ;
 char* FUNC_2 (char*) ;
 struct urb* FUNC_3 (struct drm_device*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (struct drm_device*,struct urb*,int) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_1, int VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct udl_device *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 if (VAR_2 == VAR_0) {
  char *VAR_6;
  struct urb *VAR_7;
  VAR_7 = FUNC_3(VAR_3);
  if (!VAR_7)
   return;

  VAR_6 = (char *)VAR_7->transfer_buffer;
  VAR_6 = FUNC_6(VAR_6);
  VAR_6 = FUNC_4(VAR_6, VAR_2);
  VAR_6 = FUNC_7(VAR_6);

  VAR_6 = FUNC_2(VAR_6);
  VAR_5 = FUNC_5(VAR_3, VAR_7, VAR_6 - (char *)
     VAR_7->transfer_buffer);
 } else {
  if (VAR_4->mode_buf_len == 0) {
   FUNC_0("Trying to enable DPMS with no mode\n");
   return;
  }
  FUNC_1(VAR_1);
 }

}

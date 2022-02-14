
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ transfer_buffer; } ;
struct udl_device {int mode_buf_len; int mode_buf; } ;
struct drm_device {struct udl_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 struct urb* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct udl_device *VAR_3 = VAR_2->dev_private;
 struct urb *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = (char *)VAR_4->transfer_buffer;

 FUNC_1(VAR_5, VAR_3->mode_buf, VAR_3->mode_buf_len);
 VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_3->mode_buf_len);
 FUNC_0("write mode info %d\n", VAR_3->mode_buf_len);
 return VAR_6;
}

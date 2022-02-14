
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct qxl_crtc {int index; int base; } ;
struct drm_plane {int index; int base; } ;
struct drm_device {struct qxl_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qxl_crtc*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_device*,int *,struct qxl_crtc*,struct qxl_crtc*,int *,int *) ;
 int FUNC_3 (struct qxl_crtc*) ;
 int FUNC_4 (struct qxl_crtc*) ;
 struct qxl_crtc* FUNC_5 (int,int ) ;
 struct qxl_crtc* FUNC_6 (struct qxl_device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_6, int VAR_7)
{
 struct qxl_crtc *VAR_8;
 struct drm_plane *VAR_9, *VAR_10;
 struct qxl_device *VAR_11 = VAR_6->dev_private;
 int VAR_12;

 VAR_8 = FUNC_5(sizeof(struct qxl_crtc), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_6(VAR_11, 1 << VAR_7, VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_12 = -VAR_2;
  goto free_mem;
 }

 VAR_10 = FUNC_6(VAR_11, 1 << VAR_7, VAR_0);
 if (FUNC_0(VAR_10)) {
  VAR_12 = -VAR_2;
  goto clean_primary;
 }

 VAR_12 = FUNC_2(VAR_6, &VAR_8->base, VAR_9, VAR_10,
          &VAR_4, ((void*)0));
 if (VAR_12)
  goto clean_cursor;

 VAR_8->index = VAR_7;
 FUNC_1(&VAR_8->base, &VAR_5);
 return 0;

clean_cursor:
 FUNC_3(VAR_10);
 FUNC_4(VAR_10);
clean_primary:
 FUNC_3(VAR_9);
 FUNC_4(VAR_9);
free_mem:
 FUNC_4(VAR_8);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_client_dev {int dummy; } ;
struct drm_client_buffer {int dummy; } ;


 struct drm_client_buffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_client_buffer*) ;
 int FUNC_2 (struct drm_client_buffer*,int ,int ,int ) ;
 struct drm_client_buffer* FUNC_3 (struct drm_client_dev*,int ,int ,int ) ;
 int FUNC_4 (struct drm_client_buffer*) ;

struct drm_client_buffer *
FUNC_5(struct drm_client_dev *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct drm_client_buffer *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}

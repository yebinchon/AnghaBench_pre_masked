
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qxl_release {int dummy; } ;
struct qxl_drm_image {int dummy; } ;
struct qxl_device {int dummy; } ;


 int FUNC_0 (struct qxl_device*,struct qxl_release*,struct qxl_drm_image*,int const*,int,int,int,int ,int) ;

int FUNC_1(struct qxl_device *VAR_0,
       struct qxl_release *VAR_1,
       struct qxl_drm_image *VAR_2,
       const uint8_t *VAR_3,
       int VAR_4, int VAR_5, int VAR_6, int VAR_7,
       int VAR_8, int VAR_9)
{
 VAR_3 += VAR_5 * VAR_9 + VAR_4 * (VAR_8 / 8);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
           VAR_6, VAR_7, VAR_8, 0, VAR_9);
}

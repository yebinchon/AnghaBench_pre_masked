
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int dummy; } ;
struct drm_dp_aux {int dummy; } ;
struct analogix_dp_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct analogix_dp_device*,struct drm_dp_aux_msg*) ;
 struct analogix_dp_device* FUNC_1 (struct drm_dp_aux*) ;

__attribute__((used)) static ssize_t FUNC_2(struct drm_dp_aux *VAR_0,
           struct drm_dp_aux_msg *VAR_1)
{
 struct analogix_dp_device *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}

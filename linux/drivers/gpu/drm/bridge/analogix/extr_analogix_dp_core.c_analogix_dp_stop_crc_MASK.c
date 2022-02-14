
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct analogix_dp_device {int aux; } ;


 int FUNC_0 (int *) ;
 struct analogix_dp_device* FUNC_1 (struct drm_connector*) ;

int FUNC_2(struct drm_connector *VAR_0)
{
 struct analogix_dp_device *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_1->aux);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_panel {int dummy; } ;
struct drm_bridge {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_panel*) ;
 int FUNC_1 (struct device_node*) ;
 struct drm_bridge* FUNC_2 (struct device_node*) ;
 struct drm_panel* FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node const*,int,int) ;
 int FUNC_5 (struct device_node*) ;

int FUNC_6(const struct device_node *VAR_3,
    int VAR_4, int VAR_5,
    struct drm_panel **VAR_6,
    struct drm_bridge **VAR_7)
{
 int VAR_8 = -VAR_2;
 struct device_node *VAR_9;

 if (!VAR_6 && !VAR_7)
  return -VAR_0;
 if (VAR_6)
  *VAR_6 = ((void*)0);

 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (!VAR_9)
  return -VAR_1;

 if (!FUNC_1(VAR_9)) {
  FUNC_5(VAR_9);
  return -VAR_1;
 }

 if (VAR_6) {
  *VAR_6 = FUNC_3(VAR_9);
  if (!FUNC_0(*VAR_6))
   VAR_8 = 0;
  else
   *VAR_6 = ((void*)0);
 }


 if (VAR_7) {
  if (VAR_8) {
   *VAR_7 = FUNC_2(VAR_9);
   if (*VAR_7)
    VAR_8 = 0;
  } else {
   *VAR_7 = ((void*)0);
  }

 }

 FUNC_5(VAR_9);
 return VAR_8;
}

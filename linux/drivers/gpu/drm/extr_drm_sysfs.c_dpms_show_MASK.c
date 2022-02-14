
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dpms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 struct drm_connector* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct drm_connector *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->dpms);

 return FUNC_2(VAR_3, VAR_0, "%s\n",
   FUNC_1(VAR_5));
}

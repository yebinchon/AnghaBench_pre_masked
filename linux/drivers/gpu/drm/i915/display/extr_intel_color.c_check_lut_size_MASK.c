
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_property_blob const*) ;

__attribute__((used)) static int FUNC_2(const struct drm_property_blob *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != VAR_2) {
  FUNC_0("Invalid LUT size; got %d, expected %d\n",
         VAR_3, VAR_2);
  return -VAR_0;
 }

 return 0;
}

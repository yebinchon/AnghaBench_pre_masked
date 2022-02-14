
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {scalar_t__ length; int data; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct drm_property_blob *VAR_0,
         const struct drm_property_blob *VAR_1)
{
 if (VAR_0 && VAR_1)
  return VAR_0->length == VAR_1->length &&
   !FUNC_0(VAR_0->data, VAR_1->data, VAR_0->length);

 return !VAR_0 == !VAR_1;
}

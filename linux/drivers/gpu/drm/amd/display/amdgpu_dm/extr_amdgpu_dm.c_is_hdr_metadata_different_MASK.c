
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {scalar_t__ length; int data; } ;
struct drm_connector_state {struct drm_property_blob* hdr_output_metadata; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(const struct drm_connector_state *VAR_0,
     const struct drm_connector_state *VAR_1)
{
 struct drm_property_blob *VAR_2 = VAR_0->hdr_output_metadata;
 struct drm_property_blob *VAR_3 = VAR_1->hdr_output_metadata;

 if (VAR_2 != VAR_3) {
  if (VAR_2 && VAR_3 &&
      VAR_2->length == VAR_3->length)
   return FUNC_0(VAR_2->data, VAR_3->data,
          VAR_2->length);

  return 1;
 }

 return 0;
}

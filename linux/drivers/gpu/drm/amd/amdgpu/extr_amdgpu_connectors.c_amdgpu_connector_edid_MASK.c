
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_property_blob {int length; int data; } ;
struct drm_connector {struct drm_property_blob* edid_blob_ptr; } ;
struct amdgpu_connector {struct edid* edid; } ;


 int VAR_0 ;
 struct edid* FUNC_0 (int ,int ,int ) ;
 struct amdgpu_connector* FUNC_1 (struct drm_connector*) ;

struct edid *FUNC_2(struct drm_connector *VAR_1)
{
 struct amdgpu_connector *VAR_2 = FUNC_1(VAR_1);
 struct drm_property_blob *VAR_3 = VAR_1->edid_blob_ptr;

 if (VAR_2->edid) {
  return VAR_2->edid;
 } else if (VAR_3) {
  struct edid *VAR_4 = FUNC_0(VAR_3->data, VAR_3->length, VAR_0);
  if (VAR_4)
   VAR_2->edid = VAR_4;
 }
 return VAR_2->edid;
}

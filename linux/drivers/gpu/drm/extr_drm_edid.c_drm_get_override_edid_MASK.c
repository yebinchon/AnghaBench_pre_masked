
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_connector {TYPE_1__* edid_blob_ptr; scalar_t__ override_edid; } ;
struct TYPE_2__ {int data; } ;


 scalar_t__ FUNC_0 (struct edid*) ;
 struct edid* FUNC_1 (int ) ;
 struct edid* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static struct edid *FUNC_3(struct drm_connector *VAR_0)
{
 struct edid *VAR_1 = ((void*)0);

 if (VAR_0->override_edid)
  VAR_1 = FUNC_1(VAR_0->edid_blob_ptr->data);

 if (!VAR_1)
  VAR_1 = FUNC_2(VAR_0);

 return FUNC_0(VAR_1) ? ((void*)0) : VAR_1;
}

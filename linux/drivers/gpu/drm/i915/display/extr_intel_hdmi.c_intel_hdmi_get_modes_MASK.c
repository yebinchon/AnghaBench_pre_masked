
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct edid* detect_edid; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 TYPE_1__* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct edid *VAR_1;

 VAR_1 = FUNC_1(VAR_0)->detect_edid;
 if (VAR_1 == ((void*)0))
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}

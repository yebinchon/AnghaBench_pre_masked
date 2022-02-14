
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_3 (int ,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct edid*) ;
 int FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_8(struct drm_connector *VAR_0)
{
 struct edid *VAR_1;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_0->base.id, VAR_0->name);


 VAR_1 = FUNC_5(VAR_0);







 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_4(VAR_0);

 if (VAR_1 != ((void*)0)) {
  if (FUNC_3(FUNC_7(VAR_0),
            VAR_1)) {
   FUNC_2(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1);
  }

  FUNC_6(VAR_1);
 }
}

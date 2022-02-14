
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ptn3460_bridge {int bridge; struct edid* edid; int enabled; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptn3460_bridge* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ptn3460_bridge*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct drm_connector *VAR_3)
{
 struct ptn3460_bridge *VAR_4;
 u8 *VAR_5;
 int VAR_6, VAR_7 = 0;
 bool VAR_8;

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->edid)
  return FUNC_2(VAR_3, VAR_4->edid);

 VAR_8 = !VAR_4->enabled;
 FUNC_7(&VAR_4->bridge);

 VAR_5 = FUNC_5(VAR_0, VAR_1);
 if (!VAR_5) {
  FUNC_0("Failed to allocate EDID\n");
  return 0;
 }

 VAR_6 = FUNC_8(VAR_4, VAR_2, VAR_5,
   VAR_0);
 if (VAR_6) {
  FUNC_4(VAR_5);
  goto out;
 }

 VAR_4->edid = (struct edid *)VAR_5;
 FUNC_3(VAR_3, VAR_4->edid);

 VAR_7 = FUNC_2(VAR_3, VAR_4->edid);

out:
 if (VAR_8)
  FUNC_6(&VAR_4->bridge);

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_bridge {int dummy; } ;
struct anx78xx {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct anx78xx*) ;
 int FUNC_2 (struct anx78xx*) ;
 struct anx78xx* FUNC_3 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_0)
{
 struct anx78xx *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("Failed to initialize: %d\n", VAR_2);
  return;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_0("Failed to set HPD: %d\n", VAR_2);
}

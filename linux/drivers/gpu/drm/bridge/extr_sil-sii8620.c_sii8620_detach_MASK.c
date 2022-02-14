
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int rc_dev; } ;
struct drm_bridge {int dummy; } ;


 struct sii8620* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_bridge *VAR_0)
{
 struct sii8620 *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->rc_dev);
}

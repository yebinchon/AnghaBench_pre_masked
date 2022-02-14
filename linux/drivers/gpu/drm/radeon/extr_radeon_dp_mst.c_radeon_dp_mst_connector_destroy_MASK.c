
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder {int base; struct radeon_encoder* mst_encoder; } ;
struct radeon_connector {int base; struct radeon_connector* mst_encoder; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_encoder*) ;
 struct radeon_encoder* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_4(struct drm_connector *VAR_0)
{
 struct radeon_connector *VAR_1 = FUNC_3(VAR_0);
 struct radeon_encoder *VAR_2 = VAR_1->mst_encoder;

 FUNC_1(&VAR_2->base);
 FUNC_2(VAR_2);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}

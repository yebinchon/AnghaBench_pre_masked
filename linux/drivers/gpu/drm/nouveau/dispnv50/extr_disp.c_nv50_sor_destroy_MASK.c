
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mstm; } ;
struct nouveau_encoder {TYPE_1__ dp; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*) ;
 struct nouveau_encoder* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct drm_encoder *VAR_0)
{
 struct nouveau_encoder *VAR_1 = FUNC_2(VAR_0);
 FUNC_3(&VAR_1->dp.mstm);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}

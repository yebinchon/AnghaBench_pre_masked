
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_msto {int encoder; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_msto*) ;
 struct nv50_msto* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_3(struct drm_encoder *VAR_0)
{
 struct nv50_msto *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(&VAR_1->encoder);
 FUNC_1(VAR_1);
}

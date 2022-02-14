
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_mstc {int port; int connector; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nv50_mstc*) ;
 struct nv50_mstc* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_4(struct drm_connector *VAR_0)
{
 struct nv50_mstc *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->connector);
 FUNC_1(VAR_1->port);

 FUNC_2(VAR_1);
}

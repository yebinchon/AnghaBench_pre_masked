
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_atom {int state; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_atom*) ;
 struct nv50_atom* FUNC_2 (struct drm_atomic_state*) ;

__attribute__((used)) static void
FUNC_3(struct drm_atomic_state *VAR_0)
{
 struct nv50_atom *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(&VAR_1->state);
 FUNC_1(VAR_1);
}

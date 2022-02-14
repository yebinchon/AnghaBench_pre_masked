
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_atomic_state {int dummy; } ;
struct nv50_atom {struct drm_atomic_state state; int outp; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_2 (struct nv50_atom*) ;
 struct nv50_atom* FUNC_3 (int,int ) ;

__attribute__((used)) static struct drm_atomic_state *
FUNC_4(struct drm_device *VAR_1)
{
 struct nv50_atom *VAR_2;
 if (!(VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0)) ||
     FUNC_1(VAR_1, &VAR_2->state) < 0) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 FUNC_0(&VAR_2->outp);
 return &VAR_2->state;
}

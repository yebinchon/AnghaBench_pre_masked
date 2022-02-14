
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct TYPE_4__ {scalar_t__ mask; } ;
struct TYPE_3__ {scalar_t__ mask; } ;
struct nv50_wndw_atom {struct drm_plane_state state; TYPE_2__ set; TYPE_1__ clr; int point; int image; int csc; int xlut; int * ilut; int ntfy; int sema; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_plane*,struct drm_plane_state*) ;
 struct nv50_wndw_atom* FUNC_1 (int,int ) ;
 struct nv50_wndw_atom* FUNC_2 (int ) ;

__attribute__((used)) static struct drm_plane_state *
FUNC_3(struct drm_plane *VAR_1)
{
 struct nv50_wndw_atom *VAR_2 = FUNC_2(VAR_1->state);
 struct nv50_wndw_atom *VAR_3;
 if (!(VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0)))
  return ((void*)0);
 FUNC_0(VAR_1, &VAR_3->state);
 VAR_3->sema = VAR_2->sema;
 VAR_3->ntfy = VAR_2->ntfy;
 VAR_3->ilut = ((void*)0);
 VAR_3->xlut = VAR_2->xlut;
 VAR_3->csc = VAR_2->csc;
 VAR_3->image = VAR_2->image;
 VAR_3->point = VAR_2->point;
 VAR_3->clr.mask = 0;
 VAR_3->set.mask = 0;
 return &VAR_3->state;
}

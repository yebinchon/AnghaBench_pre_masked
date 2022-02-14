
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_head_atom {int state; } ;
struct drm_crtc {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 struct nv50_head_atom* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_crtc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct drm_crtc *VAR_1)
{
 struct nv50_head_atom *VAR_2;

 if (FUNC_0(!(VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0))))
  return;

 if (VAR_1->state)
  FUNC_3(VAR_1, VAR_1->state);

 FUNC_1(VAR_1, &VAR_2->state);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_crtc {int base; int t_vblank; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc4_crtc*) ;

void FUNC_3(struct vc4_crtc *VAR_0)
{
 VAR_0->t_vblank = FUNC_1();
 FUNC_0(&VAR_0->base);
 FUNC_2(VAR_0);
}

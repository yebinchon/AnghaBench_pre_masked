
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_aux_msg {int request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct drm_dp_aux_msg *VAR_3)
{





 if ((VAR_3->request & ~VAR_0) == VAR_1) {
  VAR_3->request &= VAR_0;
  VAR_3->request |= VAR_2;
 }
}

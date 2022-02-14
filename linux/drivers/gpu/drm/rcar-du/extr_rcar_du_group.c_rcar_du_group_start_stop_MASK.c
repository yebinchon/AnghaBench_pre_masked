
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_group {scalar_t__ used_crtcs; } ;


 int FUNC_0 (struct rcar_du_group*,int) ;

void FUNC_1(struct rcar_du_group *VAR_0, bool VAR_1)
{
 if (VAR_1) {
  if (VAR_0->used_crtcs++ != 0)
   FUNC_0(VAR_0, 0);
  FUNC_0(VAR_0, 1);
 } else {
  if (--VAR_0->used_crtcs == 0)
   FUNC_0(VAR_0, 0);
 }
}

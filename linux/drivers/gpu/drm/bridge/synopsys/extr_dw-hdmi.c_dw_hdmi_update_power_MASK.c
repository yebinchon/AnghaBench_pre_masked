
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int force; scalar_t__ bridge_is_on; scalar_t__ rxsense; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (struct dw_hdmi*) ;

__attribute__((used)) static void FUNC_2(struct dw_hdmi *VAR_3)
{
 int VAR_4 = VAR_3->force;

 if (VAR_3->disabled) {
  VAR_4 = VAR_0;
 } else if (VAR_4 == VAR_2) {
  if (VAR_3->rxsense)
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_0;
 }

 if (VAR_4 == VAR_0) {
  if (VAR_3->bridge_is_on)
   FUNC_0(VAR_3);
 } else {
  if (!VAR_3->bridge_is_on)
   FUNC_1(VAR_3);
 }
}

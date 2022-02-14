
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int rxsense; int mutex; int force; } ;


 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (struct dw_hdmi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dw_hdmi *VAR_0, bool VAR_1, bool VAR_2)
{
 FUNC_2(&VAR_0->mutex);

 if (!VAR_0->force) {




  if (!VAR_2)
   VAR_0->rxsense = 0;







  if (VAR_1)
   VAR_0->rxsense = 1;

  FUNC_1(VAR_0);
  FUNC_0(VAR_0);
 }
 FUNC_3(&VAR_0->mutex);
}

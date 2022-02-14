
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int padded; int box; scalar_t__ vertical; } ;
typedef TYPE_1__ uiBox ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(uiBox *VAR_2, int VAR_3)
{
 VAR_2->padded = VAR_3;
 if (VAR_2->padded)
  if (VAR_2->vertical)
   FUNC_0(VAR_2->box, VAR_1);
  else
   FUNC_0(VAR_2->box, VAR_0);
 else
  FUNC_0(VAR_2->box, 0);
}

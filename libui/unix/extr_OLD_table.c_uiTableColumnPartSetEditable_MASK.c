
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parts; } ;
typedef TYPE_1__ uiTableColumn ;
struct tablePart {int type; int r; } ;


 int FUNC_0 (int ,char*,int,int *) ;
 scalar_t__ FUNC_1 (int ,int) ;





void FUNC_2(uiTableColumn *VAR_0, int VAR_1, int VAR_2)
{
 struct tablePart *VAR_3;

 VAR_3 = (struct tablePart *) FUNC_1(VAR_0->parts, VAR_1);
 switch (VAR_3->type) {
 case 129:
 case 128:
  return;
 case 131:
 case 130:
  FUNC_0(VAR_3->r, "sensitive", VAR_2 != 0, ((void*)0));
  return;
 }
 FUNC_0(VAR_3->r, "editable", VAR_2 != 0, ((void*)0));
}

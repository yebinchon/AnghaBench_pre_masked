
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parts; } ;
typedef TYPE_1__ uiTableColumn ;
struct tablePart {int colorColumn; } ;


 scalar_t__ FUNC_0 (int ,int) ;

void FUNC_1(uiTableColumn *VAR_0, int VAR_1, int VAR_2)
{
 struct tablePart *VAR_3;

 VAR_3 = (struct tablePart *) FUNC_0(VAR_0->parts, VAR_1);
 VAR_3->colorColumn = VAR_2;

}

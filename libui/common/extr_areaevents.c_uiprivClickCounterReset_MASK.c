
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ prevTime; scalar_t__ rectY1; scalar_t__ rectX1; scalar_t__ rectY0; scalar_t__ rectX0; scalar_t__ curButton; } ;
typedef TYPE_1__ uiprivClickCounter ;



void FUNC_0(uiprivClickCounter *VAR_0)
{
 VAR_0->curButton = 0;
 VAR_0->rectX0 = 0;
 VAR_0->rectY0 = 0;
 VAR_0->rectX1 = 0;
 VAR_0->rectY1 = 0;
 VAR_0->prevTime = 0;
 VAR_0->count = 0;
}

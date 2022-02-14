
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int curButton; int count; int rectX0; int rectY0; int rectX1; int rectY1; uintptr_t prevTime; } ;
typedef TYPE_1__ uiprivClickCounter ;
typedef int int32_t ;



int FUNC_0(uiprivClickCounter *VAR_0, int VAR_1, int VAR_2, int VAR_3, uintptr_t VAR_4, uintptr_t VAR_5, int32_t VAR_6, int32_t VAR_7)
{

 if (VAR_1 != VAR_0->curButton)
  VAR_0->count = 0;


 if (VAR_2 < VAR_0->rectX0)
  VAR_0->count = 0;
 if (VAR_3 < VAR_0->rectY0)
  VAR_0->count = 0;
 if (VAR_2 >= VAR_0->rectX1)
  VAR_0->count = 0;
 if (VAR_3 >= VAR_0->rectY1)
  VAR_0->count = 0;



 if ((VAR_4 - VAR_0->prevTime) > VAR_5)
  VAR_0->count = 0;

 VAR_0->count++;


 VAR_0->curButton = VAR_1;
 VAR_0->prevTime = VAR_4;
 VAR_0->rectX0 = VAR_2 - VAR_6;
 VAR_0->rectY0 = VAR_3 - VAR_7;
 VAR_0->rectX1 = VAR_2 + VAR_6;
 VAR_0->rectY1 = VAR_3 + VAR_7;

 return VAR_0->count;
}

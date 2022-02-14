
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t* u16tou8; TYPE_1__* graphemes; } ;
typedef TYPE_2__ uiAttributedString ;
struct TYPE_5__ {size_t* graphemesToPoints; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 () ;

size_t FUNC_2(uiAttributedString *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->graphemes->graphemesToPoints[VAR_1];
 if (FUNC_1())
  VAR_1 = VAR_0->u16tou8[VAR_1];
 return VAR_1;
}

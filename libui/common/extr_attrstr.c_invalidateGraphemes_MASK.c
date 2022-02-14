
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* graphemes; } ;
typedef TYPE_1__ uiAttributedString ;
struct TYPE_5__ {struct TYPE_5__* graphemesToPoints; struct TYPE_5__* pointsToGraphemes; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(uiAttributedString *VAR_0)
{
 if (VAR_0->graphemes == ((void*)0))
  return;
 FUNC_0(VAR_0->graphemes->pointsToGraphemes);
 FUNC_0(VAR_0->graphemes->graphemesToPoints);
 FUNC_0(VAR_0->graphemes);
 VAR_0->graphemes = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grip_mp {TYPE_1__** port; } ;
struct gameport {int dummy; } ;
struct TYPE_2__ {int dev; scalar_t__ registered; } ;


 int FUNC_0 (struct gameport*) ;
 struct grip_mp* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct grip_mp*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_0)
{
 struct grip_mp *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
  if (VAR_1->port[VAR_2]->registered)
   FUNC_3(VAR_1->port[VAR_2]->dev);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}

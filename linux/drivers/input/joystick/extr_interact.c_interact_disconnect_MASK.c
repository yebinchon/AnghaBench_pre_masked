
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interact {int dev; } ;
struct gameport {int dummy; } ;


 int FUNC_0 (struct gameport*) ;
 struct interact* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct interact*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_0)
{
 struct interact *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->dev);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}

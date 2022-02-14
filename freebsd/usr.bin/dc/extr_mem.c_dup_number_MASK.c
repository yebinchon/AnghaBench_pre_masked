
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct number {int number; int scale; } ;


 int FUNC_0 (int ) ;
 struct number* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

struct number *
FUNC_3(const struct number *VAR_0)
{
 struct number *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 VAR_1->scale = VAR_0->scale;
 VAR_1->number = FUNC_0(VAR_0->number);
 FUNC_2(VAR_1->number);
 return (VAR_1);
}

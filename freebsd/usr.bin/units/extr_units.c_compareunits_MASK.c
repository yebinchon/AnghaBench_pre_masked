
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {int denominator; int numerator; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct unittype * VAR_0, struct unittype * VAR_1)
{
 return
 FUNC_0(VAR_0->numerator, VAR_1->numerator) ||
 FUNC_0(VAR_0->denominator, VAR_1->denominator);
}

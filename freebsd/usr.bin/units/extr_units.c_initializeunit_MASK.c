
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {double factor; double offset; scalar_t__ quantity; int ** denominator; int * numerator; } ;



__attribute__((used)) static void
FUNC_0(struct unittype * VAR_0)
{
 VAR_0->numerator[0] = *(VAR_0->denominator[0] = ((void*)0));
 VAR_0->factor = 1.0;
 VAR_0->offset = 0.0;
 VAR_0->quantity = 0;
}

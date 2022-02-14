
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int a; int b; int g; int r; int underlineColor; } ;
struct TYPE_7__ {int features; TYPE_1__ color; int underline; int stretch; int italic; int weight; int size; int family; } ;
struct TYPE_8__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ uiAttribute ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const uiAttribute *VAR_0, const uiAttribute *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;
 if (VAR_0->type != VAR_1->type)
  return 0;
 switch (VAR_0->type) {
 case 135:
  return FUNC_1(VAR_0->u.family, VAR_1->u.family);
 case 132:

  return VAR_0->u.size == VAR_1->u.size;
 case 128:
  return VAR_0->u.weight == VAR_1->u.weight;
 case 133:
  return VAR_0->u.italic == VAR_1->u.italic;
 case 131:
  return VAR_0->u.stretch == VAR_1->u.stretch;
 case 130:
  return VAR_0->u.underline == VAR_1->u.underline;
 case 129:
  if (VAR_0->u.color.underlineColor != VAR_1->u.color.underlineColor)
   return 0;

 case 136:
 case 137:

  return (VAR_0->u.color.r == VAR_1->u.color.r) &&
   (VAR_0->u.color.g == VAR_1->u.color.g) &&
   (VAR_0->u.color.b == VAR_1->u.color.b) &&
   (VAR_0->u.color.a == VAR_1->u.color.a);
 case 134:
  return FUNC_0(VAR_0->u.features, VAR_1->u.features);
 }

 return 0;
}

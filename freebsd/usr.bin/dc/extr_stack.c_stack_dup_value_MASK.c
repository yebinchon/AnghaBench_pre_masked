
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * string; int num; } ;
struct value {int type; int * array; TYPE_1__ u; } ;





 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int * FUNC_3 (int *) ;

struct value *
FUNC_4(const struct value *VAR_0, struct value *VAR_1)
{

 VAR_1->type = VAR_0->type;

 switch (VAR_0->type) {
 case 130:
  break;
 case 129:
  VAR_1->u.num = FUNC_1(VAR_0->u.num);
  break;
 case 128:
  VAR_1->u.string = FUNC_3(VAR_0->u.string);
  if (VAR_1->u.string == ((void*)0))
   FUNC_2(1, ((void*)0));
  break;
 }

 VAR_1->array = VAR_0->array == ((void*)0) ? ((void*)0) : FUNC_0(VAR_0->array);

 return (VAR_1);
}

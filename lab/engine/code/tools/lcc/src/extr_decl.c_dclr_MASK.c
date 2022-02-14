
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_16__ {int oldstyle; int proto; } ;
struct TYPE_17__ {TYPE_1__ f; } ;
struct TYPE_18__ {int op; int size; TYPE_2__ u; struct TYPE_18__* type; } ;
typedef int Symbol ;



 int VAR_0 ;




 TYPE_3__* FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (char**,int **,int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int,TYPE_3__*) ;
 int FUNC_6 (char*,TYPE_3__*) ;

__attribute__((used)) static Type FUNC_7(Type VAR_1, char **VAR_2, Symbol **VAR_3, int VAR_4) {
 Type VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);

 for ( ; VAR_5; VAR_5 = VAR_5->type)
  switch (VAR_5->op) {
  case 129:
   VAR_1 = FUNC_4(VAR_1);
   break;
  case 130:
   VAR_1 = FUNC_3(VAR_1, VAR_5->u.f.proto,
    VAR_5->u.f.oldstyle);
   break;
  case 132:
   VAR_1 = FUNC_0(VAR_1, VAR_5->size, 0);
   break;
  case 131: case 128:
   VAR_1 = FUNC_5(VAR_5->op, VAR_1);
   break;
  default: FUNC_1(0);
  }
 if (VAR_0 >= 2 && VAR_1->size > 32767)
  FUNC_6("more than 32767 bytes in `%t'\n", VAR_1);
 return VAR_1;
}

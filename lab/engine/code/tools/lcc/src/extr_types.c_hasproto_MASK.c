
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_5__ {int proto; } ;
struct TYPE_6__ {TYPE_1__ f; } ;
struct TYPE_7__ {int op; TYPE_2__ u; struct TYPE_7__* type; } ;
 int FUNC_0 (int ) ;

int FUNC_1(Type VAR_0) {
 if (VAR_0 == 0)
  return 1;
 switch (VAR_0->op) {
 case 138: case 128: case 138 +128: case 133:
 case 139:
  return FUNC_1(VAR_0->type);
 case 135:
  return FUNC_1(VAR_0->type) && VAR_0->u.f.proto;
 case 132: case 131:
 case 129: case 136: case 137: case 134: case 130:
  return 1;
 }
 FUNC_0(0); return 0;
}

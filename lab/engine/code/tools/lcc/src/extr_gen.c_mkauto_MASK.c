
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; int offset; } ;
struct TYPE_7__ {scalar_t__ sclass; TYPE_2__ x; TYPE_1__* type; } ;
struct TYPE_5__ {int align; scalar_t__ size; } ;
typedef TYPE_3__* Symbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(Symbol VAR_2) {
 FUNC_0(VAR_2->sclass == VAR_0);
 VAR_1 = FUNC_1(VAR_1 + VAR_2->type->size, VAR_2->type->align);
 VAR_2->x.offset = -VAR_1;
 VAR_2->x.name = FUNC_2(-VAR_1);
}

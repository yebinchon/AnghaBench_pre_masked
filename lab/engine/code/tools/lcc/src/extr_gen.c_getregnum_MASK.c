
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__** syms; } ;
struct TYPE_7__ {TYPE_1__* regnode; } ;
struct TYPE_8__ {TYPE_2__ x; } ;
struct TYPE_6__ {int number; } ;
typedef TYPE_4__* Node ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(Node VAR_1) {
 FUNC_0(VAR_1 && VAR_1->syms[VAR_0] && VAR_1->syms[VAR_0]->x.regnode);
 return VAR_1->syms[VAR_0]->x.regnode->number;
}

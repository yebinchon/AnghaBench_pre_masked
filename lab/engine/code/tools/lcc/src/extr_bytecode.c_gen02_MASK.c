
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i; } ;
struct TYPE_8__ {TYPE_3__ v; } ;
struct TYPE_7__ {TYPE_2__ c; } ;
struct TYPE_10__ {int op; TYPE_1__ u; struct TYPE_10__** syms; } ;
typedef TYPE_4__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(Node VAR_4) {
 FUNC_0(VAR_4);
 if (FUNC_1(VAR_4->op) == VAR_0) {
  FUNC_0(VAR_4->syms[0]);
  VAR_2 += (VAR_4->syms[0]->u.c.v.i < 4 ? 4 : VAR_4->syms[0]->u.c.v.i);
 } else if (FUNC_1(VAR_4->op) == VAR_1) {
  VAR_3 = (VAR_2 > VAR_3 ? VAR_2 : VAR_3);
  VAR_2 = 0;
 }
}

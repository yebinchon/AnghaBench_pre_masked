
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nextthink; int (* think ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gentity_t ;
struct TYPE_6__ {int time; } ;


 int FUNC_0 (char*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (gentity_t *VAR_1) {
 int VAR_2;

 VAR_2 = VAR_1->nextthink;
 if (VAR_2 <= 0) {
  return;
 }
 if (VAR_2 > VAR_0.time) {
  return;
 }

 VAR_1->nextthink = 0;
 if (!VAR_1->think) {
  FUNC_0 ( "NULL ent->think");
 }
 VAR_1->think (VAR_1);
}
